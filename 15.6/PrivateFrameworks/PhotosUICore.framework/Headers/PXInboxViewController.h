// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXINBOXVIEWCONTROLLER_H
#define PXINBOXVIEWCONTROLLER_H

@class UIViewController, NSString, NSDate, UITableView;
@protocol UITableViewDelegate, UITableViewDataSource, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXOneUpPresentationDelegate, PXGadget, PXGadgetDelegate, PXNavigableForYouViewController, PXInboxModel;


#import "PXInboxTableViewCellLayoutCoordinator.h"
#import "PXInboxAggregateDataSource.h"
#import "PXInboxAggregateDataSourceManager.h"
#import "PXGadgetSpec.h"
#import "PXPhotoKitUIMediaProvider.h"

@interface PXInboxViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXOneUpPresentationDelegate, PXGadget>



@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType; // ivar: _accessoryButtonType
@property (retain, nonatomic) PXInboxTableViewCellLayoutCoordinator *cellLayoutCoordinator; // ivar: _cellLayoutCoordinator
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) CGFloat currentRowHeight; // ivar: _currentRowHeight
@property (retain, nonatomic) PXInboxAggregateDataSource *dataSource; // ivar: _dataSource
@property (nonatomic) _NSRange dataSourceIndexRange; // ivar: _dataSourceIndexRange
@property (retain, nonatomic) PXInboxAggregateDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PXNavigableForYouViewController> *forYouNavigationDelegate; // ivar: _forYouNavigationDelegate
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (retain, nonatomic) NSDate *lastSeenDate; // ivar: _lastSeenDate
@property (retain, nonatomic) NSObject<PXInboxModel> *lastSelectedModel; // ivar: _lastSelectedModel
@property (readonly, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible
@property (nonatomic) CGRect visibleContentRect; // ivar: _visibleContentRect


+(id)createInboxDataSourceManager;
+(void)preloadResources;
-(BOOL)_isModelUnseen:(id)arg0 ;
-(BOOL)_shouldHandleAllIndexes;
-(CGFloat)_dividerHeight;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_numberOfRows;
-(id)_createDividerView;
-(id)_createTransparentFullWidthViewOfHeight:(CGFloat)arg0 ;
-(id)_tableViewIndexPathFromDataSourceIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)contentViewController;
-(id)init;
-(id)initWithDataSourceManager:(id)arg0 ;
-(id)oneUpPresentation:(id)arg0 regionOfInterestForAssetReference:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg0 ;
-(id)oneUpPresentationMediaProvider:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct PXSimpleIndexPath )_dataSourceIndexPathFromTableViewIndexPath:(id)arg0 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_dismissDetailViewsIfNeededWithPreviousDataSource:(id)arg0 ;
-(void)_startOneUpPresentationForModel:(id)arg0 ;
-(void)_updateSeenState;
-(void)_updateTableViewFrameAndBounds;
-(void)gadgetControllerHasAppeared;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)oneUpPresentation:(id)arg0 setHiddenAssetReferences:(id)arg1 ;
-(void)ppt_performBlockAfterLoadingCompletes:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif