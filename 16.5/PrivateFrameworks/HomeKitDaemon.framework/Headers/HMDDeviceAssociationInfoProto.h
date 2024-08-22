// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDEVICEASSOCIATIONINFOPROTO_H
#define HMDDEVICEASSOCIATIONINFOPROTO_H

@class NSUUID, NSString;

#import <Foundation/Foundation.h>


@interface HMDDeviceAssociationInfoProto : NSObject

@property (readonly) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly) NSString *idsDestination; // ivar: _idsDestination
@property (readonly) NSUUID *idsIdentifier; // ivar: _idsIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAccessoryUUID:(id)arg0 idsIdentifier:(id)arg1 idsDestination:(id)arg2 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithProtoPayload:(id)arg0 ;
-(id)protoData;
-(id)protoPayload;


@end


#endif