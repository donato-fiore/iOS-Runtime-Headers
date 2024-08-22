// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFORYOUMEMORIESVIEWCONTROLLER_H
#define PXFORYOUMEMORIESVIEWCONTROLLER_H

@class NSString;
@protocol PXUserInterfaceFeatureViewController, PXScrollViewControllerObserver, PXUIViewControllerZoomTransitionEndPoint, PXForYouMemoriesViewControllerDelegate;


#import "PXMemoriesUIViewController.h"
#import "PXFeedBasedMemoriesDataSourceManager.h"

@interface PXForYouMemoriesViewController : PXMemoriesUIViewController <PXUserInterfaceFeatureViewController, PXScrollViewControllerObserver, PXUIViewControllerZoomTransitionEndPoint>



@property (readonly, nonatomic) PXFeedBasedMemoriesDataSourceManager *dataSourceManager;
@property (nonatomic) _NSRange dataSourceRange; // ivar: _dataSourceRange
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXForYouMemoriesViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;
@property (nonatomic) NSUInteger rowType; // ivar: _rowType
@property (readonly, nonatomic) BOOL shouldHandleEntireDataSource; // ivar: _shouldHandleEntireDataSource
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger userInterfaceFeature;


-(BOOL)tryToNavigateToDetailsOfMemoryWithUUID:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(id)createNewLayoutGenerator;
-(id)initWithDataSourceManager:(id)arg0 ;
-(void)_alignToNearestGadget;
-(void)_scrollMemoryReferenceToVisible:(id)arg0 animated:(BOOL)arg1 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)scrollViewControllerWillEndScrolling:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif