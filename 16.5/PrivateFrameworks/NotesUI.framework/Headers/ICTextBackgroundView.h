// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTEXTBACKGROUNDVIEW_H
#define ICTEXTBACKGROUNDVIEW_H

@class UIView;



@interface ICTextBackgroundView : UIView

@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView


-(id)backgroundColor;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)createLayout;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif