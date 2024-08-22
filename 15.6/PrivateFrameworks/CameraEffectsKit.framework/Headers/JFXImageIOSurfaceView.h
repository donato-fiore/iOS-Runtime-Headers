// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXIMAGEIOSURFACEVIEW_H
#define JFXIMAGEIOSURFACEVIEW_H

@class UIView, NSString;
@protocol JFXImageViewRendering;


#import "JTImage.h"

@interface JFXImageIOSurfaceView : UIView <JFXImageViewRendering>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableDebugDrawing; // ivar: _enableDebugDrawing
@property (nonatomic) BOOL flipX; // ivar: _flipX
@property (nonatomic) BOOL flipY; // ivar: _flipY
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) JTImage *jtImage; // ivar: _jtImage
@property (readonly, nonatomic) NSInteger renderingType; // ivar: _renderingType
@property (readonly) Class superclass;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)JFXImageIOSurfaceView_commonInit;
-(void)updateDebugDrawing;


@end


#endif