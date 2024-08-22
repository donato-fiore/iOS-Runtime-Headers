// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUIBADGEVIEW_H
#define PSUIBADGEVIEW_H

@class UIView, UILabel, NSString;



@interface PSUIBadgeView : UIView

@property (retain, nonatomic) UILabel *badgeLabel; // ivar: _badgeLabel
@property (nonatomic) CGFloat baseline; // ivar: _baseline
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (nonatomic) CGFloat minPadding; // ivar: _minPadding
@property (copy, nonatomic) NSString *text;


-(id)init;
-(struct CGSize )intrinsicContentSize;


@end


#endif