// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSEARCHHOMEGADGETDATASOURCEMANAGER_H
#define PUSEARCHHOMEGADGETDATASOURCEMANAGER_H

@class PXGadgetDataSourceManager, NSArray, NSString, PXTapToRadarGadgetProvider;
@protocol PUSearchZeroKeywordChangeDelegate;


#import "PUSearchZeroKeywordDataSource.h"

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
@property (readonly, nonatomic) PUSearchZeroKeywordDataSource *zeroKeywordDataSource; // ivar: _zeroKeywordDataSource
@property (retain, nonatomic) NSArray *zeroKeywordGadgetProviders; // ivar: _zeroKeywordGadgetProviders


-(id)gadgetProviders;
-(id)hiddenGadgetProviders;
-(id)init;
-(void)_waitForFirstDisplayTimedOut;
-(void)didUpdateSections:(id)arg0 ;
-(void)ppt_prepareZeroKeywordRequest:(id)arg0 ;
-(void)refreshData;


@end


#endif