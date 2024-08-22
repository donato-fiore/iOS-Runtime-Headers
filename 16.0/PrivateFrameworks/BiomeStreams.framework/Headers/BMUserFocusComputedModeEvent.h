// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMUSERFOCUSCOMPUTEDMODEEVENT_H
#define BMUSERFOCUSCOMPUTEDMODEEVENT_H

@class NSString;
@protocol BMEventBinaryStepping, BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMUserFocusComputedModeEvent : BMEventBase <BMEventBinaryStepping, BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *mode; // ivar: _mode
@property (nonatomic) NSInteger modeSemanticType; // ivar: _modeSemanticType
@property (nonatomic) NSUInteger modeUpdateReason; // ivar: _modeUpdateReason
@property (nonatomic) NSInteger modeUpdateSource; // ivar: _modeUpdateSource
@property (copy, nonatomic) NSString *semanticModeIdentifier; // ivar: _semanticModeIdentifier
@property (nonatomic, getter=isStarting) BOOL starting; // ivar: _starting
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithMode:(id)arg0 semanticModeIdentifier:(id)arg1 starting:(BOOL)arg2 modeUpdateReason:(NSUInteger)arg3 modeSemanticType:(NSInteger)arg4 modeUpdateSource:(NSInteger)arg5 ;
-(id)initWithMode:(id)arg0 starting:(BOOL)arg1 ;
-(id)initWithMode:(id)arg0 starting:(BOOL)arg1 modeUpdateReason:(NSUInteger)arg2 modeSemanticType:(NSInteger)arg3 ;
-(id)initWithMode:(id)arg0 starting:(BOOL)arg1 modeUpdateReason:(NSUInteger)arg2 modeSemanticType:(NSInteger)arg3 modeUpdateSource:(NSInteger)arg4 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;


@end


#endif