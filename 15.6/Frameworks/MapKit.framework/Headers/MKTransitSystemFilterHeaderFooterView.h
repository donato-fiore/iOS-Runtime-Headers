// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKTRANSITSYSTEMFILTERHEADERFOOTERVIEW_H
#define MKTRANSITSYSTEMFILTERHEADERFOOTERVIEW_H

@class UITableViewHeaderFooterView, UILabel, NSString;


#import "MKTransitSystemFilterView.h"

@interface MKTransitSystemFilterHeaderFooterView : UITableViewHeaderFooterView {
    UILabel *_titleLabel;
}


@property (readonly, nonatomic) MKTransitSystemFilterView *filterView; // ivar: _filterView
@property (retain, nonatomic) NSString *titleText;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeDidChange;
-(void)_setupConstraints;
-(void)_setupSubviews;


@end


#endif