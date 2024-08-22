// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFAUTOMATIONEMPTYSTATECELL_H
#define WFAUTOMATIONEMPTYSTATECELL_H

@class UITableViewCell, NSArray;


#import "WFAutomationTypeExplanationPlatterView.h"

@interface WFAutomationEmptyStateCell : UITableViewCell

@property (readonly, nonatomic) WFAutomationTypeExplanationPlatterView *automationTypeView; // ivar: _automationTypeView
@property (retain, nonatomic) NSArray *currentConstraints; // ivar: _currentConstraints


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)configureForAutomationType:(NSUInteger)arg0 buttonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateLayoutConstraints;


@end


#endif