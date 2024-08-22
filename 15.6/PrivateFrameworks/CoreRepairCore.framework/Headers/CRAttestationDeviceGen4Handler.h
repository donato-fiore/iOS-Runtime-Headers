// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRATTESTATIONDEVICEGEN4HANDLER_H
#define CRATTESTATIONDEVICEGEN4HANDLER_H



#import "CRAttestationBaseDeviceHandler.h"

@interface CRAttestationDeviceGen4Handler : CRAttestationBaseDeviceHandler



+(BOOL)isGen4Device:(int)arg0 ;
+(id)getDeviceHandlerForProductType:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif