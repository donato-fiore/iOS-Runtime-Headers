// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXNAVIGATIONLISTCONTROLLER_H
#define PXNAVIGATIONLISTCONTROLLER_H

@class UIViewController, UIFont, NSMutableDictionary, UITableViewCell, UIImage, NSDate, NSMutableSet, NSString, NSUserActivity, UITableView;
@protocol UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, UITableViewDropDelegate, PXAssetCollectionActionPerformerDelegate, PXNavigationListDataSectionManagerObserver;


#import "PXNavigationListDataSection.h"
#import "PXNavigationListDataSectionManager.h"

@interface PXNavigationListController : UIViewController <UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, UITableViewDropDelegate, PXAssetCollectionActionPerformerDelegate, PXNavigationListDataSectionManagerObserver>

 {
    PXNavigationListDataSection *_dataSection;
    UIFont *_textLabelFont;
    UIFont *_detailTextLabelFont;
    NSMutableDictionary *_rowHeightCache;
    CGFloat _layoutWidth;
    CGFloat _currentContentHeight;
    UITableViewCell *_measuringCell;
    UIImage *_measuringImage;
    NSDate *_firstPreloadCacheStartTime;
    NSMutableSet *_queuedCacheKeys;
    NSMutableDictionary *_cachedSymbolAttributedStrings;
}


@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, nonatomic) PXNavigationListDataSectionManager *dataSectionManager; // ivar: _dataSectionManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUserActivity *siriActionActivity; // ivar: _siriActionActivity
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


+(id)_rowHeightCachingQueue;
+(id)navigateToListItem:(id)arg0 sourceViewController:(id)arg1 existingAssetsFetchResult:(id)arg2 animated:(BOOL)arg3 completion:(id)arg4 ;
+(id)viewControllerLog;
-(BOOL)_skipPreloadTaskIfNecessary;
-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canHandleDropSession:(id)arg1 ;
-(CGFloat)_contentHeightForCellWithWidth:(CGFloat)arg0 listItem:(id)arg1 ;
-(CGFloat)_contentHeightForWidth:(CGFloat)arg0 dataSection:(id)arg1 ;
-(CGFloat)_insetWidth;
-(CGFloat)contentHeightForWidth:(CGFloat)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_assetCollectionAtIndexPath:(id)arg0 ;
-(id)_detailTextLabelFont;
-(id)_navigateTolistItem:(id)arg0 animated:(BOOL)arg1 ;
-(id)_textLabelFont;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataSectionManager:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)secondaryAttributedTextForGlyphName:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)undoManagerForActionPerformer:(id)arg0 ;
-(void)_configureCell:(id)arg0 forListItem:(id)arg1 textColor:(id)arg2 ;
-(void)_finishedAllPreloadTasks;
-(void)_preferredContentSizeChanged:(id)arg0 ;
-(void)_preloadRowHeightCache;
-(void)_preloadRowHeightsForAllValidItems;
-(void)_reportContentHeightDidChangeIfNecessary;
-(void)_resetCachedHeight;
-(void)_resetCachedMeasuringCell;
-(void)_resetFonts;
-(void)_tableView:(id)arg0 updateCellSeparatorStyle:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)_updateDataSection;
-(void)contentHeightDidChange;
-(void)loadView;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;


@end


#endif