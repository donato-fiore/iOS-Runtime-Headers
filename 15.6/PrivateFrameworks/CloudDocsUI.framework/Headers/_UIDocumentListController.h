// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDOCUMENTLISTCONTROLLER_H
#define _UIDOCUMENTLISTCONTROLLER_H

@class UIViewController, NSArray, NSString, NSURL;
@protocol _UIDocumentPickerServiceViewController, UIViewControllerRestoration, _UIDocumentListControllerDelegate;


#import "_UIDocumentPickerContainerViewController.h"
#import "_UIDocumentSearchListController.h"
#import "_UIDocumentListController.h"

@interface _UIDocumentListController : UIViewController <_UIDocumentPickerServiceViewController, UIViewControllerRestoration>

 {
    _UIDocumentPickerContainerViewController *_containerViewController;
    int _sortOrderIfNotDeferred;
    NSInteger _displayModeIfNotDeferred;
    NSInteger _availableActionsIfNotDeferred;
    id<_UIDocumentListControllerDelegate> *_delegateIfNotDeferred;
    _UIDocumentSearchListController *_searchController;
    CGPoint _stateRestoredContentOffset;
}


@property (nonatomic) NSInteger availableActions;
@property (readonly, nonatomic) NSArray *containedItems;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIDocumentListControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editing; // ivar: _editing
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideSearchField; // ivar: _hideSearchField
@property (readonly, nonatomic) NSURL *presentedURL;
@property (weak, nonatomic) _UIDocumentListController *rootListController; // ivar: _rootListController
@property (retain, nonatomic) NSArray *selectedItems;
@property (readonly) Class superclass;


+(id)_listControllerHierarchyForURL:(id)arg0 withConstructorBlock:(id)arg1 ;
+(id)listControllerHierarchyForURL:(id)arg0 ;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg0 coder:(id)arg1 ;
-(BOOL)shouldHighlightItem:(id)arg0 ;
-(BOOL)shouldSelectItem:(id)arg0 ;
-(BOOL)shouldShowAction:(NSInteger)arg0 ;
-(Class)_classForChildren;
-(NSInteger)displayMode;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModel:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)model;
-(id)previewViewControllerForItem:(id)arg0 ;
-(int)sortOrder;
-(void)_commonInitWithModel:(id)arg0 ;
-(void)_performScrollTest:(id)arg0 iterations:(int)arg1 delta:(int)arg2 listMode:(NSInteger)arg3 ;
-(void)_setContainerViewController:(id)arg0 ;
-(void)_updateScrollPositionForStateRestoration;
-(void)createSearchControllerWithModel:(id)arg0 ;
-(void)decodeRestorableStateWithCoder:(id)arg0 ;
-(void)didHighlightItem:(id)arg0 ;
-(void)didSelectItem:(id)arg0 ;
-(void)didUnhighlightItem:(id)arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)itemsOrSelectionDidChange:(BOOL)arg0 ;
-(void)performAction:(NSInteger)arg0 item:(id)arg1 view:(id)arg2 completion:(id)arg3 ;
-(void)setDisplayMode:(NSInteger)arg0 ;
-(void)setSortOrder:(int)arg0 ;
-(void)startSearchWithQueryString:(id)arg0 becomeFirstResponder:(BOOL)arg1 ;
-(void)updateTitle;


@end


#endif