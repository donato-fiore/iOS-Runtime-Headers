// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STATE_H
#define STATE_H

@class NSMutableArray, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "AWDSymptomsAdvisoryAlternateNetworkType.h"
#import "State.h"
#import "StopWatch.h"

@interface State : NSObject

@property (retain) AWDSymptomsAdvisoryAlternateNetworkType *awdMetric; // ivar: _awdMetric
@property (readonly) NSMutableArray *digest; // ivar: _digest
@property (copy, nonatomic) id *entryAction; // ivar: _entryAction
@property (readonly) NSDictionary *entryCellPreds; // ivar: _entryCellPreds
@property (readonly) NSDictionary *entryWiFiPreds; // ivar: _entryWiFiPreds
@property (copy, nonatomic) id *exitAction; // ivar: _exitAction
@property (readonly) NSString *label; // ivar: _label
@property (copy, nonatomic) id *loopEvaluation; // ivar: _loopEvaluation
@property int loopTokens; // ivar: _loopTokens
@property (retain) State *previousState; // ivar: _previousState
@property (readonly) NSUInteger rank; // ivar: _rank
@property (readonly) StopWatch *sojournTime; // ivar: _sojournTime


+(id)createAndInitializeAWDMetricForStateWithLevel:(int)arg0 activationIdentifier:(unsigned int)arg1 policy:(int)arg2 andSignature:(id)arg3 ;
+(id)createStateWithLabel:(id)arg0 rank:(NSUInteger)arg1 entryCellPreds:(id)arg2 entryWiFiPreds:(id)arg3 ;
-(id)_initStateWithLabel:(id)arg0 rank:(NSUInteger)arg1 entryCellPreds:(id)arg2 entryWiFiPreds:(id)arg3 ;
-(void)dealloc;


@end


#endif