// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSTABLEVIEW_H
#define DSTABLEVIEW_H

@class UITableView, NSLayoutConstraint;



@interface DSTableView : UITableView

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint


-(id)init;
-(void)constrainTableView;
-(void)setContentSize:(struct CGSize )arg0 ;


@end


#endif