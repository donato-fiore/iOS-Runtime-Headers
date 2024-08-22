// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMFINDMYLOCATIONCHANGEEVENT_H
#define BMFINDMYLOCATIONCHANGEEVENT_H

@class NSString, NSNumber;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMFindMyLocationChangeEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *idsHandle; // ivar: _idsHandle
@property (copy, nonatomic) NSNumber *latitude; // ivar: _latitude
@property (nonatomic) NSUInteger locationChangeType; // ivar: _locationChangeType
@property (copy, nonatomic) NSNumber *longitude; // ivar: _longitude
@property NSInteger motionActivityState; // ivar: _motionActivityState
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithIDSHandle:(id)arg0 locationChangeType:(NSUInteger)arg1 ;
-(id)initWithIDSHandle:(id)arg0 locationChangeType:(NSUInteger)arg1 motionActivityState:(NSInteger)arg2 latitude:(id)arg3 longitude:(id)arg4 name:(id)arg5 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)serialize;


@end


#endif