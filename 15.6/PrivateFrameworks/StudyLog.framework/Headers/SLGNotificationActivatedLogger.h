// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLGNOTIFICATIONACTIVATEDLOGGER_H
#define SLGNOTIFICATIONACTIVATEDLOGGER_H

@class NSMutableSet, NSMutableDictionary, NSString;
@protocol SLGActivatableLogging;

#import <Foundation/Foundation.h>


@interface SLGNotificationActivatedLogger : NSObject <SLGActivatableLogging>

 {
    id<SLGActivatableLogging> *_logger;
    os_unfair_lock_s _lock;
    NSMutableSet *_activeReasons;
    NSMutableDictionary *_registrationsByReason;
}


@property (copy, nonatomic) id *activationHandler;
@property (nonatomic, getter=isActive) BOOL active;
@property (copy, nonatomic) id *deactivationHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEnabled;
-(id)initWithLogger:(id)arg0 ;
-(void)_beginLoggingForReason:(id)arg0 ;
-(void)_cancelRegistrations;
-(void)_endLoggingForReason:(id)arg0 ;
-(void)addBeginNotification:(id)arg0 endNotification:(id)arg1 ;
-(void)invalidate;
// -(void)logBlock:(id)arg0 domain:(unk)arg1  ;
// -(void)logBlock:(id)arg0 domain:(unk)arg1 completion:(id)arg2  ;
// -(void)logBlock:(id)arg0 domain:(unk)arg1 tags:(id)arg2  ;
// -(void)logBlock:(id)arg0 domain:(unk)arg1 tags:(id)arg2 completion:(id)arg3  ;


@end


#endif