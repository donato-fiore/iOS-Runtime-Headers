// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HACCLIVELISTENLEVELGROUP_H
#define HACCLIVELISTENLEVELGROUP_H

@class UIView, NSMutableArray;



@interface HACCLiveListenLevelGroup : UIView

@property (retain, nonatomic) NSMutableArray *levels; // ivar: _levels


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)updateLevel:(CGFloat)arg0 ;


@end


#endif