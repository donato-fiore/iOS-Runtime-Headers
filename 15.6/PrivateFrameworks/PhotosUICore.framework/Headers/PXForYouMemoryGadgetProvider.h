// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFORYOUMEMORYGADGETPROVIDER_H
#define PXFORYOUMEMORYGADGETPROVIDER_H

@class NSDate, NSString;
@protocol PXSectionedDataSourceManagerObserver, PXForYouRankable, PXMemoryForYouDataSourceManager;


#import "PXGadgetProvider.h"

@interface PXForYouMemoryGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver, PXForYouRankable>



@property (retain, nonatomic) NSDate *cachedPriorityDate; // ivar: _cachedPriorityDate
@property (readonly, nonatomic) NSObject<PXMemoryForYouDataSourceManager> *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSInteger defaultPriority;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *priorityDate;
@property (readonly, nonatomic) NSInteger priorityType;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsGadgets; // ivar: _wantsGadgets


+(NSUInteger)maxMemoriesToFetch;
-(BOOL)supportsDynamicRanking;
-(NSUInteger)estimatedNumberOfGadgets;
-(void)_invalidateWantsGadget;
-(void)_updateWantsGadget;
-(void)generateGadgets;
-(void)loadDataForGadgets;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif