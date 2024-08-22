// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKLEFTALIGNEDSPINNERCELL_H
#define PKLEFTALIGNEDSPINNERCELL_H

@class UITableViewCell, UIActivityIndicatorView;



@interface PKLeftAlignedSpinnerCell : UITableViewCell {
    UIActivityIndicatorView *_spinner;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif