// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSHORTCUTSUMMARYCELL_H
#define WFSHORTCUTSUMMARYCELL_H

@class UITableViewCell, UIStackView, UILabel;


#import "WFRowOfIconsView.h"

@interface WFShortcutSummaryCell : UITableViewCell

@property (retain, nonatomic) WFRowOfIconsView *actionIconsView; // ivar: _actionIconsView
@property (retain, nonatomic) UIStackView *mainStackView; // ivar: _mainStackView
@property (retain, nonatomic) UILabel *summaryLabel; // ivar: _summaryLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)addActionViewIfNeeded;
-(void)configureWithTitle:(id)arg0 actionIcons:(id)arg1 ;
-(void)prepareForReuse;
-(void)removeActionViewIfNeeded;


@end


#endif