// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LAANALYTICSEVALUATION_H
#define LAANALYTICSEVALUATION_H



#import "LAAnalytics.h"

@interface LAAnalyticsEvaluation : LAAnalytics {
    BOOL _biometryStarted;
    BOOL _passcodeStarted;
}


@property (readonly, nonatomic) NSInteger authenticationTypes; // ivar: _authenticationTypes
@property (readonly, nonatomic) NSInteger biometryAttempts; // ivar: _biometryAttempts
@property (readonly, nonatomic) NSInteger biometryFailures; // ivar: _biometryFailures
@property (readonly, nonatomic) NSInteger biometryNoMatches; // ivar: _biometryNoMatches
@property (readonly, nonatomic) NSInteger biometryResult; // ivar: _biometryResult
@property (readonly, nonatomic) NSInteger biometryType; // ivar: _biometryType
@property (readonly, nonatomic) NSInteger passcodeAttempts; // ivar: _passcodeAttempts
@property (readonly, nonatomic) NSInteger passcodeFailures; // ivar: _passcodeFailures
@property (readonly, nonatomic) NSInteger passcodeResult; // ivar: _passcodeResult
@property (readonly, nonatomic) NSInteger policy; // ivar: _policy
@property (readonly, nonatomic) NSInteger result; // ivar: _result


-(id)buildPayload;
-(id)initWithAcl;
-(id)initWithPolicy:(NSInteger)arg0 ;
-(void)_biometryAttempt:(NSInteger)arg0 ;
-(void)_passcodeAccepted:(BOOL)arg0 ;
-(void)authenticationAttempt:(NSInteger)arg0 event:(NSInteger)arg1 ;
-(void)authenticationHasEvent:(NSInteger)arg0 ;
-(void)authenticationResult:(NSInteger)arg0 event:(NSInteger)arg1 ;
-(void)authenticationStartedForEvent:(NSInteger)arg0 ;
-(void)biometryType:(NSInteger)arg0 ;
-(void)evaluationResult:(NSInteger)arg0 ;


@end


#endif