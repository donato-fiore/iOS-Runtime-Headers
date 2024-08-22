// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINFOGRAPHICTITLEDETAILOPTIONALBUTTONCELL_H
#define HKINFOGRAPHICTITLEDETAILOPTIONALBUTTONCELL_H

@class UITableViewCell;


#import "HKTitleDetailOptionalButtonView.h"

@interface HKInfographicTitleDetailOptionalButtonCell : UITableViewCell {
    HKTitleDetailOptionalButtonView *_titleDetailOptionalButtonView;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)populateWithTitle:(id)arg0 detail:(id)arg1 buttonText:(id)arg2 buttonAction:(id)arg3 ;


@end


#endif