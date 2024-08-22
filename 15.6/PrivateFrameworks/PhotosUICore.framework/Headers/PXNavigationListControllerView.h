// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXNAVIGATIONLISTCONTROLLERVIEW_H
#define PXNAVIGATIONLISTCONTROLLERVIEW_H

@class UIView;



@interface PXNavigationListControllerView : UIView

@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) CGFloat contentViewHeight; // ivar: _contentViewHeight


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateContentViewFrame;
-(void)addSubview:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif