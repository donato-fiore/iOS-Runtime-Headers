// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REUPNEXTLARGEWITHDETAILTEXTCELL_H
#define REUPNEXTLARGEWITHDETAILTEXTCELL_H

@class UILayoutGuide, UILabel, UIVisualEffectView;


#import "REUpNextBaseCell.h"
#import "REUpNextImageView.h"

@interface REUpNextLargeWithDetailTextCell : REUpNextBaseCell {
    UILayoutGuide *_contentLayoutGuide;
    REUpNextImageView *_bodyImage;
    UILabel *_headerLabel;
    UILabel *_bodyLabel;
    UILabel *_detail1Label;
    UILabel *_detail2Label;
    UIVisualEffectView *_headerEffectView;
    UIVisualEffectView *_bodyEffectView;
    UIVisualEffectView *_detail1EffectView;
    UIVisualEffectView *_detail2EffectView;
}




+(void)initialize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)primaryEffectViews;
-(id)secondaryEffectViews;
-(void)_updateHeaderColor;
-(void)configureWithContent:(id)arg0 ;
-(void)defaultTextColorDidChange;


@end


#endif