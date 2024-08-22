// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSGRIDSHAREDALBUMOPTIONSACTIONPERFORMER_H
#define PXPHOTOSGRIDSHAREDALBUMOPTIONSACTIONPERFORMER_H

@class NSString;
@protocol PXAlbumStreamingOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate;


#import "PXPhotosGridActionPerformer.h"
#import "PXAlbumStreamingOptionsViewController.h"

@interface PXPhotosGridSharedAlbumOptionsActionPerformer : PXPhotosGridActionPerformer <PXAlbumStreamingOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate>

 {
    PXAlbumStreamingOptionsViewController *_presentedOptionsController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canPerformActionType:(id)arg0 withViewModel:(id)arg1 ;
-(BOOL)_shouldDismissOptionsForReason:(int)arg0 ;
-(BOOL)_shouldRequestGridDismissalForReason:(int)arg0 ;
-(id)activitySystemImageName;
-(id)activityType;
-(id)localizedTitleForUseCase:(NSUInteger)arg0 ;
-(void)albumStreamingOptionsViewController:(id)arg0 didCompleteWithReason:(int)arg1 ;
-(void)performUserInteractionTask;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)presentationController:(id)arg0 willPresentWithAdaptiveStyle:(NSInteger)arg1 transitionCoordinator:(id)arg2 ;


@end


#endif