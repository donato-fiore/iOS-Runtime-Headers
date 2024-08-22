// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKTITLEDLISTITEMLABEL_H
#define HKTITLEDLISTITEMLABEL_H

@class UIView, UILabel;


#import "HKListItemLabel.h"

@interface HKTitledListItemLabel : UIView

@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (nonatomic) NSInteger currentUserInterfaceStyle; // ivar: _currentUserInterfaceStyle
@property (retain, nonatomic) HKListItemLabel *listItemLabel; // ivar: _listItemLabel


+(id)createTitledListItem:(id)arg0 listBody:(id)arg1 itemNumber:(int)arg2 ;
-(id)initWithView:(id)arg0 size:(struct CGSize )arg1 title:(id)arg2 body:(id)arg3 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)_setUpConstraints;
-(void)_setUpUI;
-(void)_updateCurrentUserInterfaceStyleIfNeeded;
-(void)layoutSubviews;


@end


#endif