// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUMEDIAPLATTERCOLLECTIONVIEWCELL_H
#define HUMEDIAPLATTERCOLLECTIONVIEWCELL_H

@class NSString;
@protocol HUQuickControlPresentationTransitionDelegate;


#import "HUViewControllerCollectionViewCell.h"

@interface HUMediaPlatterCollectionViewCell : HUViewControllerCollectionViewCell <HUQuickControlPresentationTransitionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)recognizeDoubleClickGesture;
-(CGFloat)backgroundCornerRadius;
-(id)backgroundColor;
-(id)baseIconViewConfiguration;
-(id)createBackgroundBlurView;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
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
-(struct CGRect )iconViewTileFrame;
-(struct CGRect )prefixLabelTileFrame;
-(struct CGRect )primaryLabelTileFrame;
-(struct CGRect )secondaryLabelTileFrame;
-(struct CGRect )tileFrame;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)prepareForReuse;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif