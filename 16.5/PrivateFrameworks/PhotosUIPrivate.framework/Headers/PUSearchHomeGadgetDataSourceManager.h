// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUSEARCHHOMEGADGETDATASOURCEMANAGER_H
#define PUSEARCHHOMEGADGETDATASOURCEMANAGER_H

@class PXGadgetDataSourceManager, NSArray, NSString, PXTapToRadarGadgetProvider, PXSearchZeroKeywordDataSource;
@protocol PUSearchZeroKeywordChangeDelegate;



@interface PUSearchHomeGadgetDataSourceManager : PXGadgetDataSourceManager <PUSearchZeroKeywordChangeDelegate>

 {
    NSArray *_gadgetProviders;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger filteringState; // ivar: _filteringState
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isExpectedToLoadNonEmptyDataSourceSoon;
@property (readonly) Class superclass;
@property (retain, nonatomic) PXTapToRadarGadgetProvider *tapToRadarProvider; // ivar: _tapToRadarProvider
@property (readonly, nonatomic) PXSearchZeroKeywordDataSource *zeroKeywordDataSource; // ivar: _zeroKeywordDataSource
@property (retain, nonatomic) NSArray *zeroKeywordGadgetProviders; // ivar: _zeroKeywordGadgetProviders
@property (copy, nonatomic) id *zeroKeywordSectionsUpdateHandler; // ivar: _zeroKeywordSectionsUpdateHandler


-(id)gadgetProviders;
-(id)hiddenGadgetProviders;
-(id)init;
-(id)zeroKeywordSections;
-(void)_waitForFirstDisplayTimedOut;
-(void)didUpdateSections:(id)arg0 ;
-(void)ppt_prepareZeroKeywordRequest:(id)arg0 ;
-(void)refreshData;


@end


#endif