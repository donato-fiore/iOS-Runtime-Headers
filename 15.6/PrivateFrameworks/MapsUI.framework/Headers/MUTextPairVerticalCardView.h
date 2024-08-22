// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUTEXTPAIRVERTICALCARDVIEW_H
#define MUTEXTPAIRVERTICALCARDVIEW_H

@class NSArray;


#import "MUPlaceVerticalCardContainerView.h"

@interface MUTextPairVerticalCardView : MUPlaceVerticalCardContainerView

@property (retain, nonatomic) NSArray *viewModels; // ivar: _viewModels


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeDidChange;
-(void)_recalculateStackingIfNeeded;
-(void)_updateAppearance;
-(void)layoutSubviews;


@end


#endif