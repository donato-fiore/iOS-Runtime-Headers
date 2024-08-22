// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSAMPLESUGGESTIONPROVIDER_H
#define PXSAMPLESUGGESTIONPROVIDER_H

@class NSArray, NSString;
@protocol PXOneUpPresentationDelegate;


#import "PXGadgetProvider.h"
#import "PXUIMediaProvider.h"
#import "PXAssetsDataSourceManager.h"
#import "PXAssetReference.h"

@interface PXSampleSuggestionProvider : PXGadgetProvider <PXOneUpPresentationDelegate>

 {
    PXUIMediaProvider *_mediaProvider;
}


@property (retain, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeHorizontal; // ivar: _includeHorizontal
@property (retain, nonatomic) PXAssetsDataSourceManager *oneUpDataSourceManager; // ivar: _oneUpDataSourceManager
@property (retain, nonatomic) PXAssetReference *oneUpInitialAssetReference; // ivar: _oneUpInitialAssetReference
@property (retain, nonatomic) NSArray *suggestions; // ivar: _suggestions
@property (readonly) Class superclass;


-(NSInteger)oneUpPresentationActionContext:(id)arg0 ;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(NSUInteger)estimatedNumberOfGadgets;
-(id)_fetchHistoricImage;
-(id)_fetchOptionsForHistoricImage;
-(id)_fetchOptionsForPlaybackStyle:(NSInteger)arg0 ;
-(id)_fetchSingleAnimatedImage;
-(id)_fetchSingleAssetWithVariation:(unsigned short)arg0 ;
-(id)_fetchSingleImage;
-(id)_fetchSingleLivePhotoAssetWithVariation:(unsigned short)arg0 ;
-(id)_fetchSingleLoopingVideo;
-(id)_fetchSinglePortraitImage;
-(id)_fetchSingleVideo;
-(id)_gadgetForAssetReference:(id)arg0 ;
-(id)_lastYearsDate;
-(id)init;
-(id)initWithHorizontalGadget:(BOOL)arg0 ;
-(id)oneUpPresentation:(id)arg0 regionOfInterestForAssetReference:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg0 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg0 ;
-(id)oneUpPresentationMediaProvider:(id)arg0 ;
-(id)suggestionGadgetPreviewController:(id)arg0 withMediaProvider:(id)arg1 ;
-(void)_prepareForOneUpPresentationForGadget:(id)arg0 ;
-(void)gadget:(id)arg0 didChange:(NSUInteger)arg1 ;
-(void)generateGadgets;
-(void)loadDataForGadgets;
-(void)oneUpPresentation:(id)arg0 scrollAssetReferenceToVisible:(id)arg1 ;
-(void)oneUpPresentation:(id)arg0 setHiddenAssetReferences:(id)arg1 ;
-(void)suggestionGadget:(id)arg0 commitViewController:(id)arg1 ;
-(void)suggestionGadget:(id)arg0 willDismissPreviewController:(id)arg1 ;
-(void)suggestionGadgetsWantsOneUpPresentation:(id)arg0 withMediaProvider:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif