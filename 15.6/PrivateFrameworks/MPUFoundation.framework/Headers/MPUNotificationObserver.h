// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPUNOTIFICATIONOBSERVER_H
#define MPUNOTIFICATIONOBSERVER_H


#import <Foundation/Foundation.h>


@interface MPUNotificationObserver : NSObject

@property (retain, nonatomic) id *notificationObservationToken; // ivar: _notificationObservationToken


+(id)observerWithName:(id)arg0 object:(id)arg1 queue:(id)arg2 observationHandler:(id)arg3 ;
-(id)initWithName:(id)arg0 object:(id)arg1 queue:(id)arg2 observationHandler:(id)arg3 ;
-(void)dealloc;


@end


#endif