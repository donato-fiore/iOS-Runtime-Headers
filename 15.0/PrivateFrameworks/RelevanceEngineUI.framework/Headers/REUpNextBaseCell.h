// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REUPNEXTBASECELL_H
#define REUPNEXTBASECELL_H

@class UICollectionViewCell, UIImageView, UIView, UILongPressGestureRecognizer, REContent, UIImage, NSString, UIColor, CALayer;
@protocol UIGestureRecognizerDelegate, REUpNextCellDelegate;



@interface REUpNextBaseCell : UICollectionViewCell <UIGestureRecognizerDelegate>

 {
    CGSize _shadowSize;
    UIImageView *_shadowView;
    UIView *_overlayView;
    UILongPressGestureRecognizer *_longPressRecognizer;
    CGFloat _darkeningAmount;
    CGFloat _contentBrightness;
    NSUInteger _behavior;
    UIEdgeInsets _overlayInsets;
}


@property (readonly, nonatomic) REContent *content; // ivar: _content
@property (readonly, nonatomic) UIImage *contentImage; // ivar: _contentImage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIColor *defaultTextColor; // ivar: _defaultTextColor
@property (weak, nonatomic) NSObject<REUpNextCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CALayer *imageLayer; // ivar: _imageLayer
@property (retain, nonatomic) UIImage *overrideContentImage; // ivar: _overrideContentImage
@property (retain, nonatomic) NSString *representedElementIdentifier; // ivar: _representedElementIdentifier
@property (readonly, nonatomic) BOOL shouldOverrideContentHeaderColor; // ivar: _shouldOverrideContentHeaderColor
@property (readonly) Class superclass;


+(id)_shadowImage;
+(void)initialize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)primaryEffectViews;
-(id)secondaryEffectViews;
-(id)transitionContext;
-(void)_updateColorOverlay;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)configureWithContent:(id)arg0 ;
-(void)didLongPress:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setForegroundTextColorToColor:(id)arg0 shouldOverrideContentHeaderColor:(BOOL)arg1 ;
-(void)setHighlightBehavior:(NSUInteger)arg0 ;
-(void)setHighlightInsets:(struct UIEdgeInsets )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setShadowViewHidden:(BOOL)arg0 ;


@end


#endif