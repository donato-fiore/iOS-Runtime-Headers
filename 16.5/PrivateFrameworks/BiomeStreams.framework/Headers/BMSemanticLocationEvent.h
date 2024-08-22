// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSEMANTICLOCATIONEVENT_H
#define BMSEMANTICLOCATIONEVENT_H

@class NSString;
@protocol BMEventBinaryStepping, BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMSemanticLocationEvent : BMEventBase <BMEventBinaryStepping, BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *loiIdentifier; // ivar: _loiIdentifier
@property (readonly, nonatomic) NSUInteger placeType; // ivar: _placeType
@property (nonatomic, getter=isStarting) BOOL starting; // ivar: _starting
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger userSpecificPlaceType; // ivar: _userSpecificPlaceType


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithUserSpecificPlaceType:(NSUInteger)arg0 placeType:(NSUInteger)arg1 loiIdentifier:(id)arg2 starting:(BOOL)arg3 ;
-(id)initWithUserSpecificPlaceType:(NSUInteger)arg0 placeType:(NSUInteger)arg1 starting:(BOOL)arg2 ;
-(id)proto;
-(id)serialize;


@end


#endif