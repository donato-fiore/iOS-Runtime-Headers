// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKOBJECTPICKERDETAILVIEW_H
#define HKOBJECTPICKERDETAILVIEW_H

@class UIView, UILabel;



@interface HKObjectPickerDetailView : UIView

@property (retain, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (retain, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setUpSubviews;


@end


#endif