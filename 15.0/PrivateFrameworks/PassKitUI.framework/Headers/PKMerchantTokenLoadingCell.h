// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMERCHANTTOKENLOADINGCELL_H
#define PKMERCHANTTOKENLOADINGCELL_H

@class UITableViewCell, UIActivityIndicatorView;



@interface PKMerchantTokenLoadingCell : UITableViewCell {
    UIActivityIndicatorView *_activityIndicator;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setUpConstraints;
-(void)_setUpViews;
-(void)prepareForReuse;


@end


#endif