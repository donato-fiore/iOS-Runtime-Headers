// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIINLINEACTIONSVIEWCONTROLLER_H
#define SEARCHUIINLINEACTIONSVIEWCONTROLLER_H

@class NSString, CNActionView, CNContactInlineActionsViewController;
@protocol CNContactInlineActionsViewControllerDelegate, CNUIObjectViewControllerDelegate, CNActionViewDelegate, NUIContainerViewDelegate;


#import "SearchUIAccessoryViewController.h"

@interface SearchUIInlineActionsViewController : SearchUIAccessoryViewController <CNContactInlineActionsViewControllerDelegate, CNUIObjectViewControllerDelegate, CNActionViewDelegate, NUIContainerViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNActionView *directionsButton; // ivar: _directionsButton
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNContactInlineActionsViewController *inlineActionsViewController; // ivar: _inlineActionsViewController
@property (retain, nonatomic) CNActionView *messageButton; // ivar: _messageButton
@property (readonly) Class superclass;


+(BOOL)supportsRowModel:(id)arg0 ;
+(id)inlineActionsCache;
+(void)clearInlineActionsCache;
-(NSUInteger)type;
-(id)hostingViewControllerForController:(id)arg0 ;
-(id)setupView;
-(struct CGSize )containerView:(id)arg0 systemLayoutSizeFittingSize:(struct CGSize )arg1 forArrangedSubview:(id)arg2 ;
-(void)contactInlineActionsViewController:(id)arg0 willPerformActionOfType:(id)arg1 ;
-(void)didPressActionView:(id)arg0 longPress:(BOOL)arg1 ;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateWithContacts:(id)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif