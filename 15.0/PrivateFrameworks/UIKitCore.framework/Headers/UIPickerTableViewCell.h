// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPICKERTABLEVIEWCELL_H
#define UIPICKERTABLEVIEWCELL_H



#import "UITableViewCell.h"
#import "UITapGestureRecognizer.h"
#import "UIPickerTableView.h"

@interface UIPickerTableViewCell : UITableViewCell {
    UITapGestureRecognizer *_tap;
}


@property (nonatomic) UIPickerTableView *pickerTable; // ivar: pickerTable


+(id)_centerCellDigitFont;
+(id)_centerCellFont;
+(id)_nonCenterCellDigitFont;
+(id)_nonCenterCellFont;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setIsCenterCell:(BOOL)arg0 shouldModifyAlphaOfView:(BOOL)arg1 ;
-(void)_tapAction:(id)arg0 ;


@end


#endif