// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCHARACTERISTICVALUETRANSACTION_H
#define HFCHARACTERISTICVALUETRANSACTION_H

@class NSDictionary, NSMutableSet, NSError, NSMutableArray, NAFuture, NSMutableDictionary;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "HFUpdateLogger.h"
#import "HFMutableAggregatedCharacteristicReadPolicy.h"

@interface HFCharacteristicValueTransaction : NSObject

@property (retain, nonatomic) NSDictionary *actionSetErrorsKeyedByUUID; // ivar: _actionSetErrorsKeyedByUUID
@property (retain, nonatomic) NSMutableSet *actionSetsToExecute; // ivar: _actionSetsToExecute
@property (retain, nonatomic) NSError *actionsError; // ivar: _actionsError
@property (retain, nonatomic) NSMutableSet *actionsToExecute; // ivar: _actionsToExecute
@property (retain, nonatomic) NSMutableSet *characteristicsToRead; // ivar: _characteristicsToRead
@property (retain, nonatomic) NSMutableArray *clientReasonsStack; // ivar: _clientReasonsStack
@property (retain, nonatomic) NAFuture *commitFuture; // ivar: _commitFuture
@property (retain, nonatomic) HFUpdateLogger *logger; // ivar: _logger
@property (nonatomic) BOOL loggerIsExternal; // ivar: _loggerIsExternal
@property (retain, nonatomic) NSObject<OS_dispatch_group> *onFinishGroup; // ivar: _onFinishGroup
@property (retain, nonatomic) NSError *overallReadError; // ivar: _overallReadError
@property (retain, nonatomic) NSError *overallWriteError; // ivar: _overallWriteError
@property (retain, nonatomic) NSMutableDictionary *readFuturesKeyedByCharacteristicIdentifier; // ivar: _readFuturesKeyedByCharacteristicIdentifier
@property (retain, nonatomic) HFMutableAggregatedCharacteristicReadPolicy *readPolicy; // ivar: _readPolicy
@property (retain, nonatomic) NSMutableSet *writeCharacteristicRequests; // ivar: _writeCharacteristicRequests
@property (retain, nonatomic) NSMutableDictionary *writeFuturesKeyedByCharacteristicIdentifier; // ivar: _writeFuturesKeyedByCharacteristicIdentifier


-(id)executionErrorForActionSet:(id)arg0 ;
-(id)init;


@end


#endif