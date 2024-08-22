// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSIRIUIEVENT_H
#define BMSIRIUIEVENT_H

@class NSString;
@protocol BMStoreData, BMProtoBufWrapper, BMEventBinaryStepping;


#import "BMEventBase.h"

@interface BMSiriUIEvent : BMEventBase <BMStoreData, BMProtoBufWrapper, BMEventBinaryStepping>



@property (readonly, copy, nonatomic) NSString *UUID; // ivar: _UUID
@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *dismissalReason; // ivar: _dismissalReason
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (nonatomic, getter=isStarting) BOOL starting; // ivar: _starting
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *viewMode; // ivar: _viewMode


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithSessionID:(id)arg0 UUID:(id)arg1 viewMode:(id)arg2 dismissalReason:(id)arg3 starting:(BOOL)arg4 absoluteTimeStamp:(CGFloat)arg5 ;
-(id)proto;
-(id)serialize;


@end


#endif