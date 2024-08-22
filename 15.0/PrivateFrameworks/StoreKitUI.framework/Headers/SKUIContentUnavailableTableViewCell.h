// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICONTENTUNAVAILABLETABLEVIEWCELL_H
#define SKUICONTENTUNAVAILABLETABLEVIEWCELL_H

@class _UIContentUnavailableView, NSString;


#import "SKUITableViewCell.h"

@interface SKUIContentUnavailableTableViewCell : SKUITableViewCell {
    _UIContentUnavailableView *_view;
}


@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif