// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNETWORKROUTERACCESSVIOLATIONCONTROL_H
#define HMDNETWORKROUTERACCESSVIOLATIONCONTROL_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HMDNetworkRouterClientIdentifierList.h"
#import "HMDNetworkRouterAccessViolationControlOperation.h"

@interface HMDNetworkRouterAccessViolationControl : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HMDNetworkRouterClientIdentifierList *clientIdentifierList; // ivar: _clientIdentifierList
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDNetworkRouterAccessViolationControlOperation *operation; // ivar: _operation
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithOperation:(id)arg0 clientIdentifierList:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif