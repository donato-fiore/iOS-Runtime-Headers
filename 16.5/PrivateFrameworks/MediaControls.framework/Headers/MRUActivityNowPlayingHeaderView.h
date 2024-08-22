// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUACTIVITYNOWPLAYINGHEADERVIEW_H
#define MRUACTIVITYNOWPLAYINGHEADERVIEW_H

@class UIView;


#import "MRUNowPlayingLabelView.h"
#import "MRUVisualStylingProvider.h"

@interface MRUActivityNowPlayingHeaderView : UIView

@property (readonly, nonatomic) CGFloat labelInset;
@property (readonly, nonatomic) MRUNowPlayingLabelView *labelView; // ivar: _labelView
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider


-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)updateVisibilty;


@end


#endif