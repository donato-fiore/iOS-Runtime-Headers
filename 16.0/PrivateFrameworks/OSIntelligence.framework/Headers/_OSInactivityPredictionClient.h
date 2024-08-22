// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _OSINACTIVITYPREDICTIONCLIENT_H
#define _OSINACTIVITYPREDICTIONCLIENT_H

@class NSXPCConnection, NSString;
@protocol _OSInactivityPredictionProtocol_Private, _OSInactivityPredictionProtocol;

#import <Foundation/Foundation.h>


@interface _OSInactivityPredictionClient : NSObject <_OSInactivityPredictionProtocol_Private, _OSInactivityPredictionProtocol>



@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)forceInactivityTwoStageModel;
-(BOOL)hasEnoughInactivityHistory;
-(BOOL)overrideRecommendedWaitTimeTo:(CGFloat)arg0 ;
-(BOOL)restoreInactivityModel;
-(BOOL)restoreRecommendedWaitTime;
-(CGFloat)recommendedWaitTime;
-(id)backedUpData;
-(id)deviceUsageDiagnosis;
-(id)fixModelOutput:(id)arg0 ;
-(id)inactivityHistoryDiagnosis;
-(id)init;
-(id)longInactivityPredictionResultAtDate:(id)arg0 withError:(*id)arg1 ;
-(id)longInactivityPredictionResultWithError:(*id)arg0 ;
-(id)modelDescription;
-(id)unfixModelOutput;
-(void)backedUpDataWithHandler:(id)arg0 ;
-(void)deviceUsageDiagnosisWithHandler:(id)arg0 ;
-(void)fixModelOutput:(id)arg0 withHandler:(id)arg1 ;
-(void)forceInactivityTwoStageModelWithHandler:(id)arg0 ;
-(void)hasEnoughInactivityHistoryWithHandler:(id)arg0 ;
-(void)inactivityHistoryDiagnosisWithHandler:(id)arg0 ;
-(void)longInactivityPredictionResultAtDate:(id)arg0 withHandler:(id)arg1 ;
-(void)longInactivityPredictionResultWithHandler:(id)arg0 ;
-(void)modelDescriptionWithHandler:(id)arg0 ;
-(void)overrideRecommendedWaitTimeTo:(CGFloat)arg0 withHandler:(id)arg1 ;
-(void)recommendedWaitTimeWithHandler:(id)arg0 ;
-(void)restoreInactivityModelWithHandler:(id)arg0 ;
-(void)restoreRecommendedWaitTimeWithHandler:(id)arg0 ;
-(void)unfixModelOutputWithHandler:(id)arg0 ;


@end


#endif