// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKWEEKDAYHEADERPALETTEVIEW_H
#define HKWEEKDAYHEADERPALETTEVIEW_H

@class UIView, NSMutableArray;



@interface HKWeekdayHeaderPaletteView : UIView {
    NSMutableArray *_weekdayLabels;
}




+(CGFloat)preferredHeight;
+(id)weekdayFont;
-(CGFloat)_xOriginForMonthViewWithIndex:(NSInteger)arg0 itemWidth:(CGFloat)arg1 leftMargin:(CGFloat)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 shouldSupportRTL:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateFont;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif