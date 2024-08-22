// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERADVERTISEMENTPROTOCOL_H
#define HMDNETWORKROUTERADVERTISEMENTPROTOCOL_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>


@interface HMDNetworkRouterAdvertisementProtocol : NSObject <NSCopying, HAPTLVProtocol>



@property (nonatomic) NSInteger advertisementProtocol; // ivar: _advertisementProtocol
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
+(id)protocolFromFirewallRuleAdvertisingProtocol:(unsigned char)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAdvertisementProtocol:(NSInteger)arg0 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif