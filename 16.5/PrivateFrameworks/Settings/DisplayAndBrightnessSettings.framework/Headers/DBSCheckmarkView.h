// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSCHECKMARKVIEW_H
#define DBSCHECKMARKVIEW_H

@class UIView, UIImageView;



@interface DBSCheckmarkView : UIView

@property (retain, nonatomic) UIImageView *_checkmarkImageView; // ivar: __checkmarkImageView
@property (retain, nonatomic) UIImageView *_circleImageView; // ivar: __circleImageView
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureView;
-(void)_updateViewState;


@end


#endif