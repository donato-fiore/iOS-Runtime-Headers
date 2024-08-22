// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUPDATEACTIVESYSTEMENDPOINTREQUEST_H
#define MRUPDATEACTIVESYSTEMENDPOINTREQUEST_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_MRUpdateActiveSystemEndpointRequestProtobuf.h"

@interface MRUpdateActiveSystemEndpointRequest : NSObject <NSCopying>



@property (nonatomic) NSInteger changeType; // ivar: _changeType
@property (copy, nonatomic) NSString *clientBundleIdentifier; // ivar: _clientBundleIdentifier
@property (copy, nonatomic) NSString *outputDeviceUID; // ivar: _outputDeviceUID
@property (nonatomic, getter=isPairedDeviceSync) BOOL pairedDeviceSync; // ivar: _pairedDeviceSync
@property (readonly, nonatomic) _MRUpdateActiveSystemEndpointRequestProtobuf *protobuf;
@property (copy, nonatomic) NSString *reason; // ivar: _reason


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithOutputDeviceUID:(id)arg0 reason:(id)arg1 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)perform:(id)arg0 completion:(id)arg1 ;


@end


#endif