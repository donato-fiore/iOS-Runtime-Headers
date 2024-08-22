// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRATTESTATIONDEVICEGEN1HANDLER_H
#define CRATTESTATIONDEVICEGEN1HANDLER_H



#import "CRAttestationBaseDeviceHandler.h"

@interface CRAttestationDeviceGen1Handler : CRAttestationBaseDeviceHandler



+(BOOL)isGen1Device:(int)arg0 ;
+(id)getDeviceHandlerForProductType:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif