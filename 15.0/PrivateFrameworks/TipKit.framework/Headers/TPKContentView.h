// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPKCONTENTVIEW_H
#define TPKCONTENTVIEW_H

@class UIView, UITraitCollection, UIColor, UIImageView, UIVisualEffect;
@protocol TPKContentViewDelegate;


#import "TPKContent.h"

@interface TPKContentView : UIView {
    ? displayBottomSeparator;
    ? directionalEdgeInsets;
    ? contentViewBackgroundColor;
    ? preferredTraitCollection;
    ? imageProxy;
    ? hostingView;
    ? viewModel;
}


@property (nonatomic, retain) UITraitCollection *_preferredTraitCollection;
@property (nonatomic, retain) TPKContent *content; // ivar: content
@property (nonatomic, retain) UIColor *contentBackgroundColor;
@property (nonatomic) NSDirectionalEdgeInsets defaultDirectionalEdgeInsets;
@property (nonatomic) BOOL displaysBottomSeparator;
@property (nonatomic, readonly) UIImageView *iconImageView;
@property (nonatomic, retain) UIColor *preferredActionTintColor;
@property (nonatomic, retain) UIColor *preferredIconImageTintColor;
@property (nonatomic) CGSize preferredMicaLayerSize;
@property (nonatomic, weak) NSObject<TPKContentViewDelegate> *viewDelegate; // ivar: viewDelegate
@property (nonatomic, retain) UIVisualEffect *visualEffect;


+(id)SiriIconWithTraitCollection:(id)arg0 ;
+(id)TipsIconWithTraitCollection:(id)arg0 ;
+(struct CGSize )defaultMicaSize;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithController:(id)arg0 content:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithReusableTipView:(id)arg0 ;
-(void)bottomSeperatorNeedsUpdate;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)deviceOrientationDidChange:(id)arg0 ;
-(void)monitorContentSizeCategoryChanges;
-(void)monitorDeviceOrientationChanges;
-(void)resetHostingView;
-(void)updateContentBackgroundColor:(id)arg0 ;
-(void)updateDisplaysBottomSeparator:(BOOL)arg0 ;
-(void)updatePreferredDirectionEdgeInsets:(struct NSDirectionalEdgeInsets )arg0 ;
-(void)updatePreferredTraitCollection:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif