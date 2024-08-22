// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCALENDARCHOOSERTABLEHEADERVIEW_H
#define EKCALENDARCHOOSERTABLEHEADERVIEW_H

@class UIView, UILabel;



@interface EKCalendarChooserTableHeaderView : UIView {
    UILabel *_label;
}


@property (readonly, nonatomic) CGFloat tableViewWidth; // ivar: _tableViewWidth


-(id)initWithTextMode:(int)arg0 ;


@end


#endif