// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKAPPICONVIEW_H
#define CKAPPICONVIEW_H

@class UIView, NSMutableArray;



@interface CKAppIconView : UIView

@property (retain, nonatomic) UIView *activityItemView; // ivar: _activityItemView
@property (nonatomic) NSInteger appName; // ivar: _appName
@property (retain, nonatomic) NSMutableArray *constraints; // ivar: _constraints
@property (retain, nonatomic) UIView *contactItemView; // ivar: _contactItemView


-(id)initWithFrame:(struct CGRect )arg0 withAppName:(NSInteger)arg1 ;
-(void)setUpSubviews;
-(void)updateConstraints;


@end


#endif