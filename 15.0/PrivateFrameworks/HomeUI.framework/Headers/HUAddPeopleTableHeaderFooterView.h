// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUADDPEOPLETABLEHEADERFOOTERVIEW_H
#define HUADDPEOPLETABLEHEADERFOOTERVIEW_H

@class UITableViewHeaderFooterView, UIView;



@interface HUAddPeopleTableHeaderFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIView *bottomBorder; // ivar: _bottomBorder
@property (nonatomic) BOOL needsBottomBorder; // ivar: _needsBottomBorder
@property (nonatomic) BOOL needsTopBorder; // ivar: _needsTopBorder
@property (retain, nonatomic) UIView *topBorder; // ivar: _topBorder


+(CGFloat)preferredHeight;
+(id)identifier;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif