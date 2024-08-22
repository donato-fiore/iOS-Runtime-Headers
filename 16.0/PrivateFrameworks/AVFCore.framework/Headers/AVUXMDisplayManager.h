// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVUXMDISPLAYMANAGER_H
#define AVUXMDISPLAYMANAGER_H


#import <Foundation/Foundation.h>

#import "AVDisplayCriteria.h"

@interface AVUXMDisplayManager : NSObject {
    AVDisplayCriteria *_preferredDisplayCriteria;
}


@property (copy, nonatomic) AVDisplayCriteria *preferredDisplayCriteria;


+(id)sharedAVKitUXMDisplayManager;
-(id)currentUXMDisplayCriteria;
-(id)init;
-(id)initInternal;
-(void)_updateUXMWithDisplayCriteria:(id)arg0 ;
-(void)_updateUXMWithDisplayCriteriaWithLock:(id)arg0 ;
-(void)dealloc;


@end


#endif