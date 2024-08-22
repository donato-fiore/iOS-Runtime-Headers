// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSUTILITIES_H
#define VSUTILITIES_H


#import <Foundation/Foundation.h>


@interface VSUtilities : NSObject



+(BOOL)hasAMX;
+(BOOL)hasANE;
+(BOOL)isH12Platform;
+(BOOL)isHomeHub;
+(BOOL)isHomePod;
+(BOOL)isInternalBuild;
+(BOOL)isSeedBuild;
+(BOOL)isWatch;


@end


#endif