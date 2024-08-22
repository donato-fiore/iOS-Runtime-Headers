// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLVIDEOREMAKER_H
#define PLVIDEOREMAKER_H

@class NSString, AVAssetExportSession, NSTimer, PFVideoAVObjectBuilder;
@protocol PLVideoRemakerDelegate;

#import <Foundation/Foundation.h>

#import "PLProgressView.h"

@interface PLVideoRemaker : NSObject {
    NSString *_trimmedPath;
    AVAssetExportSession *_exportSession;
    float _percentComplete;
    NSTimer *_progressTimer;
    PLProgressView *_progressView;
}


@property (readonly, retain, nonatomic) PFVideoAVObjectBuilder *_videoAVObjectBuilder; // ivar: __videoAVObjectBuilder
@property (copy, nonatomic) NSString *customAccessibilityLabel; // ivar: _customAccessibilityLabel
@property (weak, nonatomic) NSObject<PLVideoRemakerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSString *exportPreset;
@property (copy, nonatomic) NSString *exportPresetOverride; // ivar: _exportPresetOverride
@property (nonatomic) int mode; // ivar: _mode
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (nonatomic) BOOL shouldExportToPhotoDataDirectory; // ivar: _shouldExportToPhotoDataDirectory
@property (nonatomic) CGFloat trimEndTime; // ivar: _trimEndTime
@property (nonatomic) CGFloat trimStartTime; // ivar: _trimStartTime


+(CGFloat)maximumDurationForTrimMode:(int)arg0 ;
+(NSInteger)approximateByteSizeForMode:(int)arg0 duration:(CGFloat)arg1 ;
+(NSInteger)fileLengthLimitForRemakerMode:(int)arg0 ;
+(int)getHDRemakerModeForMode:(int)arg0 ;
+(int)getSDRemakerModeForMode:(int)arg0 ;
-(id)_fileFormatForURL:(id)arg0 ;
-(id)_metadata;
-(id)initWithAVAsset:(id)arg0 ;
-(id)initWithManagedAsset:(id)arg0 applyVideoAdjustments:(BOOL)arg1 ;
-(id)initWithPublishingMedia:(id)arg0 ;
-(id)messageForRemakingProgress;
-(id)progressView;
-(void)_didEndRemakingWithTemporaryPath:(id)arg0 ;
-(void)_exportCompletedWithSuccess:(BOOL)arg0 ;
-(void)_removeProgressTimer;
-(void)_resetProgressTimer;
-(void)_updateProgress;
-(void)cancel;
-(void)dealloc;
-(void)remake;


@end


#endif