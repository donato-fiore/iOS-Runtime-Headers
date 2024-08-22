// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFORYOURECENTINTERESTSUGGESTIONSGADGETPROVIDER_H
#define PXFORYOURECENTINTERESTSUGGESTIONSGADGETPROVIDER_H

@class NSString;
@protocol PXOneUpPresentationDelegate, PXActionPerformerDelegate, PXSuggestLessPeopleHelperDelegate;


#import "PXForYouSuggestionsGadgetProvider.h"
#import "PXUIMediaProvider.h"
#import "PXForYouSuggestionAssetsDataSourceManager.h"
#import "PXAssetReference.h"
#import "PXSuggestLessPeopleHelper.h"

@interface PXForYouRecentInterestSuggestionsGadgetProvider : PXForYouSuggestionsGadgetProvider <PXOneUpPresentationDelegate, PXActionPerformerDelegate, PXSuggestLessPeopleHelperDelegate>

 {
    PXUIMediaProvider *_oneUpMediaProvider;
    PXForYouSuggestionAssetsDataSourceManager *_oneUpDataSourceManager;
    PXAssetReference *_oneUpInitialAssetReference;
    PXSuggestLessPeopleHelper *_suggestLessPeopleHelper;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_dismissViewController:(id)arg0 completion:(id)arg1 ;
-(BOOL)_prepareForOneUpPresentationForSuggestion:(id)arg0 mediaProvider:(id)arg1 ;
-(BOOL)_presentViewController:(id)arg0 ;
-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)oneUpPresentationWantsShowInLibraryButton:(id)arg0 ;
-(BOOL)suggestLessPeopleHelper:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)suggestLessPeopleHelper:(id)arg0 presentViewController:(id)arg1 ;
-(NSInteger)oneUpPresentationActionContext:(id)arg0 ;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(id)init;
-(id)oneUpPresentation:(id)arg0 currentImageForAssetReference:(id)arg1 ;
-(id)oneUpPresentation:(id)arg0 regionOfInterestForAssetReference:(id)arg1 ;
-(id)oneUpPresentationActionManagerForPreviewing:(id)arg0 ;
-(id)oneUpPresentationDataSourceManager:(id)arg0 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg0 ;
-(id)oneUpPresentationMediaProvider:(id)arg0 ;
-(id)suggestionGadgetPreviewController:(id)arg0 withMediaProvider:(id)arg1 ;
-(void)_addTTRActionIntoPreview:(id)arg0 forGadget:(id)arg1 ;
-(void)_fileRadarForSuggestion:(id)arg0 ;
-(void)_insertRemoveSuggestionActionIntoPreview:(id)arg0 forGadget:(id)arg1 ;
-(void)_insertSuggestLessPersonActionIntoPreview:(id)arg0 forGadget:(id)arg1 ;
-(void)_insertSyndicationReplyIntoPreview:(id)arg0 forGadget:(id)arg1 ;
-(void)_performSuggestLessPersonActionIntoPreview:(id)arg0 forGadget:(id)arg1 ;
-(void)configureGadget:(id)arg0 ;
-(void)oneUpPresentation:(id)arg0 scrollAssetReferenceToVisible:(id)arg1 ;
-(void)oneUpPresentation:(id)arg0 setHiddenAssetReferences:(id)arg1 ;
-(void)presentOneUpForSuggestion:(id)arg0 withMediaProvider:(id)arg1 animated:(BOOL)arg2 ;
-(void)suggestionGadget:(id)arg0 commitViewController:(id)arg1 ;
-(void)suggestionGadget:(id)arg0 didDismissPreviewController:(id)arg1 committing:(BOOL)arg2 ;


@end


#endif