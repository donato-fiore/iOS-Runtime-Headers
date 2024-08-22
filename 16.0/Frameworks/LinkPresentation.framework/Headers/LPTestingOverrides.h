// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPTESTINGOVERRIDES_H
#define LPTESTINGOVERRIDES_H


#import <Foundation/Foundation.h>


@interface LPTestingOverrides : NSObject



+(BOOL)forceEnableAllEntitlements;
+(BOOL)forceIgnoreAllTCCChecks;
+(BOOL)forceMonospaceFonts;
+(BOOL)forceRTL;
+(NSUInteger)forceImageLoadingScaleFactor;
+(id)additionalAllowedFileURLDirectories;
+(id)customLoader;
+(id)forceSubsampleImagesToScreenSize;
+(void)reset;
+(void)setAdditionalAllowedFileURLDirectories:(id)arg0 ;
+(void)setCustomLoader:(id)arg0 ;
+(void)setForceEnableAllEntitlements:(BOOL)arg0 ;
+(void)setForceIgnoreAllTCCChecks:(BOOL)arg0 ;
+(void)setForceImageLoadingScaleFactor:(NSUInteger)arg0 ;
+(void)setForceMonospaceFonts:(BOOL)arg0 ;
+(void)setForceRTL:(BOOL)arg0 ;
+(void)setForceSubsampleImagesToScreenSize:(id)arg0 ;


@end


#endif