// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKNOTIFICATIONOBSERVATION_H
#define CRKNOTIFICATIONOBSERVATION_H

@class NSNotificationCenter, NSString;
@protocol CRKObservation;

#import <Foundation/Foundation.h>


@interface CRKNotificationObservation : NSObject <CRKObservation>



@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (copy, nonatomic) id *notificationHandler; // ivar: _notificationHandler
@property (readonly, copy, nonatomic) NSString *notificationName; // ivar: _notificationName
@property (retain, nonatomic) NSObject *object; // ivar: _object


+(id)observationWithNotificationCenter:(id)arg0 notificationName:(id)arg1 object:(id)arg2 notificationHandler:(id)arg3 ;
-(id)initWithNotificationCenter:(id)arg0 notificationName:(id)arg1 object:(id)arg2 notificationHandler:(id)arg3 ;
-(void)beginObserving;
-(void)dealloc;
-(void)endObserving;
-(void)invalidate;
-(void)notificationDidFire:(id)arg0 ;


@end


#endif