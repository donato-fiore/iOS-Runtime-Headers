// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMWORKOUTEVENT_H
#define BMWORKOUTEVENT_H

@class NSString;
@protocol BMEventBinaryStepping, BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMWorkoutEvent : BMEventBase <BMEventBinaryStepping, BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isStarting) BOOL starting; // ivar: _starting
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithStarting:(BOOL)arg0 ;
-(id)proto;
-(id)serialize;


@end


#endif