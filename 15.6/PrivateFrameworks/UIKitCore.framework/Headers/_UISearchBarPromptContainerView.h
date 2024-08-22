// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISEARCHBARPROMPTCONTAINERVIEW_H
#define _UISEARCHBARPROMPTCONTAINERVIEW_H



#import "UIView.h"
#import "UILabel.h"

@interface _UISearchBarPromptContainerView : UIView

@property (nonatomic) NSInteger barMetrics; // ivar: _barMetrics
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (retain, nonatomic) UILabel *promptLabel; // ivar: _promptLabel


-(BOOL)_isKnownUISearchBarComponentContainer;
-(BOOL)useMini;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif