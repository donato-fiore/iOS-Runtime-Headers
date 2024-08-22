// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONCONTENTVIEW_H
#define SBICONCONTENTVIEW_H

@class UIView;



@interface SBIconContentView : UIView

@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) NSInteger orientation; // ivar: _orientation


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithOrientation:(NSInteger)arg0 ;
-(id)preferredFocusEnvironments;
-(void)layoutSubviews;


@end


#endif