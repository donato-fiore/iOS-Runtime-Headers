// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LRREVALUATOR_H
#define LRREVALUATOR_H

@class NSDateFormatter, NSDictionary, NSString;
@protocol LRREvaluatorProtocol;

#import <Foundation/Foundation.h>

#import "LRRNluResponseComparator.h"
#import "LRRMDComparator.h"
#import "LRRMRComparator.h"
#import "FeatureStoreNluRequestReader.h"
#import "FeatureStoreNluResponseReader.h"
#import "FeatureStoreSpanMatchReader.h"
#import "LRRFeatureStoreFiltering.h"

@interface LRREvaluator : NSObject {
    LRRNluResponseComparator *comparator;
    LRRMDComparator *mdComparator;
    LRRMRComparator *mrComparator;
    NSDateFormatter *formatter;
    FeatureStoreNluRequestReader *requestReader;
    FeatureStoreNluResponseReader *responseReader;
    FeatureStoreSpanMatchReader *spanMatchReader;
    NSDictionary *requestProtos;
    NSDictionary *originalResponses;
    NSDictionary *allMatchingSpans;
    NSDictionary *origMDRequests;
    NSDictionary *origMDResponses;
    NSDictionary *origMRRequests;
    NSDictionary *origMRResponses;
    NSDictionary *repetitionCountsByUtteranceAndWeek;
    NSDictionary *userIsHabitualUserByWeek;
}


@property (readonly, nonatomic) NSObject<LRREvaluatorProtocol> *evaluatorProtocol; // ivar: _evaluatorProtocol
@property (retain) LRRFeatureStoreFiltering *featureStoreFilteringManager; // ivar: _featureStoreFilteringManager
@property (nonatomic) BOOL isAppleConnectInstalled; // ivar: _isAppleConnectInstalled
@property (readonly, nonatomic) ? operatingSystemVersion; // ivar: _operatingSystemVersion
@property (nonatomic) BOOL shouldStop; // ivar: _shouldStop
@property (readonly, nonatomic) NSString *siriPreferenceLanguageCode; // ivar: _siriPreferenceLanguageCode
@property (nonatomic) BOOL siriPreferenceSiriVocabularyEnabled; // ivar: _siriPreferenceSiriVocabularyEnabled


-(BOOL)evaluate;
-(BOOL)evaluateWithCandidateModel:(id)arg0 siriAssetDirPath:(id)arg1 ;
-(BOOL)isValidRequestId:(id)arg0 ;
-(id)compareReplayResuts:(id)arg0 replayedRequestId:(id)arg1 ;
-(id)getCalendarWeekNumberFromDate:(id)arg0 ;
-(id)getRepetitionCountByUtteranceAndWeekFromRequestProtos:(id)arg0 ;
-(id)getUserIsHabitualUserFromRequestProtos:(id)arg0 ;
-(id)getWeekdayNumberFromDate:(id)arg0 ;
-(id)initWithProtocol:(id)arg0 featureStoreFiltering:(id)arg1 ;
-(id)replayOneSample:(id)arg0 taskStarted:(id)arg1 siriAssetDirPath:(id)arg2 emitMessage:(BOOL)arg3 ;
-(void)emitSampleEvaluationResult:(id)arg0 taskStarted:(id)arg1 ;
-(void)emitTaskEvaluationResult:(id)arg0 dateStart:(id)arg1 taskStartTs:(CGFloat)arg2 ;
-(void)snapshotInteractionsFromFeatureStore;
-(void)snapshotInteractionsFromFeatureStoreForIds:(id)arg0 ;


@end


#endif