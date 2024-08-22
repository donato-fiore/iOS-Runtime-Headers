// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMSUGGESTIONSGADGETPROVIDER_H
#define PXCMMSUGGESTIONSGADGETPROVIDER_H

@class NSString;
@protocol PXChangeObserver, PXSectionedDataSourceManagerObserver, PXCMMWorkflowPresenting;


#import "PXGadgetProvider.h"
#import "PXCMMSuggestionsDataSource.h"
#import "PXCMMSuggestionsDataSourceManager.h"

@interface PXCMMSuggestionsGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver>

 {
    PXCMMSuggestionsDataSource *_dataSource;
    BOOL _didGenerateGadgets;
}


@property (readonly, nonatomic) PXCMMSuggestionsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PXCMMWorkflowPresenting> *workflowPresenter; // ivar: _workflowPresenter


-(NSUInteger)estimatedNumberOfGadgets;
-(id)_newGadgetForSuggestion:(id)arg0 ;
-(id)init;
-(id)initWithDataSourceManager:(id)arg0 workflowPresenter:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_setDataSource:(id)arg0 changes:(id)arg1 ;
-(void)generateGadgets;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif