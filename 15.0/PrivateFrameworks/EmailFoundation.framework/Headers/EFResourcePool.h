// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFRESOURCEPOOL_H
#define EFRESOURCEPOOL_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "EFQueue.h"

@interface EFResourcePool : NSObject {
    os_unfair_lock_s _handleResourceLock;
}


@property (readonly, nonatomic) EFQueue *activeResources; // ivar: _activeResources
@property (readonly, nonatomic) NSMutableSet *inactiveResources; // ivar: _inactiveResources
@property (nonatomic) NSUInteger uncreatedResourcesCount; // ivar: _uncreatedResourcesCount


-(id)acquireResource;
-(id)initWithCount:(NSUInteger)arg0 ;
-(void)releaseResource:(id)arg0 ;


@end


#endif