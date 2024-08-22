// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIBRARYITEMCONTROLLER_H
#define LIBRARYITEMCONTROLLER_H

@class NSString, NSArray, UISwipeActionsConfiguration, UIViewController;

#import <Foundation/Foundation.h>

#import "LibraryConfiguration.h"
#import "LibrarySectionController.h"

@interface LibraryItemController : NSObject

@property (readonly, copy, nonatomic) NSString *accessibilityIdentifier; // ivar: _accessibilityIdentifier
@property (readonly, copy, nonatomic) NSArray *accessories;
@property (readonly, nonatomic) LibraryConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSArray *dragItems;
@property (readonly, nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly, nonatomic) BOOL hasSubitems;
@property (readonly, nonatomic) BOOL isHidden; // ivar: _isHidden
@property (readonly, nonatomic) BOOL isSelected; // ivar: _isSelected
@property (readonly, nonatomic) BOOL isSpringLoaded;
@property (readonly, weak) LibrarySectionController *sectionController; // ivar: _sectionController
@property (readonly, nonatomic) BOOL selectionFollowsFocus;
@property (readonly, nonatomic) BOOL shouldPersistSelection;
@property (readonly, nonatomic) NSArray *subitems;
@property (retain, nonatomic) UISwipeActionsConfiguration *swipeActionsConfiguration; // ivar: _swipeActionsConfiguration
@property (readonly, nonatomic) UIViewController *viewController;


-(NSInteger)dropIntentForSession:(id)arg0 ;
-(NSUInteger)dropOperationForSession:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 sectionController:(id)arg1 ;
-(void)contentDidChange;
-(void)didDeselectItem;
-(void)didSelectItem;
-(void)performDropWithProposal:(id)arg0 session:(id)arg1 ;
-(void)updateListContentConfiguration:(id)arg0 ;
-(void)updateToolbarIfNeeded;
-(void)willToggleExpansionState;


@end


#endif