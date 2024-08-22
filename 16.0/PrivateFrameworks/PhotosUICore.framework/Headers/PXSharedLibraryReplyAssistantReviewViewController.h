// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYREPLYASSISTANTREVIEWVIEWCONTROLLER_H
#define PXSHAREDLIBRARYREPLYASSISTANTREVIEWVIEWCONTROLLER_H

@class OBWelcomeController, NSString, OBBoldTrayButton;
@protocol PXChangeObserver, PXAssistantViewController, PXAssistantViewControllerDelegate;


#import "PXSharedLibraryAssistantViewModel.h"

@interface PXSharedLibraryReplyAssistantReviewViewController : OBWelcomeController <PXChangeObserver, PXAssistantViewController>



@property (weak, nonatomic) NSObject<PXAssistantViewControllerDelegate> *assistantViewControllerDelegate; // ivar: assistantViewControllerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) OBBoldTrayButton *movePhotosButton; // ivar: _movePhotosButton
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel; // ivar: _viewModel


-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)initWithViewModel:(id)arg0 ;
-(void)_setIsProcessing:(BOOL)arg0 ;
-(void)_updateHeaderText;
-(void)_updateIcon;
-(void)acceptInvitation;
-(void)moveButtonTapped:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif