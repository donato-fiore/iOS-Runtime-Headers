// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPDIRECTORYEVENT_H
#define ATXAPPDIRECTORYEVENT_H

@class NSUUID, NSString, NSNumber, NSDate, NSArray;
@protocol NSSecureCoding, ATXProtoBufWrapper, ATXProactiveSuggestionUIInteractionProtocol;

#import <Foundation/Foundation.h>

#import "ATXAppDirectoryEventMetadata.h"

@interface ATXAppDirectoryEvent : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXProactiveSuggestionUIInteractionProtocol>

 {
    CGFloat _absoluteDate;
}


@property (retain, nonatomic) NSUUID *blendingCacheUUID; // ivar: _blendingCacheUUID
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (retain, nonatomic) NSNumber *bundleIndex; // ivar: _bundleIndex
@property (retain, nonatomic) NSNumber *categoryID; // ivar: _categoryID
@property (retain, nonatomic) NSNumber *categoryIndex; // ivar: _categoryIndex
@property (readonly, nonatomic) unsigned char consumerSubTypeForUIStream;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (retain, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *engagedSuggestionIds; // ivar: _engagedSuggestionIds
@property (nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ATXAppDirectoryEventMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) NSNumber *searchQueryLength; // ivar: _searchQueryLength
@property (retain, nonatomic) NSNumber *searchTab; // ivar: _searchTab
@property (retain, nonatomic) NSArray *shownSuggestionIds; // ivar: _shownSuggestionIds
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_objectForKey:(id)arg0 classType:(Class)arg1 fromMetadata:(id)arg2 ;
+(id)appDirectoryEventWithEventType:(NSUInteger)arg0 metadata:(id)arg1 ;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXAppDirectoryEvent:(id)arg0 ;
-(id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithAbsoluteDate:(CGFloat)arg0 eventType:(NSUInteger)arg1 categoryID:(id)arg2 categoryIndex:(id)arg3 bundleId:(id)arg4 bundleIndex:(id)arg5 searchQueryLength:(id)arg6 searchTab:(id)arg7 blendingCacheUUID:(id)arg8 shownSuggestionIds:(id)arg9 engagedSuggestionIds:(id)arg10 metadata:(id)arg11 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 eventType:(NSUInteger)arg1 categoryID:(id)arg2 categoryIndex:(id)arg3 bundleId:(id)arg4 bundleIndex:(id)arg5 searchQueryLength:(id)arg6 searchTab:(id)arg7 blendingCacheUUID:(id)arg8 shownSuggestionIds:(id)arg9 engagedSuggestionIds:(id)arg10 metadata:(id)arg11 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;
-(id)sessionIdentifierForSessionType:(NSInteger)arg0 uiCacheConsumerSubType:(unsigned char)arg1 ;
-(id)sessionProcessingOptionsForSessionType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateUIFeedbackSession:(id)arg0 uiCacheConsumerSubType:(unsigned char)arg1 ;


@end


#endif