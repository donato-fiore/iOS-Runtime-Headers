// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LRREVALUATOR_H
#define LRREVALUATOR_H

@class NSDateFormatter, NSArray, NSDictionary, NSUUID, NSString;
@protocol LRREvaluatorProtocol;

#import <Foundation/Foundation.h>

#import "LRRNluResponseComparator.h"
#import "LRRMDComparator.h"
#import "LRRMRComparator.h"
#import "FeatureStoreNluRequestReader.h"
#import "FeatureStoreNluResponseReader.h"
#import "FeatureStoreSpanMatchReader.h"

@interface LRREvaluator : NSObject {
    LRRNluResponseComparator *comparator;
    LRRMDComparator *mdComparator;
    LRRMRComparator *mrComparator;
    NSDateFormatter *formatter;
    FeatureStoreNluRequestReader *requestReader;
    FeatureStoreNluResponseReader *responseReader;
    FeatureStoreSpanMatchReader *spanMatchReader;
    NSArray *requestProtos;
    NSDictionary *originalResponses;
    NSDictionary *allMatchingSpans;
    NSDictionary *origMDRequests;
    NSDictionary *origMDResponses;
    NSDictionary *origMRRequests;
    NSDictionary *origMRResponses;
}


@property (nonatomic) BOOL buildLocalResult; // ivar: _buildLocalResult
@property (readonly, nonatomic) NSUUID *clpId; // ivar: _clpId
@property (readonly, nonatomic) NSString *customAssetDirPath; // ivar: _customAssetDirPath
@property (readonly, nonatomic) NSObject<LRREvaluatorProtocol> *evaluatorProtocol; // ivar: _evaluatorProtocol
@property (nonatomic) BOOL isAppleConnectInstalled; // ivar: _isAppleConnectInstalled
@property (readonly, nonatomic) ? operatingSystemVersion; // ivar: _operatingSystemVersion
@property (readonly, nonatomic) NSInteger siriPreferenceDataSharingOptInStatus; // ivar: _siriPreferenceDataSharingOptInStatus
@property (readonly, nonatomic) NSString *siriPreferenceLanguageCode; // ivar: _siriPreferenceLanguageCode
@property (nonatomic) BOOL siriPreferenceSiriVocabularyEnabled; // ivar: _siriPreferenceSiriVocabularyEnabled


-(BOOL)evaluate;
-(BOOL)evaluateWithCandidateModel:(BOOL)arg0 useCandidateModelOnReplay2:(BOOL)arg1 ;
-(id)getNlxAssetVersion;
-(id)initWithProtocol:(id)arg0 customAssetDirPath:(id)arg1 ;
-(id)replayOneSample:(id)arg0 taskStarted:(id)arg1 useCandidateModel:(BOOL)arg2 originalReplayIdMap:(id)arg3 ;
-(void)buildLocalReport:(id)arg0 resultStat:(id)arg1 ;
-(void)emitSampleEvaluationResult:(id)arg0 taskStarted:(id)arg1 ;
-(void)emitTaskEvaluationResult:(id)arg0 dateStart:(id)arg1 taskStartTs:(CGFloat)arg2 ;
-(void)snapshotInteractionsFromFeatureStore;
-(void)snapshotInteractionsFromFeatureStoreForIds:(id)arg0 ;


@end


#endif