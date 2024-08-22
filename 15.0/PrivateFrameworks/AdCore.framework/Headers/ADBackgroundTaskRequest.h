// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADBACKGROUNDTASKREQUEST_H
#define ADBACKGROUNDTASKREQUEST_H

@class NSString, NSDate;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface ADBackgroundTaskRequest : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity
@property (nonatomic) BOOL allowBattery;
@property (nonatomic) NSInteger backgroundTaskRetryCount;
@property (retain, nonatomic) NSObject<OS_xpc_object> *criteria; // ivar: _criteria
@property (nonatomic) NSInteger delay;
@property (nonatomic) NSInteger gracePeriod;
@property (nonatomic) BOOL isCPUIntensive;
@property (nonatomic) BOOL isRepeating;
@property (nonatomic) BOOL performDeferralCheck; // ivar: _performDeferralCheck
@property (retain, nonatomic) NSString *priority;
@property (readonly, copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (nonatomic) BOOL requireBuddyComplete;
@property (nonatomic) BOOL requireClassCData;
@property (nonatomic) BOOL requireSleep;
@property (nonatomic) BOOL requiresNetworkConnectivity;
@property (readonly, nonatomic) BOOL shouldDefer;
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


-(BOOL)continueTask;
-(BOOL)deferTask;
-(BOOL)finishTask;
-(BOOL)taskCanContinueForTime:(id)arg0 ;
-(BOOL)taskIsContinuing;
-(BOOL)taskIsDeferred;
-(CGFloat)getPropertyAsDouble:(id)arg0 ;
-(NSInteger)getPropertyAsInteger:(id)arg0 ;
-(id)copyBackgroundTaskAgentCriteria;
-(id)description;
-(id)dictionaryRepresentation;
-(id)getPropertyAsDate:(id)arg0 ;
-(id)getPropertyAsString:(id)arg0 ;
-(id)initWithCriteria:(id)arg0 ID:(id)arg1 activity:(id)arg2 ;
-(id)initWithID:(id)arg0 ;
-(void)_backgroundDeferralCheck:(id)arg0 completion:(id)arg1 ;
-(void)endBackgroundDeferralCheck;
-(void)setPropertyAsDate:(id)arg0 value:(id)arg1 ;
-(void)setPropertyAsDouble:(id)arg0 value:(CGFloat)arg1 ;
-(void)setPropertyAsInteger:(id)arg0 value:(NSInteger)arg1 ;
-(void)setPropertyAsString:(id)arg0 value:(id)arg1 ;
-(void)startBackgroundDeferralCheckForTime:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif