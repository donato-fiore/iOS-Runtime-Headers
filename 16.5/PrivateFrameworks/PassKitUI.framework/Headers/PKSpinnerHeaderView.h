// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSPINNERHEADERVIEW_H
#define PKSPINNERHEADERVIEW_H

@class UITableViewHeaderFooterView, UIActivityIndicatorView;



@interface PKSpinnerHeaderView : UITableViewHeaderFooterView {
    UIActivityIndicatorView *_spinner;
}


@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner


-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif