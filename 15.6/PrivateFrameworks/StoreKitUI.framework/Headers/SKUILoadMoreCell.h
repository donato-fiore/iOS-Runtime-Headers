// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUILOADMORECELL_H
#define SKUILOADMORECELL_H

@class UIActivityIndicatorView;


#import "SKUITableViewCell.h"

@interface SKUILoadMoreCell : SKUITableViewCell {
    UIActivityIndicatorView *_indicator;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)startAnimating;
-(void)stopAnimating;


@end


#endif