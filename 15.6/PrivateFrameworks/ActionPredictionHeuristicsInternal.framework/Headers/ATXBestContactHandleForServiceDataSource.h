// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXBESTCONTACTHANDLEFORSERVICEDATASOURCE_H
#define ATXBESTCONTACTHANDLEFORSERVICEDATASOURCE_H

@class _PASLock, NSString;
@protocol IDSIDQueryControllerDelegate;

#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXBestContactHandleForServiceDataSource : NSObject <IDSIDQueryControllerDelegate>

 {
    ATXHeuristicDevice *_device;
    _PASLock *_lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_getBestGuessFromRankedHandle:(id)arg0 forService:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)allHandlesForContact:(id)arg0 callback:(id)arg1 ;
-(void)bestHandleForContact:(id)arg0 service:(id)arg1 callback:(id)arg2 ;
-(void)idStatusUpdatedForDestinations:(id)arg0 service:(id)arg1 ;


@end


#endif