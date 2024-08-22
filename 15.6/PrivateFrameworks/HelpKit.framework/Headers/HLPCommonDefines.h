// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HLPCOMMONDEFINES_H
#define HLPCOMMONDEFINES_H


#import <Foundation/Foundation.h>


@interface HLPCommonDefines : NSObject



+(BOOL)hasServiceTicket;
+(id)assetRequestHeaderFields;
+(id)assetServiceTicket;
+(id)clientID;
+(id)contentRequestHeaderFields;
+(id)contentServiceTicket;
+(id)userName;
+(void)setAuthenticationContext:(id)arg0 ;


@end


#endif