// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXHOMESCREENEVENT_H
#define ATXHOMESCREENEVENT_H

@class NSString, NSDate, NSArray;
@protocol ATXProactiveSuggestionUIInteractionProtocol;

#import <Foundation/Foundation.h>

#import "ATXHomeScreenEventMetadata.h"

@interface ATXHomeScreenEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol>

 {
    CGFloat _absoluteDate;
}


@property (retain, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (retain, nonatomic) NSString *blendingCacheId; // ivar: _blendingCacheId
@property (readonly, nonatomic) unsigned int dataVersion;
@property (retain, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *eventTypeString; // ivar: _eventTypeString
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *intentDescription; // ivar: _intentDescription
@property (nonatomic) BOOL isSuggestedWidget; // ivar: _isSuggestedWidget
@property (retain, nonatomic) ATXHomeScreenEventMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (retain, nonatomic) NSString *stackId; // ivar: _stackId
@property (nonatomic) NSUInteger stackKind; // ivar: _stackKind
@property (nonatomic) NSUInteger stackLocation; // ivar: _stackLocation
@property (retain, nonatomic) NSArray *suggestionIds; // ivar: _suggestionIds
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *widgetBundleId; // ivar: _widgetBundleId
@property (retain, nonatomic) NSString *widgetKind; // ivar: _widgetKind
@property (nonatomic) NSUInteger widgetSize; // ivar: _widgetSize
@property (retain, nonatomic) NSString *widgetUniqueId; // ivar: _widgetUniqueId


+(BOOL)supportsSecureCoding;
+(id)eventForPageShownWithIndex:(NSUInteger)arg0 widgetsByStack:(id)arg1 blendingCacheIdentifier:(id)arg2 ;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededFordouble:(CGFloat)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXHomeScreenEvent:(id)arg0 ;
-(id)_uuidArrayFromStringArray:(id)arg0 ;
-(id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)arg0 ;
-(id)encodeAsProto;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;
-(id)sessionIdentifierForSessionType:(NSInteger)arg0 uiCacheConsumerSubType:(unsigned char)arg1 ;
-(id)sessionProcessingOptionsForSessionType:(NSInteger)arg0 ;
-(unsigned char)feedbackConsumerSubType;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateUIFeedbackSession:(id)arg0 uiCacheConsumerSubType:(unsigned char)arg1 ;


@end


#endif