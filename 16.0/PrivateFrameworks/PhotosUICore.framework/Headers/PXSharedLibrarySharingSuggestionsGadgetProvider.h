// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYSHARINGSUGGESTIONSGADGETPROVIDER_H
#define PXSHAREDLIBRARYSHARINGSUGGESTIONSGADGETPROVIDER_H

@class NSString, NSDate;
@protocol PXSectionedDataSourceManagerObserver, PXForYouRankable;


#import "PXGadgetProvider.h"
#import "PXSharedLibrarySharingSuggestionsCountsManager.h"
#import "PXSharedLibrarySharingSuggestionsDataSourceManager.h"
#import "PXFeedGadget.h"
#import "PXLibraryFilterState.h"

@interface PXSharedLibrarySharingSuggestionsGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver, PXForYouRankable>



@property (readonly, nonatomic) PXSharedLibrarySharingSuggestionsCountsManager *countsManager; // ivar: _countsManager
@property (readonly, nonatomic) PXSharedLibrarySharingSuggestionsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXFeedGadget *feedGadget; // ivar: _feedGadget
@property (readonly, nonatomic) NSInteger forYouContentIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState; // ivar: _libraryFilterState
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsGadgets; // ivar: _wantsGadgets


-(NSUInteger)estimatedNumberOfGadgets;
-(NSUInteger)gadgetType;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_commonInit;
-(void)_invalidateWantsGadget;
-(void)_updateWantsGadget;
-(void)generateGadgets;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif