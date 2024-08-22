// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MEMORIESDELEGATE_H
#define MEMORIESDELEGATE_H


#import <Foundation/Foundation.h>


@interface MemoriesDelegate : NSObject



+(BOOL)allowSaving;
+(BOOL)forceTeardownDisplayOnProjectChange;
+(BOOL)ignoreReadOnly;
+(BOOL)shouldPlaySlowMoWhenPreviewing;
+(BOOL)updateProjectAndCachesOnPhotosLibraryChange;
+(NSInteger)playbackPixelCount;
+(NSUInteger)exportFrameRateMode;
+(NSUInteger)playbackFrameRateMode;
+(float)duckingAmount;
+(id)activeCoreProjectViewController;
+(id)currentProject;
+(void)nukeCaches;
+(void)setCurrentProject:(id)arg0 ;


@end


#endif