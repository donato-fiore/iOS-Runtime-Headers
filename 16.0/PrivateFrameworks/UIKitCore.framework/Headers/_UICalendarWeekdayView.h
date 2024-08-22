// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICALENDARWEEKDAYVIEW_H
#define _UICALENDARWEEKDAYVIEW_H

@class NSArray;


#import "UIView.h"
#import "_UICalendarDataModel.h"
#import "_UIDatePickerLinkedLabel.h"

@interface _UICalendarWeekdayView : UIView {
    ? _flags;
    NSArray *_labels;
}


@property (readonly, nonatomic) _UICalendarDataModel *dataModel; // ivar: _dataModel
@property (nonatomic) CGFloat preferredLabelWidth; // ivar: _preferredLabelWidth
@property (readonly, nonatomic) _UIDatePickerLinkedLabel *sizingLabel; // ivar: _sizingLabel


-(id)initWithDataModel:(id)arg0 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_rebuildLabels;
-(void)_setNeedsRebuildLabels;
-(void)_updateFont;
-(void)didUpdateCalendar;
-(void)didUpdateFontDesign;
-(void)didUpdateLocale;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif