// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUREVIEWSCREENTOPBARTILEVIEWCONTROLLER_H
#define PUREVIEWSCREENTOPBARTILEVIEWCONTROLLER_H

@class NSString;
@protocol PXChangeObserver, PUBrowsingViewModelChangeObserver;


#import "PUTileViewController.h"
#import "PUReviewScreenTopBar.h"
#import "PUReviewScreenBarsModel.h"
#import "PUBrowsingViewModel.h"

@interface PUReviewScreenTopBarTileViewController : PUTileViewController <PXChangeObserver, PUBrowsingViewModelChangeObserver>



@property (retain, nonatomic, setter=_setTopBar:) PUReviewScreenTopBar *_topBar; // ivar: __topBar
@property (retain, nonatomic) PUReviewScreenBarsModel *barsModel; // ivar: _barsModel
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // ivar: _browsingViewModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)loadView;
-(void)_handleDoneButtonTapped:(id)arg0 ;
-(void)_handleRetakeButtonTapped:(id)arg0 ;
-(void)_updateBarLayout;
-(void)_updateControls;
-(void)_updateVisibilityAnimated:(BOOL)arg0 ;
-(void)becomeReusable;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif