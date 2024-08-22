// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RUIVARIABLEHEIGHTCELL_H
#define RUIVARIABLEHEIGHTCELL_H



#import "RemoteUITableViewCell.h"

@interface RUIVariableHeightCell : RemoteUITableViewCell

@property (nonatomic) NSInteger detailTextAlignment; // ivar: _detailTextAlignment
@property (nonatomic) BOOL supportsAccessory; // ivar: _supportsAccessory


-(CGFloat)height;
-(struct CGSize )sizeForTextLabel:(id)arg0 width:(CGFloat)arg1 ;
-(void)layoutSubviews;


@end


#endif