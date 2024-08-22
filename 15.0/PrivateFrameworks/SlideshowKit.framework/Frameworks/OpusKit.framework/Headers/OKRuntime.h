// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKRUNTIME_H
#define OKRUNTIME_H


#import <Foundation/Foundation.h>


@interface OKRuntime : NSObject



+(NSUInteger)currentPlatform;
+(id)currentPlatformStringWithDisplayScale;
+(id)opusKitBundle;
+(id)resolutionStringWithSize:(struct CGSize )arg0 ;
+(id)resolutionStringWithSize:(struct CGSize )arg0 andPlatforms:(NSUInteger)arg1 ;
+(id)resolutionStringWithSize:(struct CGSize )arg0 keepAspectRatio:(BOOL)arg1 ;
+(id)resolutionStringWithSize:(struct CGSize )arg0 keepAspectRatio:(BOOL)arg1 andPlatforms:(NSUInteger)arg2 ;
+(id)stringForPlatforms:(NSUInteger)arg0 ;
+(void)setupJavascriptContext:(id)arg0 ;


@end


#endif