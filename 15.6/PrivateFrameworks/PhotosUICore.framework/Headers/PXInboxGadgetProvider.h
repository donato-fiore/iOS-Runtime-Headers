// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXINBOXGADGETPROVIDER_H
#define PXINBOXGADGETPROVIDER_H

@class NSString;
@protocol PXChangeObserver, PXSectionedDataSourceManagerObserver;


#import "PXGadgetProvider.h"
#import "PXInboxAggregateDataSourceManager.h"

@interface PXInboxGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver>



@property (readonly, nonatomic) PXInboxAggregateDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)estimatedNumberOfGadgets;
-(id)initWithDataSourceManager:(id)arg0 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_lastExitedForYouDateDidChange:(id)arg0 ;
-(void)_updateDataSourceRangesOfCurrentGadgets;
-(void)_updateGadgets;
-(void)_updateLastSeenDateOfCurrentGadgets;
-(void)generateGadgets;
-(void)loadDataForGadgets;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif