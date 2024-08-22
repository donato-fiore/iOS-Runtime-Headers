// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSURVEYQUESTIONSGADGETPROVIDER_H
#define PXSURVEYQUESTIONSGADGETPROVIDER_H

@class PHPhotoLibrary, NSString, NSDate, NSArray;
@protocol PXSurveyQuestionGadgetDelegate, PXSurveyQuestionCongratulationsGadgetDelegate, PXOneUpPresentationDelegate, PXPhotoLibraryUIChangeObserver, PXSurveyQuestionsGadgetProviderDelegate, PXGadgetTransition, PXGadgetDelegate;


#import "PXGadgetProvider.h"
#import "PXPhotoKitUIMediaProvider.h"
#import "PXAssetsDataSourceManager.h"
#import "PXAssetReference.h"
#import "PXSurveyQuestionsDataSource.h"
#import "PXGadgetNavigationHelper.h"

@interface PXSurveyQuestionsGadgetProvider : PXGadgetProvider <PXSurveyQuestionGadgetDelegate, PXSurveyQuestionCongratulationsGadgetDelegate, PXOneUpPresentationDelegate, PXPhotoLibraryUIChangeObserver>

 {
    PXPhotoKitUIMediaProvider *_oneUpMediaProvider;
    PXAssetsDataSourceManager *_oneUpDataSourceManager;
    PXAssetReference *_oneUpInitialAssetReference;
    PHPhotoLibrary *_photoLibrary;
}


@property (nonatomic) BOOL currentlyLoadingMoreQuestions; // ivar: _currentlyLoadingMoreQuestions
@property (readonly, nonatomic) PXSurveyQuestionsDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PXSurveyQuestionsGadgetProviderDelegate> *gadgetProviderDelegate; // ivar: _gadgetProviderDelegate
@property (readonly, nonatomic) NSObject<PXGadgetTransition> *gadgetTransition;
@property (readonly, nonatomic) NSUInteger gadgetType; // ivar: _gadgetType
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *nextGadgetResponder;
@property (retain, nonatomic) NSDate *previousMostRecentQuestionCreationDate; // ivar: _previousMostRecentQuestionCreationDate
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *surveyGadgets; // ivar: _surveyGadgets


-(BOOL)_prepareForOneUpPresentationForGadget:(id)arg0 ;
-(NSInteger)oneUpPresentationActionContext:(id)arg0 ;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(NSUInteger)estimatedNumberOfGadgets;
-(id)_gadgetForSurveyQuestion:(id)arg0 ;
-(id)_targetGadgetForCurrentOneUpPresentation;
-(id)init;
-(id)initWithDataSource:(id)arg0 gadgetType:(NSUInteger)arg1 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)oneUpPresentation:(id)arg0 currentImageForAssetReference:(id)arg1 ;
-(id)oneUpPresentation:(id)arg0 regionOfInterestForAssetReference:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg0 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg0 ;
-(id)oneUpPresentationMediaProvider:(id)arg0 ;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(void)_addCongratulationsGadgetWithCompletionHandlerIfNeeded:(id)arg0 ;
-(void)_generateGadgetsWithLimit:(NSUInteger)arg0 ;
-(void)_generateGadgetsWithLimit:(NSUInteger)arg0 removeExistingGadgets:(BOOL)arg1 ;
-(void)_handlePrepareForOneUpPresentationSuccessForGadget:(id)arg0 ;
-(void)_reloadGadgetsWithLimit:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)didAnswerQuestionForGadget:(id)arg0 ;
-(void)didSelectActionButtonForType:(NSUInteger)arg0 ;
-(void)generateGadgets;
-(void)loadDataForGadgets;
-(void)oneUpPresentation:(id)arg0 setHiddenAssetReferences:(id)arg1 ;
-(void)pauseLibraryUpdates;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 withPreparedInfo:(id)arg1 ;
-(void)resumeLibraryUpdates;
-(void)showViewController:(id)arg0 fromGadget:(id)arg1 ;
-(void)surveyQuestionGadgetsWantsOneUpPresentation:(id)arg0 ;


@end


#endif