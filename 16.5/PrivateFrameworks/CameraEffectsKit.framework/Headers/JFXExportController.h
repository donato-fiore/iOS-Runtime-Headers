// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXEXPORTCONTROLLER_H
#define JFXEXPORTCONTROLLER_H

@class NSString, UIImage, NSArray, NSTimer;
@protocol JFXExportDelegate;

#import <Foundation/Foundation.h>

#import "JFXComposition.h"

@interface JFXExportController : NSObject

@property (nonatomic) BOOL cancel; // ivar: _cancel
@property (retain, nonatomic) JFXComposition *composition; // ivar: _composition
@property (retain, nonatomic) NSString *currentPreset; // ivar: _currentPreset
@property (retain, nonatomic) NSObject<JFXExportDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *exportPath; // ivar: _exportPath
@property NSUInteger exportStartTime; // ivar: _exportStartTime
@property (nonatomic) NSUInteger exportingIndexPresets; // ivar: _exportingIndexPresets
@property (retain, nonatomic) UIImage *poster; // ivar: _poster
@property (retain, nonatomic) NSArray *presets; // ivar: _presets
@property (retain, nonatomic) NSTimer *progressTimer; // ivar: _progressTimer
@property (nonatomic) NSInteger status; // ivar: _status


+(NSUInteger)audioDataRateForPreset:(id)arg0 ;
+(NSUInteger)dataRateForPreset:(id)arg0 size:(struct CGSize )arg1 ;
+(NSUInteger)estimatedFileSizeForDuration:(int)arg0 frameRate:(CGFloat)arg1 preset:(id)arg2 size:(struct CGSize )arg3 ;
+(NSUInteger)videoDataRateForPreset:(id)arg0 size:(struct CGSize )arg1 ;
+(id)presetNameForCGSize:(struct CGSize )arg0 ;
-(NSUInteger)exportDuration;
-(float)progress;
-(id)initWithWithComposition:(id)arg0 presets:(id)arg1 toFile:(id)arg2 poster:(id)arg3 delegate:(id)arg4 ;
-(id)metadataToAdd;
-(void)analyticsForSessionBegin;
-(void)analyticsForSessionCompleteWithStatus:(NSInteger)arg0 ;
-(void)beginAsynchronousExport;
-(void)cancelExportWithStatus:(NSInteger)arg0 ;
-(void)closeSessionWithStatus:(NSInteger)arg0 ;
-(void)continueExportAfterDelay;
-(void)informDelegateOfCompletion;
-(void)nextPreset;
-(void)serviceProgressTimer:(id)arg0 ;
-(void)startProgressTimer;
-(void)stopProgressTimer;
-(void)updateProgressViewWithProgress:(float)arg0 reduced:(BOOL)arg1 ;


@end


#endif