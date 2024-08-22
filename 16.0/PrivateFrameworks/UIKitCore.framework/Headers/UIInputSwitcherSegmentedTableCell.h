// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINPUTSWITCHERSEGMENTEDTABLECELL_H
#define UIINPUTSWITCHERSEGMENTEDTABLECELL_H



#import "UIInputSwitcherTableCell.h"
#import "UIInputSwitcherSegmentControl.h"

@interface UIInputSwitcherSegmentedTableCell : UIInputSwitcherTableCell

@property (readonly, nonatomic) UIInputSwitcherSegmentControl *segmentControl; // ivar: _segmentControl


+(struct CGSize )preferredSizeWithSegmentCount:(NSUInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setUsesDarkTheme:(BOOL)arg0 ;
-(void)updateSelectionWithPoint:(struct CGPoint )arg0 ;


@end


#endif