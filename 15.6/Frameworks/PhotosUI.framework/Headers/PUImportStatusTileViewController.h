// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUIMPORTSTATUSTILEVIEWCONTROLLER_H
#define PUIMPORTSTATUSTILEVIEWCONTROLLER_H

@class UIView, UIActivityIndicatorView, NSString;
@protocol PUAssetViewModelChangeObserver;


#import "PUTileViewController.h"
#import "PUAssetViewModel.h"

@interface PUImportStatusTileViewController : PUTileViewController <PUAssetViewModelChangeObserver>

 {
    ? _updateFlags;
    UIView *_successView;
    UIView *_errorView;
    UIActivityIndicatorView *_progressIndicatorView;
}


@property (nonatomic) BOOL _isPerformingChanges; // ivar: __isPerformingChanges
@property (retain, nonatomic) PUAssetViewModel *assetViewModel; // ivar: _assetViewModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_updateIfNeeded;
-(void)_updateStatusView;
-(void)applyLayoutInfo:(id)arg0 ;
-(void)becomeReusable;
-(void)performChanges:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif