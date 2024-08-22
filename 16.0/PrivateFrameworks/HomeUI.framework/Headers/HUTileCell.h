// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTILECELL_H
#define HUTILECELL_H

@class UICollectionViewCell, UICellConfigurationState, UIColor, HFItem;
@protocol HUQuickControlPresentationTransitionDelegate, HUTileCellProtocol, HUReorderableCellProtocol, HUBackgroundEffectViewGrouping;



@interface HUTileCell : UICollectionViewCell <HUQuickControlPresentationTransitionDelegate, HUTileCellProtocol, HUReorderableCellProtocol>

 {
    ? borderStyle;
    ? overrideLayout;
    ? _gridSize;
}


@property (nonatomic, readonly) UICellConfigurationState *_bridgedConfigurationState;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) NSUInteger backgroundDisplayStyle; // ivar: backgroundDisplayStyle
@property (nonatomic, retain) NSObject<HUBackgroundEffectViewGrouping> *backgroundEffectGrouper; // ivar: backgroundEffectGrouper
@property (nonatomic) HUGridSize gridSize;
@property (nonatomic, retain) HFItem *item; // ivar: item
@property (nonatomic) BOOL rearranging; // ivar: isRearranging
@property (nonatomic) BOOL reorderable; // ivar: reorderable
@property (nonatomic) BOOL showPrefixLabel; // ivar: showPrefixLabel
@property (nonatomic) BOOL toggleable; // ivar: toggleable
@property (nonatomic) BOOL useMutedIconOffColors; // ivar: useMutedIconOffColors


+(CGFloat)minimumDescriptionScaleFactor;
-(BOOL)isRearranging;
-(BOOL)recognizeDoubleClickGesture;
-(CGFloat)backgroundCornerRadius;
-(id)baseIconViewConfiguration;
-(id)createBackgroundBlurView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)prefixLabelFont;
-(id)prefixLabelTextColor;
-(id)prefixString;
-(id)primaryLabelFont;
-(id)primaryLabelTextColor;
-(id)primaryString;
-(id)secondaryAttributedString;
-(id)secondaryLabelFont;
-(id)secondaryLabelTextColor;
-(id)secondaryString;
-(id)tappableAreaForPoint:(struct CGPoint )arg0 ;
-(struct CGRect )iconViewTileFrame;
-(struct CGRect )prefixLabelTileFrame;
-(struct CGRect )primaryLabelTileFrame;
-(struct CGRect )secondaryLabelTileFrame;
-(struct CGRect )tileFrame;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_bridgedUpdateConfigurationUsingState:(id)arg0 ;
-(void)animateIconTouchDown;
-(void)animateIconTouchUp;
-(void)prepareForReuse;
-(void)resetToDefaultGridSize;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif