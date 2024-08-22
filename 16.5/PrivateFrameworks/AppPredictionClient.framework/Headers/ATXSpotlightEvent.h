// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSPOTLIGHTEVENT_H
#define ATXSPOTLIGHTEVENT_H

@class NSString, NSArray, NSDate;
@protocol ATXProactiveSuggestionUIInteractionProtocol;

#import <Foundation/Foundation.h>

#import "ATXSpotlightEventMetadata.h"

@interface ATXSpotlightEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol>

 {
    CGFloat _absoluteDate;
}


@property (retain, nonatomic) NSString *actionBlendingCacheId; // ivar: _actionBlendingCacheId
@property (retain, nonatomic) NSString *actionConsumerSubType; // ivar: _actionConsumerSubType
@property (retain, nonatomic) NSArray *actionSuggestionIds; // ivar: _actionSuggestionIds
@property (retain, nonatomic) NSString *appBlendingCacheId; // ivar: _appBlendingCacheId
@property (retain, nonatomic) NSString *appConsumerSubType; // ivar: _appConsumerSubType
@property (retain, nonatomic) NSArray *appSuggestionIds; // ivar: _appSuggestionIds
@property (readonly, nonatomic) unsigned char consumerSubTypeForUIStream;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (retain, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ATXSpotlightEventMetadata *metadata; // ivar: _metadata
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)actionSuggestionContextMenuDismissOnceEventWithSuggestionId:(id)arg0 actionBlendingCacheId:(id)arg1 date:(id)arg2 ;
+(id)actionSuggestionDismissedEventWithSuggestionId:(id)arg0 actionBlendingCacheId:(id)arg1 date:(id)arg2 ;
+(id)actionSuggestionTappedEventWithSuggestion:(id)arg0 actionBlendingCacheId:(id)arg1 currentQuery:(id)arg2 date:(id)arg3 ;
+(id)appSuggestionTappedEventWithSuggestion:(id)arg0 appBlendingCacheId:(id)arg1 currentQuery:(id)arg2 date:(id)arg3 ;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)searchResultTappedWithEngagedBundleId:(id)arg0 searchedActionType:(NSUInteger)arg1 date:(id)arg2 ;
+(id)suggestionsAppearedEventWithAppSuggestionIds:(id)arg0 actionSuggestionIds:(id)arg1 appBlendingCacheId:(id)arg2 actionBlendingCacheId:(id)arg3 date:(id)arg4 ;
+(id)viewAppearedEventWithSFFeedback:(id)arg0 date:(id)arg1 ;
+(id)viewDisappearedEventWithDidSearch:(BOOL)arg0 date:(id)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededFordouble:(CGFloat)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForint32_t:(int)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXSpotlightEvent:(id)arg0 ;
-(id)_stringArrayToUUIDArray:(id)arg0 ;
-(id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)arg0 ;
-(id)encodeAsProto;
-(id)initWithAbsoluteDate:(CGFloat)arg0 eventType:(int)arg1 appConsumerSubType:(id)arg2 actionConsumerSubType:(id)arg3 appBlendingCacheId:(id)arg4 actionBlendingCacheId:(id)arg5 appSuggestionIds:(id)arg6 actionSuggestionIds:(id)arg7 metadata:(id)arg8 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 eventType:(int)arg1 appConsumerSubType:(id)arg2 actionConsumerSubType:(id)arg3 appBlendingCacheId:(id)arg4 actionBlendingCacheId:(id)arg5 appSuggestionIds:(id)arg6 actionSuggestionIds:(id)arg7 metadata:(id)arg8 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;
-(id)sessionIdentifierForSessionType:(NSInteger)arg0 uiCacheConsumerSubType:(unsigned char)arg1 ;
-(id)sessionProcessingOptionsForSessionType:(NSInteger)arg0 ;
-(void)_updateActionUIFeedbackSession:(id)arg0 ;
-(void)_updateAppUIFeedbackSession:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateUIFeedbackSession:(id)arg0 uiCacheConsumerSubType:(unsigned char)arg1 ;


@end


#endif