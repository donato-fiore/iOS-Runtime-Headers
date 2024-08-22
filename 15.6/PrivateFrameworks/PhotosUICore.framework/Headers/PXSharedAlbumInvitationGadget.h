// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSHAREDALBUMINVITATIONGADGET_H
#define PXSHAREDALBUMINVITATIONGADGET_H

@class UIViewController, NSString;
@protocol PXSharedAlbumInvitationViewDelegate, PXSettingsKeyObserver, PXGadget, PXGadgetDelegate;


#import "PXGadgetSpec.h"
#import "PXSharedAlbumHeaderView.h"
#import "PXFeedInvitationSectionInfo.h"
#import "PXSharedAlbumInvitationView.h"

@interface PXSharedAlbumInvitationGadget : UIViewController <PXSharedAlbumInvitationViewDelegate, PXSettingsKeyObserver, PXGadget>



@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (retain, nonatomic) PXSharedAlbumHeaderView *headerView; // ivar: _headerView
@property (retain, nonatomic) PXFeedInvitationSectionInfo *invitationSectionInfo; // ivar: _invitationSectionInfo
@property (retain, nonatomic) PXSharedAlbumInvitationView *invitationView; // ivar: _invitationView
@property (nonatomic) BOOL loadedContentData; // ivar: _loadedContentData
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleContentRect;


+(void)preloadResources;
-(id)contentViewController;
-(id)init;
-(id)uniqueGadgetIdentifier;
-(struct CGSize )_performLayoutInRect:(struct CGRect )arg0 updateSubviewFrames:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_attemptToNavigateToSharedAlbum:(id)arg0 hostingViewController:(id)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_updateInvitationView;
-(void)dealloc;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)sharedAlbumInvitationView:(id)arg0 didAccept:(BOOL)arg1 ;
-(void)sharedAlbumInvitationView:(id)arg0 presentViewController:(id)arg1 ;
-(void)sharedAlbumInvitationViewDidReportAsJunk:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif