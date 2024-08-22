// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERIPPROTOCOLVERSION_H
#define HMDNETWORKROUTERIPPROTOCOLVERSION_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>


@interface HMDNetworkRouterIPProtocolVersion : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger protocol; // ivar: _protocol
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
+(id)protocolFromIPProtocolVersion:(unsigned char)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithProtocol:(NSInteger)arg0 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif