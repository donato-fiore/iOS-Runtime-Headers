// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUCOMMENTSVIEWCONTROLLER_H
#define PUCOMMENTSVIEWCONTROLLER_H

@class UIViewController, UITableView, NSString;
@protocol PUCommentsTableDataControllerDelegate, PUAssetViewModelChangeObserver, PXChangeObserver, PUAccessoryContentViewController, PUAccessoryContentViewControllerDelegate;


#import "PUCommentsTableDataController.h"
#import "PUAssetViewModel.h"

@interface PUCommentsViewController : UIViewController <PUCommentsTableDataControllerDelegate, PUAssetViewModelChangeObserver, PXChangeObserver, PUAccessoryContentViewController>



@property (nonatomic, setter=_setNeedsUpdateTableViewScrollPosition:) BOOL _needsUpdateTableViewScrollPosition; // ivar: __needsUpdateTableViewScrollPosition
@property (readonly, nonatomic) PUCommentsTableDataController *_tableDataController; // ivar: __tableDataController
@property (readonly, nonatomic) UITableView *_tableView; // ivar: __tableView
@property (weak, nonatomic) NSObject<PUAccessoryContentViewControllerDelegate> *accessoryContentViewControllerDelegate; // ivar: _accessoryContentViewControllerDelegate
@property (readonly, nonatomic) PUAssetViewModel *assetViewModel; // ivar: _assetViewModel
@property (readonly, nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize minimumContentSize;
@property (readonly) Class superclass;


+(BOOL)canShowCommentsForAsset:(id)arg0 ;
-(BOOL)contentAreaContainsPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)initWithAssetViewModel:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGRect )contentBoundsInCoordinateSpace:(id)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)_updateTableDataController;
-(void)commentsTableDataController:(id)arg0 didChangeEditing:(BOOL)arg1 ;
-(void)commentsTableDataController:(id)arg0 presentViewController:(id)arg1 ;
-(void)commentsTableDataController:(id)arg0 tableViewDidScroll:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif