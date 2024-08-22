// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERCLIENTCONTROLOPERATIONRESPONSE_H
#define HMDNETWORKROUTERCLIENTCONTROLOPERATIONRESPONSE_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HMDNetworkRouterClientConfiguration.h"
#import "HMDNetworkRouterControlOperationStatus.h"

@interface HMDNetworkRouterClientControlOperationResponse : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HMDNetworkRouterClientConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDNetworkRouterControlOperationStatus *status; // ivar: _status
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithStatus:(id)arg0 configuration:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif