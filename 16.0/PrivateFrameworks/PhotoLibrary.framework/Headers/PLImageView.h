// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLIMAGEVIEW_H
#define PLIMAGEVIEW_H

@class UIImageView, UIView, UILabel, NSString;


#import "PLVideoView.h"
#import "PLPhotoTilePlaceholderView.h"
#import "PLTiledLayer.h"

@interface PLImageView : UIImageView {
    UIView *_borderView;
    PLVideoView *_videoView;
    PLPhotoTilePlaceholderView *_placeholderView;
    UILabel *_textBadge;
    BOOL _shadowEnabled;
    BOOL _suppressShadowDrawing;
    BOOL _borderViewIsVisible;
    BOOL _drawsBorder;
    float _aspectRatio;
    CGFloat _lastBorderAlphaTime;
    CGFloat _lastShadowAlphaTime;
    BOOL _edgeAntialiasingEnabled;
    PLTiledLayer *_fullSizeImageTiledLayer;
    NSInteger _fullSizeImageOrientation;
}


@property (nonatomic) CGFloat accessoryViewsAlpha; // ivar: _accessoryViewsAlpha
@property (nonatomic) float borderAndAccessoriesAlpha;
@property (nonatomic, getter=isBorderAndAccessoriesVisible) BOOL borderAndAccessoriesVisible;
@property (retain, nonatomic) UIView *bottomRightAccessoryView; // ivar: _bottomRightAccessoryView
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (nonatomic) BOOL drawsBorder;
@property (retain, nonatomic) UIView *leftAccessoryView; // ivar: _leftAccessoryView
@property (nonatomic) CGSize leftAccessoryViewOffset; // ivar: _leftAccessoryViewOffset
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGFloat placeholderScale; // ivar: _placeholderScale
@property (readonly, nonatomic) CGSize placeholderSize;
@property (nonatomic, getter=isShadowEnabled) BOOL shadowEnabled;
@property (readonly, nonatomic) BOOL showsPlaceholder; // ivar: _showsPlaceholder
@property (nonatomic) CGFloat transitionProgress; // ivar: _transitionProgress
@property (retain, nonatomic) PLVideoView *videoView;


+(BOOL)shouldDrawShadows;
+(id)textBadgeForString:(id)arg0 photoSize:(struct CGSize )arg1 ;
+(struct CGSize )badgeOffset;
+(void)initialize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)textBadgeString;
-(struct CGAffineTransform )_transformForFullSizeImageTiledLayer;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 allowRounding:(BOOL)arg1 ;
-(void)_updatePlaceholderAlpha;
-(void)_updatePlaceholderLayout;
-(void)_updateShadowPath;
-(void)dealloc;
-(void)layoutSubviews;
-(void)parentDidLayout;
-(void)renderSnapshotInContext:(struct CGContext *)arg0 ;
-(void)setEdgeAntialiasingEnabled:(BOOL)arg0 ;
-(void)setFullSizeImageJPEGData:(id)arg0 size:(struct CGSize )arg1 orientation:(NSInteger)arg2 ;
-(void)setImage:(id)arg0 ;
-(void)setTextBadgeString:(id)arg0 ;
-(void)updateFullSizeImageVisibleArea;


@end


#endif