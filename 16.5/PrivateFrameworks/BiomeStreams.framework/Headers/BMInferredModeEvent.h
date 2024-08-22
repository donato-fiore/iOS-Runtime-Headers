// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMINFERREDMODEEVENT_H
#define BMINFERREDMODEEVENT_H

@class NSString, NSArray;
@protocol BMStoreData, BMProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface BMInferredModeEvent : NSObject <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, nonatomic) CGFloat confidenceScore; // ivar: _confidenceScore
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAutomationEnabled; // ivar: _isAutomationEnabled
@property (readonly, nonatomic) BOOL isStart; // ivar: _isStart
@property (readonly, nonatomic) NSString *modeIdentifier;
@property (readonly, nonatomic) NSUInteger modeType; // ivar: _modeType
@property (readonly, nonatomic) NSString *modeUUID; // ivar: _modeUUID
@property (readonly, nonatomic) NSInteger origin; // ivar: _origin
@property (readonly, nonatomic) NSString *originAnchorType; // ivar: _originAnchorType
@property (readonly, nonatomic) NSString *originBundleId; // ivar: _originBundleId
@property (readonly, nonatomic) NSArray *serializedTriggers; // ivar: _serializedTriggers
@property (readonly, nonatomic) BOOL shouldSuggestTriggers; // ivar: _shouldSuggestTriggers
@property (readonly, nonatomic) NSString *suggestionUUID; // ivar: _suggestionUUID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger uiLocation; // ivar: _uiLocation
@property (readonly, nonatomic) NSString *userModeName; // ivar: _userModeName
@property (readonly, nonatomic) NSString *uuid;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithAbsoluteTimestamp:(CGFloat)arg0 modeIdentifier:(id)arg1 origin:(NSInteger)arg2 originBundleId:(id)arg3 originAnchorType:(id)arg4 isAutomationEnabled:(BOOL)arg5 uiLocation:(NSUInteger)arg6 isStart:(BOOL)arg7 confidenceScore:(CGFloat)arg8 uuid:(id)arg9 serializedTriggers:(id)arg10 ;
-(id)initWithAbsoluteTimestamp:(CGFloat)arg0 modeIdentifier:(id)arg1 origin:(NSInteger)arg2 originBundleId:(id)arg3 originAnchorType:(id)arg4 isAutomationEnabled:(BOOL)arg5 uiLocation:(NSUInteger)arg6 isStart:(BOOL)arg7 confidenceScore:(CGFloat)arg8 uuid:(id)arg9 serializedTriggers:(id)arg10 modeType:(NSUInteger)arg11 ;
-(id)initWithAbsoluteTimestamp:(CGFloat)arg0 modeUUID:(id)arg1 origin:(NSInteger)arg2 originBundleId:(id)arg3 originAnchorType:(id)arg4 isAutomationEnabled:(BOOL)arg5 uiLocation:(NSUInteger)arg6 isStart:(BOOL)arg7 confidenceScore:(CGFloat)arg8 suggestionUUID:(id)arg9 serializedTriggers:(id)arg10 modeType:(NSUInteger)arg11 ;
-(id)initWithAbsoluteTimestamp:(CGFloat)arg0 modeUUID:(id)arg1 origin:(NSInteger)arg2 originBundleId:(id)arg3 originAnchorType:(id)arg4 isAutomationEnabled:(BOOL)arg5 uiLocation:(NSUInteger)arg6 isStart:(BOOL)arg7 confidenceScore:(CGFloat)arg8 suggestionUUID:(id)arg9 serializedTriggers:(id)arg10 shouldSuggestTriggers:(BOOL)arg11 modeType:(NSUInteger)arg12 ;
-(id)initWithAbsoluteTimestamp:(CGFloat)arg0 modeUUID:(id)arg1 origin:(NSInteger)arg2 originBundleId:(id)arg3 originAnchorType:(id)arg4 isAutomationEnabled:(BOOL)arg5 uiLocation:(NSUInteger)arg6 isStart:(BOOL)arg7 confidenceScore:(CGFloat)arg8 suggestionUUID:(id)arg9 serializedTriggers:(id)arg10 shouldSuggestTriggers:(BOOL)arg11 modeType:(NSUInteger)arg12 userModeName:(id)arg13 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;


@end


#endif