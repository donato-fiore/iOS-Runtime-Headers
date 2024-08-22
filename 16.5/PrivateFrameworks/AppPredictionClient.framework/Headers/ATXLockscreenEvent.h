// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXLOCKSCREENEVENT_H
#define ATXLOCKSCREENEVENT_H

@class NSUUID, NSDate, NSString, NSArray;
@protocol ATXProactiveSuggestionUIInteractionProtocol;

#import <Foundation/Foundation.h>


@interface ATXLockscreenEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol>

 {
    CGFloat _absoluteDate;
}


@property (retain, nonatomic) NSUUID *blendingCacheId; // ivar: _blendingCacheId
@property (readonly, nonatomic) unsigned char consumerSubTypeForUIStream;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (retain, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *suggestionIds; // ivar: _suggestionIds
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXLockscreenEvent:(id)arg0 ;
-(id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithAbsoluteDate:(CGFloat)arg0 eventType:(int)arg1 blendingCacheId:(id)arg2 suggestionIds:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 eventType:(int)arg1 blendingCacheId:(id)arg2 suggestionIds:(id)arg3 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)jsonDict;
-(id)proto;
-(id)serialize;
-(id)sessionIdentifierForSessionType:(NSInteger)arg0 uiCacheConsumerSubType:(unsigned char)arg1 ;
-(id)sessionProcessingOptionsForSessionType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateUIFeedbackSession:(id)arg0 uiCacheConsumerSubType:(unsigned char)arg1 ;


@end


#endif