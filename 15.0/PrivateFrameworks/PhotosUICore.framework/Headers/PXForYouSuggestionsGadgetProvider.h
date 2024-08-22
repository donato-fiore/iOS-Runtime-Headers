// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFORYOUSUGGESTIONSGADGETPROVIDER_H
#define PXFORYOUSUGGESTIONSGADGETPROVIDER_H

@class NSMapTable, NSString, NSArray;
@protocol PXSectionedDataSourceManagerObserver;


#import "PXGadgetProvider.h"
#import "PXSuggestionsDataSource.h"
#import "PXSuggestionsDataSourceManager.h"
#import "PXAssetsDataSourceManager.h"
#import "PXAssetReference.h"

@interface PXForYouSuggestionsGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver>

 {
    BOOL _hasGeneratedGadgets;
    NSMapTable *_keyAssetFetchesBySuggestion;
}


@property (readonly, nonatomic) PXSuggestionsDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) PXSuggestionsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (retain, nonatomic) NSArray *oneUpAssets; // ivar: _oneUpAssets
@property (retain, nonatomic) PXAssetsDataSourceManager *oneUpDataSourceManager; // ivar: _oneUpDataSourceManager
@property (retain, nonatomic) PXAssetReference *oneUpInitialAssetReference; // ivar: _oneUpInitialAssetReference
@property (readonly) Class superclass;


-(NSUInteger)estimatedNumberOfGadgets;
-(id)_gadgetForAssetReference:(id)arg0 ;
-(id)init;
-(id)initWithDataSourceManager:(id)arg0 localizedTitle:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)keyAssetForSuggestion:(id)arg0 ;
-(void)configureGadget:(id)arg0 ;
-(void)gadget:(id)arg0 didChange:(NSUInteger)arg1 ;
-(void)generateGadgets;
-(void)loadDataForGadgets;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)presentOneUpForSuggestion:(id)arg0 withMediaProvider:(id)arg1 animated:(BOOL)arg2 ;
-(void)suggestionGadgetsWantsOneUpPresentation:(id)arg0 withMediaProvider:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif