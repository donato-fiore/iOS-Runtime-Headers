// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNETWORKROUTERCLIENTSTATUSCONTROL_H
#define HMDNETWORKROUTERCLIENTSTATUSCONTROL_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HMDNetworkRouterClientStatusIdentifierList.h"
#import "HMDNetworkRouterClientStatusControlOperation.h"

@interface HMDNetworkRouterClientStatusControl : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HMDNetworkRouterClientStatusIdentifierList *clientStatusIdentifierList; // ivar: _clientStatusIdentifierList
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDNetworkRouterClientStatusControlOperation *operation; // ivar: _operation
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithOperation:(id)arg0 clientStatusIdentifierList:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif