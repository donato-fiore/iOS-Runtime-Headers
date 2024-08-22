// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CFXOVERLAYPICKERANIMATEDPREVIEWWRITER_H
#define CFXOVERLAYPICKERANIMATEDPREVIEWWRITER_H

@class NSString, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "JFXOverlayEffect.h"
#import "JFXEffectsPreviewGenerator.h"

@interface CFXOverlayPickerAnimatedPreviewWriter : NSObject {
    *CGImageDestination _imageDestination;
}


@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (nonatomic) NSUInteger currentFrameCount; // ivar: _currentFrameCount
@property (nonatomic) ? currentRenderTime; // ivar: _currentRenderTime
@property (retain, nonatomic) NSString *destinationPath; // ivar: _destinationPath
@property (retain, nonatomic) NSDictionary *frameProperties; // ivar: _frameProperties
@property (nonatomic) BOOL isFirstAnimatedFrame; // ivar: _isFirstAnimatedFrame
@property (retain, nonatomic) JFXOverlayEffect *overlay; // ivar: _overlay
@property (nonatomic) CGFloat previewDuration; // ivar: _previewDuration
@property (nonatomic) NSUInteger previewFrameRate; // ivar: _previewFrameRate
@property (retain, nonatomic) JFXEffectsPreviewGenerator *previewGenerator; // ivar: _previewGenerator
@property (readonly, nonatomic) CGSize previewSizeInPixels; // ivar: _previewSizeInPixels
@property (nonatomic) NSUInteger previewStartFrameIndex; // ivar: _previewStartFrameIndex
@property (nonatomic) NSUInteger targetFrameCount; // ivar: _targetFrameCount
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *writerQueue; // ivar: _writerQueue


-(id)initWithOverlayEffectId:(id)arg0 previewSizeInPixels:(struct CGSize )arg1 previewDuration:(CGFloat)arg2 previewFrameRate:(NSUInteger)arg3 previewStartFrameIndex:(NSUInteger)arg4 ;
-(void)CFX_beginWriting;
-(void)CFX_finishWriting;
-(void)CFX_initializeEffectForPreviewing;
-(void)CFX_writeNextEffectFrame;
-(void)writeAnimatedPreviewToPath:(id)arg0 completion:(id)arg1 ;


@end


#endif