// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICONTEXTMENUTITLEVIEW_H
#define _UICONTEXTMENUTITLEVIEW_H

@class NSString;


#import "UICollectionReusableView.h"
#import "UIVisualEffectView.h"
#import "UIView.h"
#import "UILabel.h"

@interface _UIContextMenuTitleView : UICollectionReusableView

@property (retain, nonatomic) UIVisualEffectView *bgView; // ivar: _bgView
@property (retain, nonatomic) UIView *separator; // ivar: _separator
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateLayoutMargins;
-(void)didMoveToWindow;
-(void)setBackgroundMaterialGroupName:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif