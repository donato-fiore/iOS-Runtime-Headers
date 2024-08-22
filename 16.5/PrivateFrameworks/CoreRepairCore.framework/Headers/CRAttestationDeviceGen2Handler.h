// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRATTESTATIONDEVICEGEN2HANDLER_H
#define CRATTESTATIONDEVICEGEN2HANDLER_H



#import "CRAttestationBaseDeviceHandler.h"

@interface CRAttestationDeviceGen2Handler : CRAttestationBaseDeviceHandler



+(BOOL)isGen2Device:(int)arg0 ;
+(id)getDeviceHandlerForProductType:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif