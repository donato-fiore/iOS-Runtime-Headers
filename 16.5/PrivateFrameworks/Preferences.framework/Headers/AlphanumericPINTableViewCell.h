// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ALPHANUMERICPINTABLEVIEWCELL_H
#define ALPHANUMERICPINTABLEVIEWCELL_H

@class UITableViewCell;


#import "AlphanumericPINTextField.h"

@interface AlphanumericPINTableViewCell : UITableViewCell

@property (retain, nonatomic) AlphanumericPINTextField *pinTextField; // ivar: _pinTextField


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif