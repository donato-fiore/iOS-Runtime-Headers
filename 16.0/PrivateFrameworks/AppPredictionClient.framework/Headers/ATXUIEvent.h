// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXUIEVENT_H
#define ATXUIEVENT_H

@class NSString;
@protocol ATXProactiveSuggestionUIInteractionProtocol;

#import <Foundation/Foundation.h>


@interface ATXUIEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol>



@property (readonly, nonatomic) unsigned char consumerSubType; // ivar: _consumerSubType
@property (readonly, nonatomic) unsigned char consumerSubTypeForUIStream;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<ATXProactiveSuggestionUIInteractionProtocol> *event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)uiEventWithAppDirectoryEvent:(id)arg0 ;
+(id)uiEventWithHomeScreenEvent:(id)arg0 ;
+(id)uiEventWithLockscreenEvent:(id)arg0 ;
+(id)uiEventWithShortcutsEditorEvent:(id)arg0 ;
+(id)uiEventWithSpotlightEvent:(id)arg0 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXUIEvent:(id)arg0 ;
-(id)appDirectoryEvent;
-(id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)arg0 ;
-(id)encodeAsProto;
-(id)homeScreenEvent;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConsumerSubType:(unsigned char)arg0 event:(id)arg1 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)lockscreenEvent;
-(id)proto;
-(id)serialize;
-(id)sessionIdentifierForSessionType:(NSInteger)arg0 uiCacheConsumerSubType:(unsigned char)arg1 ;
-(id)sessionProcessingOptionsForSessionType:(NSInteger)arg0 ;
-(id)shortcutsEditorEvent;
-(id)spotlightEvent;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateUIFeedbackSession:(id)arg0 uiCacheConsumerSubType:(unsigned char)arg1 ;


@end


#endif