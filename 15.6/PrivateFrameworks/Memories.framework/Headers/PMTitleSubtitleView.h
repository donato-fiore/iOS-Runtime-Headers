// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMTITLESUBTITLEVIEW_H
#define PMTITLESUBTITLEVIEW_H

@class UIView, NSLayoutConstraint, NSString, PXExtendedTraitCollection, PXTitleSubtitleUILabel, UIViewController;
@protocol PXChangeObserver;



@interface PMTitleSubtitleView : UIView <PXChangeObserver>

 {
    CGPoint _ptOffset;
}


@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint; // ivar: _bottomConstraint
@property (retain, nonatomic) UIView *dark; // ivar: _dark
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // ivar: _extendedTraitCollection
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat heightOfTitleArea;
@property (retain, nonatomic) PXTitleSubtitleUILabel *label; // ivar: _label
@property (retain, nonatomic) NSLayoutConstraint *leftConstraint; // ivar: _leftConstraint
@property (nonatomic) CGPoint ptOffset;
@property (nonatomic) CGRect specSize; // ivar: _specSize
@property (retain, nonatomic) NSString *subtitleText;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *titleFontName; // ivar: _titleFontName
@property (nonatomic) CGFloat titleScale; // ivar: _titleScale
@property (retain, nonatomic) NSString *titleText;
@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(CGFloat)toolbarHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)registerForChangesFromViewController:(id)arg0 ;
-(void)setSpecForVerticalExport;
-(void)updateDarkFrame;
-(void)updateFeatureSpecWithExtendedTraitCollection:(id)arg0 ;
-(void)updateSpecIfNeeded;
-(void)updateSpecialConstraints;
-(void)updateSubtitleTitleLabelForSize:(struct CGSize )arg0 ;
-(void)updateTitleAnimationFromVideoComposition:(id)arg0 ;


@end


#endif