// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYASSISTANTCONTEXT_H
#define PXSHAREDLIBRARYASSISTANTCONTEXT_H

@class NSString, NSMutableDictionary;
@protocol PXChangeObserver, PXAssistantContext, PXSharedLibrary;

#import <Foundation/Foundation.h>

#import "PXSharedLibraryFaceTileImageProvider.h"
#import "PXSharedLibraryAssistantViewModel.h"

@interface PXSharedLibraryAssistantContext : NSObject <PXChangeObserver, PXAssistantContext>

 {
    PXSharedLibraryFaceTileImageProvider *_faceTileImageProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXSharedLibrary> *sharedLibrary; // ivar: _sharedLibrary
@property (readonly, nonatomic) NSMutableDictionary *stepContextIdentifiersToContexts; // ivar: _stepContextIdentifiersToContexts
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel; // ivar: _viewModel


+(id)_reviewContextIdentifierForMode:(NSInteger)arg0 hasPreview:(BOOL)arg1 ;
+(id)replyAssistantContextWithSharedLibrary:(id)arg0 ;
+(id)setupAssistantContextWithSharedLibrary:(id)arg0 sourceLibraryInfo:(id)arg1 ;
-(BOOL)shouldConfirmCancellationOfAssistantForStepContextWithIdentifier:(id)arg0 ;
-(id)_cameraStepContextWithIdentifier:(id)arg0 ;
-(id)_dateSelectionStepContextWithIdentifier:(id)arg0 ;
-(id)_firstVisibleStepContextIdentifierIgnoringPreview:(BOOL)arg0 ;
-(id)_howToStepContextWithIdentifier:(id)arg0 ;
-(id)_initWithSharedLibrary:(id)arg0 sourceLibraryInfo:(id)arg1 mode:(NSInteger)arg2 ;
-(id)_nextContextIdentifierForSelectedPolicy:(NSInteger)arg0 ;
-(id)_nextStepContextIdentifierFromStepContextIdentifier:(id)arg0 ;
-(id)_participantsStepContextWithIdentifier:(id)arg0 ;
-(id)_peopleSelectionStepContextWithIdentifier:(id)arg0 ;
-(id)_replyIntroStepContextWithIdentifier:(id)arg0 ;
-(id)_reviewParticipantsSetupDirectStepContextWithIdentifier:(id)arg0 ;
-(id)_reviewParticipantsSetupPreviewStepContextWithIdentifier:(id)arg0 ;
-(id)_reviewParticipantsSetupStepContextWithIdentifier:(id)arg0 ;
-(id)_reviewReplyDirectStepContextWithIdentifier:(id)arg0 ;
-(id)_reviewReplyPreviewStepContextWithIdentifier:(id)arg0 ;
-(id)_reviewReplyStepContextWithIdentifier:(id)arg0 ;
-(id)_rulesStepContextWithIdentifier:(id)arg0 ;
-(id)_setupIntroStepContextWithIdentifier:(id)arg0 ;
-(id)_summaryStepContextWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initialStepContextIdentifiers;
-(id)nextStepContextIdentifierFromStepContextIdentifier:(id)arg0 ;
-(id)sharedLibraryStepContextForStepContextIdentifier:(id)arg0 ;
-(id)stepContextForStepContextIdentifier:(id)arg0 ;
-(void)_updateCombinedImage;
-(void)_updateParticipantsInFaceTile;
-(void)configureParticipantListForStepContext:(id)arg0 isReviewStep:(BOOL)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)setAssistantTraitCollection:(id)arg0 ;
-(void)stepContextWithIdentifier:(id)arg0 confirmCancellationWithAlertProperties:(id)arg1 ;
-(void)willCancelAssistant;


@end


#endif