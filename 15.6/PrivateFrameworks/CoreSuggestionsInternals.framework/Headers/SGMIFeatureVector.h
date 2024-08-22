// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMIFEATUREVECTOR_H
#define SGMIFEATUREVECTOR_H

@class NSMutableDictionary, NSNumber, NSString;

#import <Foundation/Foundation.h>

#import "SGMailClientUtil.h"
#import "SGMIBiomeReducedMessageEvents.h"
#import "SGSimpleMailMessage.h"
#import "SGSqlEntityStore.h"

@interface SGMIFeatureVector : NSObject {
    NSMutableDictionary *_features;
    SGMailClientUtil *_mailClientUtil;
    SGMIBiomeReducedMessageEvents *_biomeMessageSummary;
    NSNumber *_senderConnectionScore;
}


@property (readonly, nonatomic) BOOL hasHashedMessageId; // ivar: _hasHashedMessageId
@property (readonly, nonatomic) SGSimpleMailMessage *mailMessage; // ivar: _mailMessage
@property (readonly, nonatomic) NSString *mailboxId;
@property (readonly, nonatomic) NSString *messageId; // ivar: _messageId
@property (readonly, nonatomic) SGSqlEntityStore *store; // ivar: _store


-(NSInteger)estimateGroundTruth;
-(NSInteger)estimateGroundTruthWithConfig:(id)arg0 ;
-(NSInteger)evaluateFirstMatchAmong:(id)arg0 defaultValue:(NSInteger)arg1 ;
-(id)cachedFeature:(NSInteger)arg0 ;
-(id)defaultSaliencyOnError;
-(id)defaultSaliencyOnOverrideFor:(NSInteger)arg0 ;
-(id)description;
-(id)feature:(NSInteger)arg0 ;
-(id)features;
-(id)flatVectorForFeatureNames:(id)arg0 ;
-(id)initWithMessageId:(id)arg0 hasHashedMessageId:(BOOL)arg1 simpleMailMessage:(id)arg2 senderConnectionScore:(id)arg3 biomeMessageSummary:(id)arg4 mailClientUtil:(id)arg5 store:(id)arg6 preLoadedFeatureNames:(id)arg7 ;
-(id)initWithMessageId:(id)arg0 hasHashedMessageId:(BOOL)arg1 simpleMailMessage:(id)arg2 senderConnectionScore:(id)arg3 biomeMessageSummary:(id)arg4 store:(id)arg5 preLoadedFeatureNames:(id)arg6 ;
-(id)saliencyWithScore:(id)arg0 isSalient:(BOOL)arg1 ;
-(id)saliencyWithScore:(id)arg0 isSalient:(BOOL)arg1 gteSaliency:(NSInteger)arg2 isCounted:(BOOL)arg3 ;
-(void)ingestFeatures:(id)arg0 ;
-(void)logOrStageWithSaliency:(id)arg0 ;
-(void)setFeatureToNumberArrayValue:(id)arg0 forName:(NSInteger)arg1 ;
-(void)setFeatureToNumberValue:(id)arg0 forName:(NSInteger)arg1 ;
-(void)setFeatureToStringArrayValue:(id)arg0 forName:(NSInteger)arg1 ;
-(void)setFeatureToStringValue:(id)arg0 forName:(NSInteger)arg1 ;


@end


#endif