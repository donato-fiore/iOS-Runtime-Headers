// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDNETWORKROUTERIPADDRESS_H
#define HMDNETWORKROUTERIPADDRESS_H

@class NSString, NSData;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>


@interface HMDNetworkRouterIPAddress : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSData *v4; // ivar: _v4
@property (retain, nonatomic) NSData *v6; // ivar: _v6


+(id)ipAddressFromNetAddress:(id)arg0 error:(*id)arg1 ;
+(id)ipAddressFromRuleAddress:(id)arg0 allowWildcard:(BOOL)arg1 ;
+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithV4:(id)arg0 v6:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif