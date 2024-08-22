// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFORYOUGADGETVIEWCONTROLLER_H
#define PXFORYOUGADGETVIEWCONTROLLER_H

@class NSString;
@protocol PXSettingsKeyObserver, PXPreferencesObserver, PXNavigableSharedAlbumActivityFeedHostViewController;


#import "PXGadgetUIViewController.h"
#import "PXForYouBadgeManager.h"

@interface PXForYouGadgetViewController : PXGadgetUIViewController <PXSettingsKeyObserver, PXPreferencesObserver, PXNavigableSharedAlbumActivityFeedHostViewController>



@property (retain, nonatomic) PXForYouBadgeManager *badgeManager; // ivar: _badgeManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL featuredContentAllowed; // ivar: _featuredContentAllowed
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL rootGadgetControllerHasAppearedOnce; // ivar: _rootGadgetControllerHasAppearedOnce
@property (nonatomic) BOOL sharedLibrarySuggestionsAllowed; // ivar: _sharedLibrarySuggestionsAllowed
@property (readonly) Class superclass;


+(id)lastExitedDateAccessor;
+(id)lastExitedForYouDate;
+(void)setLastExitedForYouDate:(id)arg0 ;
-(BOOL)canBecomeFirstResponder;
-(NSInteger)scrollAnimationIdentifier;
-(NSUInteger)_gadgetTypeForDestinationType:(NSInteger)arg0 ;
-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)_suggestionDumpURL;
-(id)initWithBadgeManager:(id)arg0 ;
-(id)px_navigationDestination;
-(void)_handleTapToRadar;
-(void)_reloadContentDueToSettingsChangeWithDelay;
-(void)_updateNavigationBarItems;
-(void)_userDidViewForYouContent;
-(void)configureSectionHeader:(id)arg0 ;
-(void)gadget:(id)arg0 didChange:(NSUInteger)arg1 ;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
// -(void)navigateToSharedAlbumActivityFeedAnimated:(BOOL)arg0 configuration:(id)arg1 completion:(unk)arg2  ;
-(void)navigationHelperDidNotFindValidGadget:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)ppt_navigateToContentSyndicationGridViewControllerWithCompleteHandler:(id)arg0 ;
-(void)ppt_navigateToFirstInvitationCMM:(BOOL)arg0 withCompleteHandler:(id)arg1 ;
-(void)ppt_navigateToFirstSuggestedCMMAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)ppt_navigateToFirstSuggestedCMMComposeRecipientViewAfterOneSecondWithCompleteHandler:(id)arg0 ;
// -(void)ppt_navigateToLatestMemoryWithWillPresentHandler:(id)arg0 completionHandler:(unk)arg1  ;
-(void)preferencesDidChange;
-(void)reloadContent;
-(void)rootGadgetControllerDidDisappear;
-(void)rootGadgetControllerWillAppear;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif