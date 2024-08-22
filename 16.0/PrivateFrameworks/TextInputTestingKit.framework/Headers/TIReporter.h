// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIREPORTER_H
#define TIREPORTER_H

@class NSString, NSDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TIReporter : NSObject {
    NSObject<OS_dispatch_queue> *_logSerializationQueue;
    BOOL _isTransliterating;
}


@property (readonly, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *localeIdentifierForLanguage;
@property (copy, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, nonatomic) NSMutableArray *resultLoggers; // ivar: _resultLoggers
@property (readonly, nonatomic) NSString *textCorpus;


+(id)fileURLForTrial:(NSUInteger)arg0 withOptions:(id)arg1 ;
+(id)languageForOptions:(id)arg0 ;
+(id)textCorpusForOptions:(id)arg0 ;
-(BOOL)shouldConcatenateTokensAtBoundaryError;
-(id)alignedTypingSequenceForResult:(id)arg0 keystrokeSegmentationMode:(NSUInteger)arg1 ;
-(id)alignedTypingSequenceForTransliteratedResult:(id)arg0 ;
-(id)initWithBuildVersion:(id)arg0 ;
-(id)reportForAutocorrectionResults:(id)arg0 ;
-(id)reportForTrial:(NSUInteger)arg0 ;
-(id)resultsForTrial:(NSUInteger)arg0 ;
-(void)beginLogTrial;
-(void)collectAggdStatisticsForResult:(id)arg0 ;
-(void)endLogTrial;
-(void)logResult:(id)arg0 ;


@end


#endif