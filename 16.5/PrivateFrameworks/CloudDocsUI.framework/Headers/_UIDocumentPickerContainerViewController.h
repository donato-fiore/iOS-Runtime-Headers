// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDOCUMENTPICKERCONTAINERVIEWCONTROLLER_H
#define _UIDOCUMENTPICKERCONTAINERVIEWCONTROLLER_H

@class UIViewController, UIViewController<_UIDocumentPickerContainedViewController>, NSString, NSArray;
@protocol UISearchControllerDelegate, _UIDocumentPickerServiceViewController;


#import "_UIDocumentPickerContainerModel.h"
#import "_UIDocumentSearchListController.h"
#import "_UIDocumentPickerSearchPaletteView.h"
#import "_UIDocumentPickerSortOrderView.h"

@interface _UIDocumentPickerContainerViewController : UIViewController <UISearchControllerDelegate>



@property (retain, nonatomic) UIViewController<_UIDocumentPickerContainedViewController> *childViewController; // ivar: _childViewController
@property (nonatomic) CGPoint contentOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger explicitDisplayMode; // ivar: _explicitDisplayMode
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *indexPathsForSelectedItems;
@property (retain, nonatomic) _UIDocumentPickerContainerModel *model; // ivar: _model
@property (retain, nonatomic) _UIDocumentSearchListController *resultsController; // ivar: _resultsController
@property (retain, nonatomic) _UIDocumentPickerSearchPaletteView *searchView; // ivar: _searchView
@property (weak, nonatomic) NSObject<_UIDocumentPickerServiceViewController> *serviceViewController; // ivar: _serviceViewController
@property (retain, nonatomic) _UIDocumentPickerSortOrderView *sortView; // ivar: _sortView
@property (readonly) Class superclass;


+(id)userDefaults;
-(BOOL)isEditing;
-(NSInteger)defaultDisplayMode;
-(NSInteger)displayMode;
-(id)initWithModel:(id)arg0 ;
-(int)sortOrder;
-(void)_sortOrderViewChanged:(id)arg0 ;
-(void)_startSearchWithQueryString:(id)arg0 becomeFirstResponder:(BOOL)arg1 ;
-(void)_updateTraitCollection;
-(void)dealloc;
-(void)displayModeChanged;
-(void)ensureChildViewController;
-(void)invalidate;
-(void)setDefaultDisplayMode:(NSInteger)arg0 ;
-(void)setEditing:(BOOL)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSortOrder:(int)arg0 ;
-(void)setupSearchController;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif