// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INAGGREGATOR_H
#define _INAGGREGATOR_H


#import <Foundation/Foundation.h>


@interface _INAggregator : NSObject



+(BOOL)_canReportDistributionOfVocabularyStringType:(NSInteger)arg0 ;
+(CGFloat)roundCount:(NSUInteger)arg0 toSignificantFigure:(NSUInteger)arg1 ;
+(NSUInteger)_singificantFigureForVocabularyStringType:(NSInteger)arg0 ;
+(id)_distributionKeyForVocabularyStringType:(NSInteger)arg0 ;
+(void)logReceivedCount:(NSUInteger)arg0 ofVocabularyStringType:(NSInteger)arg1 ;
+(void)resetSynapseVocabularyUpdate;


@end


#endif