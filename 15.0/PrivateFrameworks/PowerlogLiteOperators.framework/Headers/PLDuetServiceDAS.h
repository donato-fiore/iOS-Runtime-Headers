// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLDUETSERVICEDAS_H
#define PLDUETSERVICEDAS_H

@class PLXPCListenerOperatorComposition, PLService;

#import <Foundation/Foundation.h>


@interface PLDuetServiceDAS : NSObject

@property (retain) PLXPCListenerOperatorComposition *dasActivityEventListener; // ivar: _dasActivityEventListener
@property (retain) PLXPCListenerOperatorComposition *dasBudgetEventListener; // ivar: _dasBudgetEventListener
@property (retain) PLXPCListenerOperatorComposition *dasDataBudgetEventListener; // ivar: _dasDataBudgetEventListener
@property (retain) PLXPCListenerOperatorComposition *dasEnergyReportEventListener; // ivar: _dasEnergyReportEventListener
@property (retain) PLXPCListenerOperatorComposition *dasInfoEventListener; // ivar: _dasInfoEventListener
@property (retain) PLXPCListenerOperatorComposition *dasPredictionEventListener; // ivar: _dasPredictionEventListener
@property (weak) PLService *duetService; // ivar: _duetService


+(id)entryEventBackwardDefinitionsDASEnergyBudgetReport;
+(id)entryEventForwardDefinitionsDASApplicationPrediction;
+(id)entryEventForwardDefinitionsDASDataBudgetAvailable;
+(id)entryEventForwardDefinitionsDASEnergyBudgetAvailable;
+(id)entryEventForwardDefinitionsDASPrediction;
+(id)entryEventNoneDefinitionsDASActivity;
+(id)entryEventNoneDefinitionsDASActivityDropCount;
+(id)entryEventNoneDefinitionsDASInfo;
-(id)init;
-(void)didReceiveDASActivityEventWithPayload:(id)arg0 ;
-(void)didReceiveDASBudgetEventWithPayload:(id)arg0 ;
-(void)didReceiveDASDataBudgetEventWithPayload:(id)arg0 ;
-(void)didReceiveDASInfoEventWithPayload:(id)arg0 ;
-(void)didReceiveDASPredictionEventWithPayload:(id)arg0 ;
-(void)didReceiveDASReportEventWithPayload:(id)arg0 ;
-(void)initOperatorDependanciesDAS:(id)arg0 ;
-(void)stopService;


@end


#endif