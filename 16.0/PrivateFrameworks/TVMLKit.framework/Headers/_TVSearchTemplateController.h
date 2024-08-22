// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVSEARCHTEMPLATECONTROLLER_H
#define _TVSEARCHTEMPLATECONTROLLER_H

@class TVBgImageLoadingViewController, IKTextFieldElement, IKAppKeyboard, IKViewElement, UISearchController, UIView, UIActivityIndicatorView, NSString;
@protocol UISearchResultsUpdating, UISearchBarDelegate, IKAppKeyboardDelegate, _TVStackCollectionViewControllerDelegate, TVAppTemplateImpressionable;


#import "_TVStackCollectionViewController.h"

@interface _TVSearchTemplateController : TVBgImageLoadingViewController <UISearchResultsUpdating, UISearchBarDelegate, IKAppKeyboardDelegate, _TVStackCollectionViewControllerDelegate, TVAppTemplateImpressionable>

 {
    IKTextFieldElement *_searchFieldElement;
    IKAppKeyboard *_ikKeyboard;
    IKViewElement *_collectionListElement;
    CGFloat _impressionThreshold;
    IKViewElement *_nonResultsElement;
    UISearchController *_searchController;
    _TVStackCollectionViewController *_resultsViewController;
    UIView *_nonResultsView;
    CGRect _keyboardFrame;
    UIActivityIndicatorView *_spinner;
    UIView *_originalSearchFieldRightView;
    NSInteger _originalSearchFieldRightViewMode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) IKViewElement *viewElement; // ivar: _viewElement


-(BOOL)_isAtWordEnd;
-(BOOL)_searchBarContainsFocus;
-(id)_sanitizedText;
-(id)collectionView;
-(id)impressionableElementsContainedInDocument:(id)arg0 ;
-(id)init;
-(void)_cancelImpressionsUpdate;
-(void)_keyboardDidChangeFrame:(id)arg0 ;
-(void)_recordImpressionsForVisibleView;
-(void)_scrollToTopAnimated:(BOOL)arg0 ;
-(void)_setNonResultsView:(id)arg0 ;
-(void)_updateImpressions;
-(void)_updateKeyboardText;
-(void)_updateSearchFieldText;
-(void)dealloc;
-(void)loadView;
-(void)stackCollectionViewController:(id)arg0 scrollViewDidScroll:(id)arg1 ;
-(void)textDidChangeForKeyboard:(id)arg0 ;
-(void)updateNavigationItem:(id)arg0 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)updateWithViewElement:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif