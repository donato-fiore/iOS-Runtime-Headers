// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSUIUTILITIES_H
#define MAPSUIUTILITIES_H


#import <Foundation/Foundation.h>


@interface MapsUIUtilities : NSObject



+(BOOL)deviceIsLockedAndNeedsPasscode;
+(BOOL)isDataDetectorsProcess;
+(BOOL)isInApplicationContext:(NSUInteger)arg0 ;
+(BOOL)isMapsProcess;
+(BOOL)isParsecProcess;
+(BOOL)isSafariProcess;
+(BOOL)isSiriProcess;
+(BOOL)isSpotlightProcess;
+(id)bundleIdentifierForContext:(NSUInteger)arg0 ;
+(void)checkDeviceLockStatusWithCompletion:(id)arg0 ;
+(void)performOnMainIfNecessary:(id)arg0 ;
+(void)resizeImageIfNeeded:(id)arg0 toFrameSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 completion:(id)arg3 ;


@end


#endif