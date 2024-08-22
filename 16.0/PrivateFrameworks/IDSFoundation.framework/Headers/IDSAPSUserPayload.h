// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSAPSUSERPAYLOAD_H
#define IDSAPSUSERPAYLOAD_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IDSAPSUserPayload : NSObject

@property (retain, nonatomic) NSMutableDictionary *payload; // ivar: _payload


-(id)extractCommandResponseFrom:(id)arg0 ;
-(id)extractCommandWebTunnelResponseFrom:(id)arg0 ;
-(id)extractMadridDeliveryContextFrom:(id)arg0 ;
-(id)extractMadridHttpHeadersFrom:(id)arg0 ;
-(id)extractMadridProtocolPayloadFrom:(id)arg0 ;
-(id)extractQuickRelayAllocationStatusFrom:(id)arg0 ;
-(id)extractQuickRelaySelfAllocTokenFrom:(id)arg0 ;
-(id)initWithBlastDoorObject:(id)arg0 ;
-(void)logDiffBetween:(id)arg0 andTarget:(id)arg1 withKeyPath:(id)arg2 ;
-(void)logHeaderDiffAgainstSource:(id)arg0 ;


@end


#endif