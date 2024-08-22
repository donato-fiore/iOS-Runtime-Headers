// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDOCUMENTTARGETSELECTIONCONTROLLER_H
#define _UIDOCUMENTTARGETSELECTIONCONTROLLER_H

@class UIViewController, UINavigationController, _UINavigationControllerPalette, UIImageView, UILabel, NSString, NSArray;
@protocol _UIDocumentPickerServiceViewController, _UIDocumentPickerServiceInvalidating, _UIDocumentTargetSelectionControllerDelegate;


#import "_UIDocumentPickerContainerViewController.h"

@interface _UIDocumentTargetSelectionController : UIViewController <_UIDocumentPickerServiceViewController, _UIDocumentPickerServiceInvalidating>

 {
    id<_UIDocumentTargetSelectionControllerDelegate> *_weak_delegate;
    _UIDocumentPickerContainerViewController *_containerViewController;
    UINavigationController *_containedNavigationController;
    _UINavigationControllerPalette *_palette;
    UIImageView *_iconView;
    UILabel *_filesLabel;
    NSString *_containerName;
    id *_firstFileThumbnailObservation;
    NSUInteger _targetSelectionType;
    BOOL _completedInitialDisplay;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIDocumentTargetSelectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *itemsToMove; // ivar: _itemsToMove
@property (readonly) Class superclass;


+(id)_loadDocumentIconForURL:(id)arg0 size:(struct CGSize )arg1 ;
+(id)_loadThumbnailForURL:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 wantsBorder:(*BOOL)arg3 generatedThumbnail:(*BOOL)arg4 ;
-(NSInteger)displayMode;
-(NSUInteger)pickerMode;
-(id)initForCopyWithItems:(id)arg0 ;
-(id)initForCrossContainerMoveWithItemsToMove:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemsToMove:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)navControllerForPalette;
-(id)pickableTypes;
-(int)sortOrder;
-(void)_commonInitItems:(id)arg0 crossContainer:(BOOL)arg1 sourceContainer:(id)arg2 ;
-(void)_setContainerViewController:(id)arg0 ;
-(void)_setIconViewImage:(id)arg0 border:(BOOL)arg1 ;
-(void)_setupNavigationItem;
-(void)_setupPalette;
-(void)_updatePalette;
-(void)didSelectItem:(id)arg0 ;
-(void)dismiss:(id)arg0 ;
-(void)invalidate;
-(void)setDisplayMode:(NSInteger)arg0 ;
-(void)setSortOrder:(int)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif