// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCONTENTSYNDICATIONGADGETPROVIDER_H
#define PXCONTENTSYNDICATIONGADGETPROVIDER_H

@class NSString;
@protocol PXCollectionsDataSourceManagerObserver, PXContentSyndicationGadgetDelegate, PXOneUpPresentationDelegate, PXGadgetTransition, PXGadgetDelegate;


#import "PXGadgetProvider.h"
#import "PXAssetReference.h"
#import "PXAssetsDataSourceManager.h"
#import "PXContentSyndicationDataSource.h"
#import "PXContentSyndicationDataSourceManager.h"
#import "PXGadgetNavigationHelper.h"

@interface PXContentSyndicationGadgetProvider : PXGadgetProvider <PXCollectionsDataSourceManagerObserver, PXContentSyndicationGadgetDelegate, PXOneUpPresentationDelegate>

 {
    PXAssetReference *_oneUpInitialAssetReference;
    PXAssetsDataSourceManager *_oneUpDataSourceManager;
}


@property (readonly, nonatomic) PXContentSyndicationDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) PXContentSyndicationDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didGenerateGadgets; // ivar: _didGenerateGadgets
@property (readonly, nonatomic) NSObject<PXGadgetTransition> *gadgetTransition;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *nextGadgetResponder;
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property (readonly) Class superclass;


-(BOOL)oneUpPresentationWantsShowInLibraryButton:(id)arg0 ;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(NSUInteger)estimatedNumberOfGadgets;
-(id)_gadgetForAssetReference:(id)arg0 ;
-(id)_newGadgetForContentSyndicationItem:(id)arg0 ;
-(id)countsControllerForContentSyndicationGadget:(id)arg0 ;
-(id)init;
-(id)initWithDataSourceManager:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)oneUpPresentation:(id)arg0 regionOfInterestForAssetReference:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg0 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg0 ;
-(id)oneUpPresentationMediaProvider:(id)arg0 ;
-(void)contentSyndicationGadget:(id)arg0 presentOneUpAnimated:(BOOL)arg1 asset:(id)arg2 ;
-(void)generateGadgets;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)oneUpPresentation:(id)arg0 scrollAssetReferenceToVisible:(id)arg1 ;
-(void)oneUpPresentation:(id)arg0 setHiddenAssetReferences:(id)arg1 ;


@end


#endif