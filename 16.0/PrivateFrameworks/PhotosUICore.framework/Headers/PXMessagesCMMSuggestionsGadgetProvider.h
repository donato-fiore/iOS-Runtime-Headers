// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMESSAGESCMMSUGGESTIONSGADGETPROVIDER_H
#define PXMESSAGESCMMSUGGESTIONSGADGETPROVIDER_H

@class NSArray, NSString;
@protocol PXSectionedDataSourceManagerObserver, PXMessagesCMMSuggestionGadgetActionDelegate;


#import "PXGadgetProvider.h"
#import "PXCMMSuggestionsDataSource.h"
#import "PXMessagesExtensionViewModel.h"
#import "PXCMMSuggestionsDataSourceManager.h"

@interface PXMessagesCMMSuggestionsGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver, PXMessagesCMMSuggestionGadgetActionDelegate>

 {
    PXCMMSuggestionsDataSource *_dataSource;
    BOOL _didGenerateGadgets;
    PXMessagesExtensionViewModel *_viewModel;
    NSArray *_suggestionGadgets;
}


@property (nonatomic) CGFloat contentHeightAdjustment; // ivar: _contentHeightAdjustment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXCMMSuggestionsDataSourceManager *suggestionsDataSourceManager; // ivar: _suggestionsDataSourceManager
@property (readonly) Class superclass;


+(id)new;
-(NSUInteger)estimatedNumberOfGadgets;
-(id)_createSuggestionGadgetWithSuggestion:(id)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithViewModel:(id)arg0 suggestionsDataSourceManager:(id)arg1 ;
-(void)_setDataSource:(id)arg0 changes:(id)arg1 ;
-(void)_updateNoContentGadgetIfNeeded;
-(void)didSelectSuggestionGadget:(id)arg0 ;
-(void)generateGadgets;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif