// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSTRUCTUREDPAGEVIEWCONTROLLER_H
#define SUSTRUCTUREDPAGEVIEWCONTROLLER_H

@class UILabel, NSString, NSNumber;
@protocol SUTermsAndConditionsViewDelegate, ISURLOperationDelegate;


#import "SUItemTableViewController.h"
#import "SUStructuredPage.h"

@interface SUStructuredPageViewController : SUItemTableViewController <SUTermsAndConditionsViewDelegate, ISURLOperationDelegate>

 {
    UILabel *_noItemsLabel;
}


@property (retain, nonatomic) Class dataSourceClass; // ivar: _dataSourceClass
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (retain, nonatomic) SUStructuredPage *structuredPage; // ivar: _structuredPage
@property (readonly) Class superclass;


-(BOOL)_gotoURLForItem:(id)arg0 withURLIndex:(NSInteger)arg1 ;
-(BOOL)_handleLoadMoreForIndexPath:(id)arg0 ;
-(BOOL)canSelectRowAtIndexPath:(id)arg0 ;
-(BOOL)handleSelectionForIndexPath:(id)arg0 tapCount:(NSInteger)arg1 ;
-(BOOL)hasDisplayableContent;
-(BOOL)loadMoreWithURL:(id)arg0 ;
-(id)init;
-(id)newDataSource;
-(id)newNoItemsOverlayLabel;
-(id)newTermsAndConditionsFooter;
-(id)storePageProtocol;
-(id)viewControllerForPresentingAccountAlertControllerFromTermsAndConditionsView:(id)arg0 ;
-(struct CGRect )documentBounds;
-(void)_loadMoreOperation:(id)arg0 finishedWithOutput:(id)arg1 ;
-(void)_loadMoreWithURL:(id)arg0 ;
-(void)_reloadLoadMoreCellAtIndexPath:(id)arg0 ;
-(void)_reloadNoItemsLabel;
-(void)_reloadTermsAndConditions;
-(void)bannerCell:(id)arg0 tappedButtonAtIndex:(NSInteger)arg1 ;
-(void)dealloc;
-(void)operation:(id)arg0 failedWithError:(id)arg1 ;
-(void)operation:(id)arg0 finishedWithOutput:(id)arg1 ;
-(void)reloadData;
-(void)reloadWithStorePage:(id)arg0 forURL:(id)arg1 ;
-(void)setSkLoading:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif