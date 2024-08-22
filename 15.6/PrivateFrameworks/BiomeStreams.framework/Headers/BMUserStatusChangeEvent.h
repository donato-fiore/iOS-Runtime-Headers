// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMUSERSTATUSCHANGEEVENT_H
#define BMUSERSTATUSCHANGEEVENT_H

@class NSString, NSArray;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMUserStatusChangeEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *idsHandle; // ivar: _idsHandle
@property (copy, nonatomic) NSArray *idsHandles; // ivar: _idsHandles
@property (copy, nonatomic) NSString *statusChangeType; // ivar: _statusChangeType
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithIDSHandle:(id)arg0 statusChangeType:(id)arg1 ;
-(id)initWithIDSHandles:(id)arg0 statusChangeType:(id)arg1 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)serialize;


@end


#endif