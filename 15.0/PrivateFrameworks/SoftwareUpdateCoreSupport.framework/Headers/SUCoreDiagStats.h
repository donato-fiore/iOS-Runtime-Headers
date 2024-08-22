// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCOREDIAGSTATS_H
#define SUCOREDIAGSTATS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SUCoreDiagStats : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger anomalyAllIndications; // ivar: _anomalyAllIndications
@property (nonatomic) NSInteger anomalyCount; // ivar: _anomalyCount
@property (nonatomic) NSInteger anomalyIndicationsCount; // ivar: _anomalyIndicationsCount
@property (nonatomic) NSInteger beginCount; // ivar: _beginCount
@property (nonatomic) NSInteger endFailAllIndications; // ivar: _endFailAllIndications
@property (nonatomic) NSInteger endFailCount; // ivar: _endFailCount
@property (nonatomic) NSInteger endFailIndicationsCount; // ivar: _endFailIndicationsCount
@property (nonatomic) NSInteger endSuccessCount; // ivar: _endSuccessCount
@property (nonatomic) NSInteger errorAllIndications; // ivar: _errorAllIndications
@property (nonatomic) NSInteger errorCount; // ivar: _errorCount
@property (nonatomic) NSInteger errorIndicationsCount; // ivar: _errorIndicationsCount
@property (nonatomic) NSInteger failureAllIndications; // ivar: _failureAllIndications
@property (nonatomic) NSInteger failureCount; // ivar: _failureCount
@property (nonatomic) NSInteger failureIndicationsCount; // ivar: _failureIndicationsCount
@property (nonatomic) NSInteger faultAllIndications; // ivar: _faultAllIndications
@property (nonatomic) NSInteger faultCount; // ivar: _faultCount
@property (nonatomic) NSInteger faultIndicationsCount; // ivar: _faultIndicationsCount
@property (nonatomic) NSInteger stateEventCount; // ivar: _stateEventCount


+(BOOL)supportsSecureCoding;
-(BOOL)encounteredProblems;
-(NSInteger)allIndications;
-(id)copy;
-(id)description;
-(id)init;
-(id)initByCombining:(id)arg0 withAdditonal:(id)arg1 ;
-(id)initByCombining:(id)arg0 withBeginCount:(NSInteger)arg1 withEndSuccessCount:(NSInteger)arg2 withEndFailCount:(NSInteger)arg3 withEndFailIndicationsCount:(NSInteger)arg4 withEndFailAllIndications:(NSInteger)arg5 withErrorCount:(NSInteger)arg6 withErrorIndicationsCount:(NSInteger)arg7 withErrorAllIndications:(NSInteger)arg8 withAnomalyCount:(NSInteger)arg9 withAnomalyIndicationsCount:(NSInteger)arg10 withAnomalyAllIndications:(NSInteger)arg11 withFailureCount:(NSInteger)arg12 withFailureIndicationsCount:(NSInteger)arg13 withFailureAllIndications:(NSInteger)arg14 withFaultCount:(NSInteger)arg15 withFaultIndicationsCount:(NSInteger)arg16 withFaultAllIndications:(NSInteger)arg17 withStateEventCount:(NSInteger)arg18 ;
-(id)initIgnoringSuccessRelated;
-(id)initWithBeginCount:(NSInteger)arg0 withEndSuccessCount:(NSInteger)arg1 withEndFailCount:(NSInteger)arg2 withEndFailIndicationsCount:(NSInteger)arg3 withEndFailAllIndications:(NSInteger)arg4 withErrorCount:(NSInteger)arg5 withErrorIndicationsCount:(NSInteger)arg6 withErrorAllIndications:(NSInteger)arg7 withAnomalyCount:(NSInteger)arg8 withAnomalyIndicationsCount:(NSInteger)arg9 withAnomalyAllIndications:(NSInteger)arg10 withFailureCount:(NSInteger)arg11 withFailureIndicationsCount:(NSInteger)arg12 withFailureAllIndications:(NSInteger)arg13 withFaultCount:(NSInteger)arg14 withFaultIndicationsCount:(NSInteger)arg15 withFaultAllIndications:(NSInteger)arg16 withStateEventCount:(NSInteger)arg17 ;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(id)summaryOfProblems;
-(void)combineStartingFrom:(id)arg0 endingWith:(id)arg1 ;
-(void)combineWithStats:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif