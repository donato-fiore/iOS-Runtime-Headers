// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMSCHOOLTIMEEVENT_H
#define BMSCHOOLTIMEEVENT_H

@class NSString;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMSchoolTimeEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger reason; // ivar: _reason
@property (nonatomic, getter=isStarting) BOOL starting; // ivar: _starting
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithStarting:(BOOL)arg0 ;
-(id)initWithStarting:(BOOL)arg0 reason:(NSUInteger)arg1 ;
-(id)proto;
-(id)serialize;


@end


#endif