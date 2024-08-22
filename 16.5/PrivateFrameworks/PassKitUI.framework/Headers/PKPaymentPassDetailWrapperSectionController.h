// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPASSDETAILWRAPPERSECTIONCONTROLLER_H
#define PKPAYMENTPASSDETAILWRAPPERSECTIONCONTROLLER_H

@class NSString, NSArray;
@protocol PKTableViewSectionController;

#import <Foundation/Foundation.h>

#import "PKPaymentPassDetailViewController.h"

@interface PKPaymentPassDetailWrapperSectionController : NSObject <PKTableViewSectionController>

 {
    PKPaymentPassDetailViewController *_viewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *sectionIdentifiers; // ivar: _sectionIdentifiers
@property (readonly) Class superclass;


-(BOOL)shouldDrawBottomSeparatorForSectionIdentifier:(id)arg0 ;
-(BOOL)shouldDrawTopSeparatorForSectionIdentifier:(id)arg0 ;
-(BOOL)shouldHighlightRowAtIndexPath:(id)arg0 sectionIdentifier:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(CGFloat)estimatedHeightForRowAtIndexPath:(id)arg0 sectionIdentifier:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSectionIdentifier:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSectionIdentifier:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(NSInteger)editingStyleForRowAtIndexPath:(id)arg0 sectionIdentifier:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSectionIdentifier:(id)arg1 ;
-(id)init;
-(id)initWithViewController:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 sectionIdentifier:(id)arg3 ;
-(id)tableView:(id)arg0 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)tableView:(id)arg0 viewForFooterInSectionIdentifier:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSectionIdentifier:(id)arg1 ;
-(id)titleForFooterInSectionIdentifier:(id)arg0 ;
-(id)titleForHeaderInSectionIdentifier:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;


@end


#endif