// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBLDSERVICE_H
#define PLBLDSERVICE_H

@class PLXPCResponderOperatorComposition;


#import "PLBatteryBreakdownService.h"

@interface PLBLDService : PLBatteryBreakdownService

@property (retain) PLXPCResponderOperatorComposition *batteryBreakdownResponder; // ivar: _batteryBreakdownResponder
@property (retain) PLXPCResponderOperatorComposition *logBUIResultsResponder; // ivar: _logBUIResultsResponder


+(id)entryEventPointBLD;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)batteryBreakdownWithPayload:(id)arg0 ;
-(id)bldEntryWithBatteryBreakdown:(id)arg0 ;
-(id)init;
-(void)initOperatorDependancies;


@end


#endif