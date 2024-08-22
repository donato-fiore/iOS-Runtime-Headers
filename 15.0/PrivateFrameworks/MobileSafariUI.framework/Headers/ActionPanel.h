// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACTIONPANEL_H
#define ACTIONPANEL_H

@class SFActivityViewController;
@protocol AddBookmarkActivityDelegate, ActionPanelDelegate;


#import "ReloadActivity.h"
#import "TabDocument.h"

@interface ActionPanel : SFActivityViewController {
    id<AddBookmarkActivityDelegate> *_activityDelegate;
    ReloadActivity *_reloadActivity;
    NSInteger _menuStyle;
}


@property (weak, nonatomic) NSObject<ActionPanelDelegate> *delegate;
@property (readonly, nonatomic) TabDocument *tabDocument; // ivar: _tabDocument


+(id)createActivityItemProviderCollectionForTabDocument:(id)arg0 ;
-(BOOL)isContentObscuredByDigitalHealthForCustomizationController:(id)arg0 ;
-(BOOL)isDisplayingQuickLookDocumentForCustomizationController:(id)arg0 ;
-(BOOL)isReaderAvailableForCustomizationController:(id)arg0 ;
-(BOOL)isShowingReaderForCustomizationController:(id)arg0 ;
-(id)downloadsViewController;
-(id)excludedActivityTypes;
-(id)initWithTabDocument:(id)arg0 activityDelegate:(id)arg1 preferredSharingStyle:(NSInteger)arg2 menuStyle:(NSInteger)arg3 ;
-(id)webViewForCustomizationController:(id)arg0 ;
-(void)_executeActivity;
-(void)_performActivity:(id)arg0 ;
-(void)_prepareActivity:(id)arg0 completion:(id)arg1 ;
-(void)_prepareMail:(id)arg0 completion:(id)arg1 ;
-(void)_preparePostToSocialNetwork:(id)arg0 ;
-(void)_reload;
-(void)activityDidComplete:(id)arg0 withReturnedItems:(id)arg1 success:(BOOL)arg2 ;
-(void)setSharingURL:(id)arg0 ;
-(void)updateReloadActivity;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif