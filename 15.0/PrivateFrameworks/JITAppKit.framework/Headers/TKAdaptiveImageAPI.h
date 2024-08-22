// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKADAPTIVEIMAGEAPI_H
#define TKADAPTIVEIMAGEAPI_H


#import <Foundation/Foundation.h>


@interface TKAdaptiveImageAPI : NSObject



+(id)defaultImageService;
+(id)getService:(SEL)arg0 ;
+(void)registerService:(id)arg0 handler:(id)arg1 ;
+(void)setDefaultImageService:(id)arg0 ;


@end


#endif