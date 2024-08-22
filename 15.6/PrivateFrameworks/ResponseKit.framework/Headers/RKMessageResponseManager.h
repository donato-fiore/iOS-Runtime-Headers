// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RKMESSAGERESPONSEMANAGER_H
#define RKMESSAGERESPONSEMANAGER_H

@class NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RKResponseCollection.h"
#import "RKRankLearner.h"

@interface RKMessageResponseManager : NSObject

@property (retain) RKResponseCollection *collection; // ivar: _collection
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) NSArray *preferredLanguages; // ivar: _preferredLanguages
@property (retain) RKRankLearner *rankLearner; // ivar: _rankLearner


+(id)sharedManager;
-(BOOL)isQuestion:(id)arg0 withLanguage:(id)arg1 ;
-(BOOL)usePersonalizedRanking;
-(id)categoryForMessage:(id)arg0 langID:(id)arg1 ;
-(id)categoryForMessageWithoutQueue:(id)arg0 langID:(id)arg1 ;
-(id)getRankLearner;
-(id)init;
-(id)initWithAssetPlistURL:(id)arg0 ;
-(id)initWithDynamicDataURL:(id)arg0 ;
-(id)initWithDynamicDataURL:(id)arg0 displayStringsProvider:(id)arg1 ;
-(id)initWithDynamicDataURL:(id)arg0 withBundleURL:(id)arg1 ;
-(id)responsesForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 forContext:(id)arg2 withLanguage:(id)arg3 options:(NSUInteger)arg4 ;
-(id)responsesForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 forConversationHistory:(id)arg2 withLanguage:(id)arg3 inputModes:(id)arg4 options:(NSUInteger)arg5 ;
-(id)responsesForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 forConversationHistory:(id)arg2 withLanguage:(id)arg3 options:(NSUInteger)arg4 ;
-(id)responsesForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 recipientID:(id)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4 options:(NSUInteger)arg5 ;
-(id)responsesForMessageImp:(id)arg0 maximumResponses:(NSUInteger)arg1 forRecipientID:(id)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 withLanguage:(id)arg5 options:(NSUInteger)arg6 ;
-(id)responsesForMessageWithLanguageDetection:(id)arg0 maximumResponses:(NSUInteger)arg1 forConversationHistory:(id)arg2 forContext:(id)arg3 withLanguage:(*id)arg4 options:(NSUInteger)arg5 ;
-(id)responsesForMessageWithLanguageDetectionImp:(id)arg0 maximumResponses:(NSUInteger)arg1 forRecipientID:(id)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 withLanguage:(*id)arg5 inputModes:(id)arg6 options:(NSUInteger)arg7 ;
-(void)flushDynamicData;
-(void)prunePersonalizedUserDatabase:(id)arg0 ;
-(void)registerResponse:(id)arg0 forMessage:(id)arg1 forContext:(id)arg2 withEffectiveDate:(id)arg3 withLanguage:(id)arg4 ;
-(void)registerResponse:(id)arg0 forMessage:(id)arg1 forContext:(id)arg2 withLanguage:(id)arg3 ;
-(void)registerResponse:(id)arg0 forMessage:(id)arg1 metadata:(id)arg2 withLanguage:(id)arg3 ;
-(void)resetRegisteredResponses;
-(void)responsesForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 forContext:(id)arg2 withLanguage:(id)arg3 options:(NSUInteger)arg4 completionBlock:(id)arg5 ;
-(void)responsesForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 forConversationHistory:(id)arg2 withLanguage:(id)arg3 options:(NSUInteger)arg4 completionBlock:(id)arg5 ;
-(void)responsesForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 recipientID:(id)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4 options:(NSUInteger)arg5 completionBlock:(id)arg6 ;
-(void)responsesForMessageWithLanguageDetection:(id)arg0 maximumResponses:(NSUInteger)arg1 forConversationHistory:(id)arg2 forContext:(id)arg3 withLanguage:(*id)arg4 options:(NSUInteger)arg5 completionBlock:(id)arg6 ;


@end


#endif