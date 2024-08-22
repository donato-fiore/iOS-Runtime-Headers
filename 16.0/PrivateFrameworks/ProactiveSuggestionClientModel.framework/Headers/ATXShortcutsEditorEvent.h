// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSHORTCUTSEDITOREVENT_H
#define ATXSHORTCUTSEDITOREVENT_H

@class NSUUID, NSDate, NSString, NSArray;
@protocol ATXProactiveSuggestionUIInteractionProtocol;

#import <Foundation/Foundation.h>

#import "ATXShortcutsEditorEventMetadata.h"

@interface ATXShortcutsEditorEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol>

 {
    CGFloat _absoluteDate;
}


@property (retain, nonatomic) NSUUID *blendingCacheUUID; // ivar: _blendingCacheUUID
@property (readonly, nonatomic) unsigned char consumerSubType; // ivar: _consumerSubType
@property (readonly, nonatomic) unsigned char consumerSubTypeForUIStream;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (retain, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ATXShortcutsEditorEventMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) NSArray *suggestionUUIDs; // ivar: _suggestionUUIDs
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXShortcutsEditorEvent:(id)arg0 ;
-(id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithAbsoluteDate:(CGFloat)arg0 eventType:(NSUInteger)arg1 blendingCacheUUID:(id)arg2 suggestionUUIDs:(id)arg3 metadata:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 eventType:(NSUInteger)arg1 blendingCacheUUID:(id)arg2 suggestionUUIDs:(id)arg3 metadata:(id)arg4 ;
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