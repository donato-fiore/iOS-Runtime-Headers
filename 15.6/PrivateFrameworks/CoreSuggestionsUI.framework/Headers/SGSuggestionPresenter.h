// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGSUGGESTIONPRESENTER_H
#define SGSUGGESTIONPRESENTER_H

@class UIView<SGBannerProtocol>, UIViewController, NSMutableArray, NSString, NSArray;
@protocol UIPopoverPresentationControllerDelegate, SGSuggestionDelegate, SGSuggestionPresenterDelegate;

#import <Foundation/Foundation.h>

#import "SGSuggestionAction.h"
#import "SGSuggestionStore.h"

@interface SGSuggestionPresenter : NSObject <UIPopoverPresentationControllerDelegate, SGSuggestionDelegate>

 {
    UIView<SGBannerProtocol> *_banner;
    SGSuggestionAction *_bannerPrimaryAction;
    SGSuggestionAction *_bannerDismissAction;
    UIViewController *_presentedViewController;
    SGSuggestionStore *_suggestionStore;
    NSMutableArray *_filteredSuggestions;
}


@property (readonly, nonatomic) UIView<SGBannerProtocol> *banner;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SGSuggestionPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *suggestions;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsToShowBanner; // ivar: _wantsToShowBanner


+(id)formatList:(id)arg0 ;
-(BOOL)presentationControllerShouldDismiss:(id)arg0 ;
-(id)_presentedControllerCancelButtonItem;
-(id)_presentedControllerDoneButtonItem;
-(id)_presentingViewController;
-(id)_sortSuggestionByCategoryUsing:(id)arg0 ;
-(id)_viewControllerForPresentingFromBanner;
-(id)formatMixedCategoriesSubtitle:(id)arg0 ;
-(id)formatMixedCategoriesTitle:(id)arg0 ;
-(id)init;
-(id)suggestionStore;
-(id)tableViewController;
-(void)_dismissPresentedViewController:(id)arg0 ;
-(void)_dismissViewControllerAnimated:(BOOL)arg0 ;
-(void)_filterSuggestions;
-(void)_listDidChangeNotification:(id)arg0 ;
-(void)_presentModalViewController:(id)arg0 fromSourceView:(id)arg1 ;
-(void)_presentModalViewControllerFromButton:(id)arg0 ;
-(void)_removeBanner;
-(void)_restoreSuggestions;
-(void)_updateBanner;
-(void)addSuggestion:(id)arg0 ;
-(void)dealloc;
-(void)dismissViewController:(id)arg0 ;
-(void)presentViewController:(id)arg0 ;
-(void)presentationController:(id)arg0 willPresentWithAdaptiveStyle:(NSInteger)arg1 transitionCoordinator:(id)arg2 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)reloadSuggestionsFromSearchableItems;
-(void)removeSuggestion:(id)arg0 ;
-(void)suggestion:(id)arg0 actionFinished:(BOOL)arg1 ;
-(void)suggestionWasUpdated:(id)arg0 ;


@end


#endif