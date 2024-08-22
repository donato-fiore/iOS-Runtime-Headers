// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUREVIEWSCREENCONTROLBARTILEVIEWCONTROLLER_H
#define PUREVIEWSCREENCONTROLBARTILEVIEWCONTROLLER_H

@class NSString;
@protocol PXChangeObserver, PUBrowsingViewModelChangeObserver;


#import "PUTileViewController.h"
#import "PUReviewScreenControlBar.h"
#import "PUReviewScreenBarsModel.h"
#import "PUBrowsingViewModel.h"

@interface PUReviewScreenControlBarTileViewController : PUTileViewController <PXChangeObserver, PUBrowsingViewModelChangeObserver>



@property (retain, nonatomic, setter=_setControlBar:) PUReviewScreenControlBar *_controlBar; // ivar: __controlBar
@property (retain, nonatomic) PUReviewScreenBarsModel *barsModel; // ivar: _barsModel
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // ivar: _browsingViewModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_barControlsForModelControls:(id)arg0 transitioning:(BOOL)arg1 ;
-(id)loadView;
-(void)_handleEditButtonTapped:(id)arg0 ;
-(void)_handleFunEffectsButtonTapped:(id)arg0 ;
-(void)_handleMarkupButtonTapped:(id)arg0 ;
-(void)_handleSendButtonTapped:(id)arg0 ;
-(void)_updateBarLayout;
-(void)_updateControls;
-(void)_updateVisibilityAnimated:(BOOL)arg0 ;
-(void)becomeReusable;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif