// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGCUSTOMRESPONSESPARAMETERS_H
#define SGCUSTOMRESPONSESPARAMETERS_H


#import <Foundation/Foundation.h>


@interface SGCustomResponsesParameters : NSObject

@property (readonly, nonatomic) BOOL allowProfanity; // ivar: _allowProfanity
@property (readonly, nonatomic) NSUInteger compatibilityVersion; // ivar: _compatibilityVersion
@property (readonly, nonatomic) CGFloat countExponent; // ivar: _countExponent
@property (readonly, nonatomic) CGFloat distanceThreshold; // ivar: _distanceThreshold
@property (readonly, nonatomic) NSUInteger filterBatchSize; // ivar: _filterBatchSize
@property (readonly, nonatomic) BOOL isCustomResponsesEnabled; // ivar: _isCustomResponsesEnabled
@property (readonly, nonatomic) NSUInteger knowledgeStoreQueryLimit; // ivar: _knowledgeStoreQueryLimit
@property (readonly, nonatomic) CGFloat maxReplyGapSecs; // ivar: _maxReplyGapSecs
@property (readonly, nonatomic) NSUInteger maxReplyLength; // ivar: _maxReplyLength
@property (readonly, nonatomic) NSUInteger maxRowsInPerRecipientTable; // ivar: _maxRowsInPerRecipientTable
@property (readonly, nonatomic) NSUInteger maxStoredCustomResponses; // ivar: _maxStoredCustomResponses
@property (readonly, nonatomic) NSUInteger maxStoredMessages; // ivar: _maxStoredMessages
@property (readonly, nonatomic) CGFloat minDecayedCountForPrediction; // ivar: _minDecayedCountForPrediction
@property (readonly, nonatomic) CGFloat minDecayedCountForPruning; // ivar: _minDecayedCountForPruning
@property (readonly, nonatomic) NSUInteger minimumDistinctRecipients; // ivar: _minimumDistinctRecipients
@property (readonly, nonatomic) NSUInteger minimumReplyOccurences; // ivar: _minimumReplyOccurences
@property (readonly, nonatomic) CGFloat minimumTimeIntervalSecs; // ivar: _minimumTimeIntervalSecs
@property (readonly, nonatomic) CGFloat timeDecayFactor; // ivar: _timeDecayFactor
@property (readonly, nonatomic) CGFloat usageSpreadExponent; // ivar: _usageSpreadExponent
@property (readonly, nonatomic) BOOL useNonNegativeClassesOnly; // ivar: _useNonNegativeClassesOnly


-(id)initWithDictionary:(id)arg0 ;


@end


#endif