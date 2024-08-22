// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIACTIONSVIEWBOXVIEW_H
#define SEARCHUIACTIONSVIEWBOXVIEW_H

@class NUIContainerBoxView, CNContactInlineActionsViewController;



@interface SearchUIActionsViewBoxView : NUIContainerBoxView

@property (retain) CNContactInlineActionsViewController *actionsViewController; // ivar: _actionsViewController


+(id)inlineActionsBoxView;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didMoveToWindow;
-(void)tlk_updateForAppearance:(id)arg0 ;


@end


#endif