// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNETWORKROUTERCLIENTCONTROLOPERATION_H
#define HMDNETWORKROUTERCLIENTCONTROLOPERATION_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HMDNetworkRouterClientConfiguration.h"
#import "HMDNetworkRouterControlOperation.h"

@interface HMDNetworkRouterClientControlOperation : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HMDNetworkRouterClientConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDNetworkRouterControlOperation *operation; // ivar: _operation
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithOperation:(id)arg0 configuration:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif