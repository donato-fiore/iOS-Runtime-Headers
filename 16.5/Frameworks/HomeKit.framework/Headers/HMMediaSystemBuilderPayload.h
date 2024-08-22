// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMEDIASYSTEMBUILDERPAYLOAD_H
#define HMMEDIASYSTEMBUILDERPAYLOAD_H

@class HMFObject, NSString, NSUUID;
@protocol HMMessageEncoding;



@interface HMMediaSystemBuilderPayload : HMFObject <HMMessageEncoding>



@property (readonly, copy) NSString *configuredName; // ivar: _configuredName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *leftAccessoryUUID; // ivar: _leftAccessoryUUID
@property (readonly, copy) NSUUID *leftComponentUUID; // ivar: _leftComponentUUID
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSUUID *rightAccessoryUUID; // ivar: _rightAccessoryUUID
@property (readonly, copy) NSUUID *rightComponentUUID; // ivar: _rightComponentUUID
@property (readonly, copy) NSUUID *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid; // ivar: _uuid


+(BOOL)decodeComponentData:(id)arg0 leftComponentUUID:(*id)arg1 leftAccessoryUUID:(*id)arg2 rightComponentUUID:(*id)arg3 rightAccessoryUUID:(*id)arg4 ;
+(id)encodeComponentDataWithLeftComponentUUID:(id)arg0 leftAccessoryUUID:(id)arg1 rightComponentUUID:(id)arg2 rightAccessoryUUID:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithPayload:(id)arg0 ;
-(id)initWithUUID:(id)arg0 name:(id)arg1 configuredName:(id)arg2 leftComponentUUID:(id)arg3 rightComponentUUID:(id)arg4 leftAccessoryUUID:(id)arg5 rightAccessoryUUID:(id)arg6 sessionID:(id)arg7 ;
-(id)payloadCopy;


@end


#endif