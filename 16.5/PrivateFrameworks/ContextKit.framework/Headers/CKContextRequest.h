// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONTEXTREQUEST_H
#define CKCONTEXTREQUEST_H

@class CKContextDonationItem, NSSet, NSOrderedSet, NSArray, NSDictionary, NSNumber, NSString;


#import "CKContextClient.h"

@interface CKContextRequest : CKContextDonationItem {
    CKContextClient *_client;
}


@property (retain, nonatomic) NSSet *allowedTopicTypeTags; // ivar: _allowedTopicTypeTags
@property (nonatomic) BOOL debug; // ivar: _debug
@property (retain, nonatomic) NSOrderedSet *desiredLanguageTags; // ivar: _desiredLanguageTags
@property (nonatomic) CGFloat donationTimeout; // ivar: _donationTimeout
@property (copy, nonatomic) NSArray *donorBundleIdentifiers; // ivar: _donorBundleIdentifiers
@property (nonatomic) BOOL dontSkip; // ivar: _dontSkip
@property (nonatomic) NSUInteger fingerprintMax; // ivar: _fingerprintMax
@property (nonatomic) BOOL incPending; // ivar: _incPending
@property (nonatomic) BOOL includeHigherLevelTopics; // ivar: _includeHigherLevelTopics
@property (nonatomic) BOOL includeLeadImage; // ivar: _includeLeadImage
@property (nonatomic) BOOL includeRequestInResponse; // ivar: _includeRequestInResponse
@property (nonatomic) BOOL includeStructuredExtractionResults; // ivar: _includeStructuredExtractionResults
@property (retain, nonatomic) NSDictionary *itemIds; // ivar: _itemIds
@property (nonatomic) NSInteger maxConstellationTopics; // ivar: _maxConstellationTopics
@property (retain, nonatomic) NSNumber *overrideBlendAlpha; // ivar: _overrideBlendAlpha
@property (retain, nonatomic) NSNumber *overrideBlendBeta; // ivar: _overrideBlendBeta
@property (retain, nonatomic) NSNumber *overrideBlendGamma; // ivar: _overrideBlendGamma
@property (nonatomic) int overrideConstellationMinCount; // ivar: _overrideConstellationMinCount
@property (nonatomic) int overrideConstellationMinWeight; // ivar: _overrideConstellationMinWeight
@property (nonatomic) BOOL overrideEnableCoreNLPTagging; // ivar: _overrideEnableCoreNLPTagging
@property (copy, nonatomic) NSSet *preferredSceneIdentifiers; // ivar: _preferredSceneIdentifiers
@property (readonly, nonatomic, getter=isRequestingContentFromActiveApplications) BOOL requestingContentFromActiveApplications;
@property (nonatomic) BOOL textIsRaw; // ivar: _textIsRaw
@property (nonatomic) BOOL timing; // ivar: _timing
@property (nonatomic) unsigned int topk; // ivar: _topk
@property (nonatomic) NSUInteger type; // ivar: _type
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSArray *urls; // ivar: _urls


+(BOOL)pingService;
+(BOOL)shutdownService;
+(BOOL)supportsSecureCoding;
+(id)new;
+(id)requestServiceSemaphore;
+(id)requestWithText:(id)arg0 ;
+(void)findResultsForText:(id)arg0 languageTag:(id)arg1 requestType:(NSUInteger)arg2 withReply:(id)arg3 ;
+(void)findResultsForText:(id)arg0 languageTag:(id)arg1 withReply:(id)arg2 ;
+(void)findResultsForText:(id)arg0 withReply:(id)arg1 ;
+(void)initialize;
+(void)logEngagementForResponseId:(id)arg0 result:(id)arg1 rank:(NSUInteger)arg2 inputLength:(NSUInteger)arg3 completionLength:(NSUInteger)arg4 requestType:(NSUInteger)arg5 logType:(NSUInteger)arg6 ;
+(void)logResultsShownForResponseId:(id)arg0 shown:(NSUInteger)arg1 couldHaveShown:(NSUInteger)arg2 topicIds:(id)arg3 serverOverride:(BOOL)arg4 inputLength:(NSUInteger)arg5 requestType:(NSUInteger)arg6 logType:(NSUInteger)arg7 ;
+(void)logTransactionSuccessfulForResponseId:(id)arg0 inputLength:(NSUInteger)arg1 completionLength:(NSUInteger)arg2 requestType:(NSUInteger)arg3 logType:(NSUInteger)arg4 ;
+(void)requestServiceSemaphoreWithReply:(id)arg0 ;
+(void)runOffMainThread:(id)arg0 ;
+(void)setDefaultRequestType:(NSUInteger)arg0 ;
+(void)statusWithReply:(id)arg0 ;
+(void)warmUpForRequestType:(NSUInteger)arg0 withReply:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)execute;
-(id)init;
-(id)initForClient:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 ;
-(void)_executeCategorizationRequestWithReply:(id)arg0 ;
-(void)_executeWithReply:(id)arg0 ;
-(void)_postProcessResponse:(id)arg0 ;
-(void)capabilitiesWithReply:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeCategorizationRequestWithReply:(id)arg0 ;
-(void)executeWithReply:(id)arg0 ;
-(void)setText:(id)arg0 ;


@end


#endif