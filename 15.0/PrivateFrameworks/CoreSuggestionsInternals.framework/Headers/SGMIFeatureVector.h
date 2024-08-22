// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMIFEATUREVECTOR_H
#define SGMIFEATUREVECTOR_H

@class NSMutableDictionary, SGMailIntelligenceStringHasher, NSNumber, NSString;

#import <Foundation/Foundation.h>

#import "SGMIModelStore.h"
#import "SGMailClientUtil.h"
#import "SGMIBiomeReducedMessageEvents.h"
#import "SGMIMetricsSubmodelAgeVector.h"
#import "SGSimpleMailMessage.h"
#import "SGSqlEntityStore.h"

@interface SGMIFeatureVector : NSObject {
    NSMutableDictionary *_features;
    SGMIModelStore *_modelStore;
    SGMailClientUtil *_mailClientUtil;
    SGMIBiomeReducedMessageEvents *_biomeMessageSummary;
    SGMailIntelligenceStringHasher *_hasher;
    NSNumber *_senderConnectionScore;
    SGMIMetricsSubmodelAgeVector *_submodelAgeVector;
}


@property (readonly, nonatomic) BOOL hasHashedMessageId; // ivar: _hasHashedMessageId
@property (readonly, nonatomic) SGSimpleMailMessage *mailMessage; // ivar: _mailMessage
@property (readonly, nonatomic) NSString *mailboxId;
@property (readonly, nonatomic) NSString *messageId; // ivar: _messageId
@property (readonly, nonatomic) SGSqlEntityStore *store; // ivar: _store


-(BOOL)matchAnyClauseFrom:(id)arg0 ;
-(NSInteger)estimateGroundTruth;
-(NSInteger)estimateGroundTruthWithConfig:(id)arg0 ;
-(id)cachedFeature:(NSInteger)arg0 ;
-(id)defaultSaliencyOnError;
-(id)defaultSaliencyOnOverride;
-(id)defaultSaliencyOnPrefilteredMail;
-(id)description;
-(id)feature:(NSInteger)arg0 ;
-(id)features;
-(id)flatVectorForFeatureNames:(id)arg0 ;
-(id)initWithMessageId:(id)arg0 hasHashedMessageId:(BOOL)arg1 simpleMailMessage:(id)arg2 senderConnectionScore:(id)arg3 biomeMessageSummary:(id)arg4 mailClientUtil:(id)arg5 store:(id)arg6 hasher:(id)arg7 preLoadedFeatureNames:(id)arg8 ;
-(id)initWithMessageId:(id)arg0 hasHashedMessageId:(BOOL)arg1 simpleMailMessage:(id)arg2 senderConnectionScore:(id)arg3 biomeMessageSummary:(id)arg4 mailClientUtil:(id)arg5 store:(id)arg6 preLoadedFeatureNames:(id)arg7 ;
-(id)initWithMessageId:(id)arg0 hasHashedMessageId:(BOOL)arg1 simpleMailMessage:(id)arg2 senderConnectionScore:(id)arg3 biomeMessageSummary:(id)arg4 store:(id)arg5 preLoadedFeatureNames:(id)arg6 ;
-(id)saliencyWithScore:(id)arg0 isSalient:(BOOL)arg1 ;
-(id)saliencyWithScore:(id)arg0 isSalient:(BOOL)arg1 isGTESalient:(NSInteger)arg2 isCounted:(BOOL)arg3 ;
-(void)ingestFeatures:(id)arg0 ;
-(void)logAccuracyWithGTE:(BOOL)arg0 ;
-(void)logHistogramFor:(NSInteger)arg0 withCategory:(int)arg1 ;
-(void)logSubmodelOutputWithInferredSaliency:(id)arg0 ;
-(void)setFeatureToNumberArrayValue:(id)arg0 forName:(NSInteger)arg1 ;
-(void)setFeatureToNumberValue:(id)arg0 forName:(NSInteger)arg1 ;
-(void)setFeatureToStringArrayValue:(id)arg0 forName:(NSInteger)arg1 ;
-(void)setFeatureToStringValue:(id)arg0 forName:(NSInteger)arg1 ;


@end


#endif