// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCMMINVITATIONGADGET_H
#define PXCMMINVITATIONGADGET_H

@class NSString, NSManagedObjectID;
@protocol PXChangeObserver, PXCMMInvitationViewDelegate, PXGadget, PXCMMInvitation, PXGadgetDelegate, PXCMMInvitationGadgetDelegate, PXCMMWorkflowPresenting;

#import <Foundation/Foundation.h>

#import "PXCMMInvitationViewModel.h"
#import "PXCMMInvitationView.h"
#import "PXGadgetSpec.h"
#import "PXMomentShareStatusPresentation.h"

@interface PXCMMInvitationGadget : NSObject <PXChangeObserver, PXCMMInvitationViewDelegate, PXGadget>

 {
    id<PXCMMInvitation> *_invitation;
    BOOL _didLoadInvitation;
    PXCMMInvitationViewModel *_invitationViewModel;
    PXCMMInvitationView *_invitationView;
    CGSize _requestedPosterImageSize;
    CGFloat _requestedWidth;
    BOOL _didRequestCachingOfPosterImage;
}


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
@property (retain, nonatomic) NSObject<PXCMMInvitation> *invitation;
@property (weak, nonatomic) NSObject<PXCMMInvitationGadgetDelegate> *invitationGadgetDelegate; // ivar: _invitationGadgetDelegate
@property (readonly, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) PXMomentShareStatusPresentation *momentShareStatusPresentation; // ivar: _momentShareStatusPresentation
@property (retain, nonatomic) NSManagedObjectID *objectID; // ivar: _objectID
@property (nonatomic) NSInteger priority;
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleContentRect;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;
@property (readonly, nonatomic) NSObject<PXCMMWorkflowPresenting> *workflowPresenter; // ivar: _workflowPresenter


+(id)_imageRequestOptions;
+(id)sharedUserInitiatedQueue;
-(BOOL)supportsHighlighting;
-(id)init;
-(id)initWithWorkflowPresenter:(id)arg0 ;
-(id)previewViewControllerAtLocation:(struct CGPoint )arg0 fromSourceView:(id)arg1 ;
-(id)targetPreviewViewForLocation:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)uniqueGadgetIdentifier;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_cachePosterImageWithWidth:(CGFloat)arg0 ;
-(void)_clearPosterImageCache;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_lastExitedForYouDateDidChange:(id)arg0 ;
-(void)_loadInvitationIfNecessary;
-(void)_presentDetailViewAnimated:(BOOL)arg0 ;
-(void)_registerMomentShareStatusPresentation;
-(void)_updateExpirationTitle:(id)arg0 ;
-(void)_updateStatusString:(id)arg0 ;
-(void)_updateTitle:(id)arg0 ;
-(void)commitPreviewViewController:(id)arg0 ;
-(void)contentHasBeenSeen;
-(void)invitationViewSizeThatFitsDidChange:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prefetchDuringScrollingForWidth:(CGFloat)arg0 ;
-(void)prepareCollectionViewItem:(id)arg0 ;
-(void)presentDetailViewAnimated:(BOOL)arg0 ;
-(void)presentDetailViewForInvitationView:(id)arg0 animated:(BOOL)arg1 ;
-(void)userDidSelectGadget;


@end


#endif