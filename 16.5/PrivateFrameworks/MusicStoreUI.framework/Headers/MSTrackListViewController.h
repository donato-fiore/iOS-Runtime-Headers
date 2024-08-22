// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSTRACKLISTVIEWCONTROLLER_H
#define MSTRACKLISTVIEWCONTROLLER_H

@class NSString;
@protocol MSTrackListHeaderDelegate;


#import "MSStructuredPageViewController.h"
#import "MSTrackListHeaderView.h"

@interface MSTrackListViewController : MSStructuredPageViewController <MSTrackListHeaderDelegate>

 {
    MSTrackListHeaderView *_headerView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_headerArtworkImage;
-(id)_headerArtworkItemImage;
-(id)_newImageDataProvider;
-(id)_newPlaceholderImage;
-(id)init;
-(id)newTermsAndConditionsFooter;
-(id)purchasableItemsForHeaderView:(id)arg0 ;
-(void)_delayedReloadForWebViews;
-(void)_reloadFooterView;
-(void)_reloadHeaderView;
-(void)_restrictionsChangedNotification:(id)arg0 ;
-(void)_webViewsLoaded:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)operation:(id)arg0 finishedWithOutput:(id)arg1 ;
-(void)reloadData;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif