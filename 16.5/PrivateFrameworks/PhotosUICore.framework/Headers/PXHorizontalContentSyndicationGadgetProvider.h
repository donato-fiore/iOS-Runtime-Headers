// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXHORIZONTALCONTENTSYNDICATIONGADGETPROVIDER_H
#define PXHORIZONTALCONTENTSYNDICATIONGADGETPROVIDER_H

@class NSString, NSDate;
@protocol PXCollectionsDataSourceManagerObserver, PXChangeObserver, PXForYouRankable;


#import "PXGadgetProvider.h"
#import "PXContentSyndicationDataSourceManager.h"

@interface PXHorizontalContentSyndicationGadgetProvider : PXGadgetProvider <PXCollectionsDataSourceManagerObserver, PXChangeObserver, PXForYouRankable>



@property (readonly, nonatomic) PXContentSyndicationDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didGenerateGadgets; // ivar: _didGenerateGadgets
@property (readonly, nonatomic) NSInteger forYouContentIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly) Class superclass;


-(NSUInteger)estimatedNumberOfGadgets;
-(id)init;
-(void)_configureDataSourceManager;
-(void)_configureDataSourceManagerIfNecessary;
-(void)_presentSeeAllViewControllerForGadget:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateGadgets;
-(void)generateGadgets;
-(void)loadDataForGadgets;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)ppt_presentSeeAllViewController;


@end


#endif