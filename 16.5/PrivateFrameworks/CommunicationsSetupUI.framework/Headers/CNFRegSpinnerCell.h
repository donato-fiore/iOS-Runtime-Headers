// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNFREGSPINNERCELL_H
#define CNFREGSPINNERCELL_H

@class PSTableCell, UIActivityIndicatorView;



@interface CNFRegSpinnerCell : PSTableCell {
    UIActivityIndicatorView *_activityIndicator;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif