// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIRECENTSACCESSORYDEFAULTVIEW_H
#define _UIRECENTSACCESSORYDEFAULTVIEW_H



#import "UIView.h"
#import "UILabel.h"

@interface _UIRecentsAccessoryDefaultView : UIView

@property (retain, nonatomic) UILabel *subheadLabel; // ivar: _subheadLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)init;
-(struct CGSize )intrinsicContentSize;
-(void)_updateLabelTextColors;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif