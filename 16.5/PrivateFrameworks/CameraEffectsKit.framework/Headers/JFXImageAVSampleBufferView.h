// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXIMAGEAVSAMPLEBUFFERVIEW_H
#define JFXIMAGEAVSAMPLEBUFFERVIEW_H

@class UIView, NSString, UILabel, AVSampleBufferDisplayLayer;
@protocol JFXImageViewRendering;


#import "JTImage.h"

@interface JFXImageAVSampleBufferView : UIView <JFXImageViewRendering>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableDebugDrawing; // ivar: _enableDebugDrawing
@property (nonatomic) BOOL flipX; // ivar: _flipX
@property (nonatomic) BOOL flipY; // ivar: _flipY
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *hdrBadgeDebug; // ivar: _hdrBadgeDebug
@property (retain, nonatomic) JTImage *jtImage; // ivar: _jtImage
@property (readonly, nonatomic) NSInteger renderingType; // ivar: _renderingType
@property (readonly, nonatomic) AVSampleBufferDisplayLayer *sampleBufferDisplayLayer;
@property (readonly) Class superclass;


+(Class)layerClass;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct opaqueCMSampleBuffer *)createCMSampleBufferFromJTImage;
-(void)JFXImageAVSampleBufferView_commonInit;
-(void)drawSampleBufferToLayer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)updateDebugDrawing;


@end


#endif