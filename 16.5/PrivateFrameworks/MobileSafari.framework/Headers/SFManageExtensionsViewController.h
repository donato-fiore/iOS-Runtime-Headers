// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFMANAGEEXTENSIONSVIEWCONTROLLER_H
#define SFMANAGEEXTENSIONSVIEWCONTROLLER_H

@class UITableViewController, NSArray, UISearchBar, NSString, _SFPageFormatMenuController;
@protocol WBSExtensionsControllerObserver, UISearchBarDelegate, _SFBrowserDocument;



@interface SFManageExtensionsViewController : UITableViewController <WBSExtensionsControllerObserver, UISearchBarDelegate>

 {
    id<_SFBrowserDocument> *_browserDocument;
    NSArray *_extensions;
    UISearchBar *_searchBar;
    NSString *_userTypedQuery;
    CGFloat _indentationWidthOfCell;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) _SFPageFormatMenuController *presentingPageFormatMenu; // ivar: _presentingPageFormatMenu
@property (readonly) Class superclass;


-(BOOL)safari_prefersHalfHeightSheetPresentationWithLoweredBar;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initFromPageFormatMenu:(id)arg0 activeDocument:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_enableExtensionPromptingForNewTabOverrideIfNecessary:(id)arg0 ;
-(void)_enableExtensionWithNewTabOverridePage:(id)arg0 ;
-(void)_extensionStateWasToggled:(id)arg0 ;
-(void)_reload;
-(void)_setExtensionStateForExtension:(id)arg0 isOn:(BOOL)arg1 ;
-(void)_updateLastViewedDate;
-(void)dealloc;
-(void)extensionsControllerExtensionListDidChange:(id)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif