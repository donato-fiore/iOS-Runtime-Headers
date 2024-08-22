// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXLOCALNOTIFICATIONHANDLER_H
#define AXLOCALNOTIFICATIONHANDLER_H



#import "VISAXNotificationHandler.h"

@interface AXLocalNotificationHandler : VISAXNotificationHandler

@property (retain, nonatomic, setter=_setOpaqueObserver:) id *_opaqueObserver; // ivar: _opaqueObserver


-(id)_notificationTypeDescription;
-(void)_startObserving;
-(void)_startObservingWithObject:(id)arg0 ;
-(void)_stopObserving;
-(void)_stopObservingWithObject:(id)arg0 ;


@end


#endif