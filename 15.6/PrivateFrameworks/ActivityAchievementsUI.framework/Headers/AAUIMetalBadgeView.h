// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUIMETALBADGEVIEW_H
#define AAUIMETALBADGEVIEW_H

@class UIView, UIImage, NSString, CAMetalLayer;
@protocol AAUIBadgeViewDrawable, AAUIBadgeViewDrawableDelegate;


#import "AAUIBadgeModelConfiguration.h"
#import "AAUIMetalBadgeRenderer.h"

@interface AAUIMetalBadgeView : UIView <AAUIBadgeViewDrawable>

 {
    BOOL _useEarnedShader;
}


@property (retain, nonatomic) UIImage *backTextureImage;
@property (retain, nonatomic) AAUIBadgeModelConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIBadgeViewDrawableDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CAMetalLayer *metalLayer; // ivar: _metalLayer
@property (nonatomic, getter=isPaused) BOOL paused;
@property (retain, nonatomic) AAUIMetalBadgeRenderer *renderer; // ivar: _renderer
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


+(Class)layerClass;
-(id)initUsingEarnedShader:(BOOL)arg0 delegate:(id)arg1 ;
-(id)snapshot;
-(void)cleanupAfterSnapshot;
-(void)resizeBadgeForCurrentViewSize;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif