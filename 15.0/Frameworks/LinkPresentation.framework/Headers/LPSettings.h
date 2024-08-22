// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPSETTINGS_H
#define LPSETTINGS_H


#import <Foundation/Foundation.h>


@interface LPSettings : NSObject



+(BOOL)disableAnimations;
+(BOOL)disableAutoPlay;
+(BOOL)disableLegacyStoreLookups;
+(BOOL)showDebugIndicators;
+(BOOL)subsampleImagesToScreenSize;
+(void)initialize;
+(void)updateFromDefaults;


@end


#endif