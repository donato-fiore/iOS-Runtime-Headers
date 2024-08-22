// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VEIOSCOMMONDELEGATE_H
#define VEIOSCOMMONDELEGATE_H


#import <Foundation/Foundation.h>


@interface VEiOSCommonDelegate : NSObject



+(BOOL)allowSaving;
+(BOOL)forceTeardownDisplayOnProjectChange;
+(BOOL)fullScreenPlaybackOnExternalDisplay;
+(BOOL)furtherConstrainVideoScale;
+(BOOL)ignoreReadOnly;
+(BOOL)shouldPlaySlowMoWhenPreviewing;
+(BOOL)updateProjectAndCachesOnPhotosLibraryChange;
+(NSInteger)playbackPixelCount;
+(NSUInteger)exportFrameRateMode;
+(NSUInteger)playbackFrameRateMode;
+(float)duckingAmount;
+(float)videoScale;
+(id)activeCoreProjectViewController;
+(id)currentProject;
+(id)mainBundle;
+(void)notifyCPVCProjectChanged;
+(void)nukeCaches;
+(void)setCurrentProject:(id)arg0 ;
+(void)setDelegateSubclass:(Class)arg0 ;
+(void)setFullScreenPlaybackOnExternalDisplay:(BOOL)arg0 ;
+(void)setVideoScale:(float)arg0 ;


@end


#endif