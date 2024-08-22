// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFORYOUMEMORYGADGETPROVIDER_H
#define PXFORYOUMEMORYGADGETPROVIDER_H

@class NSString, NSDate;
@protocol PXSectionedDataSourceManagerObserver, PXForYouRankable, PXMemoryForYouDataSourceManager;


#import "PXGadgetProvider.h"

@interface PXForYouMemoryGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver, PXForYouRankable>



@property (readonly, nonatomic) NSObject<PXMemoryForYouDataSourceManager> *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger forYouContentIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsGadgets; // ivar: _wantsGadgets


+(NSUInteger)maxMemoriesToFetch;
-(NSUInteger)estimatedNumberOfGadgets;
-(NSUInteger)gadgetType;
-(void)_invalidateWantsGadget;
-(void)_updateWantsGadget;
-(void)generateGadgets;
-(void)loadDataForGadgets;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif