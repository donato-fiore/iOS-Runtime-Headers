// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUREVIEWSCREENSCRUBBERBARTILEVIEWCONTROLLER_H
#define PUREVIEWSCREENSCRUBBERBARTILEVIEWCONTROLLER_H

@class NSString;
@protocol PXChangeObserver, PUBrowsingViewModelChangeObserver;


#import "PUTileViewController.h"
#import "PUReviewScreenScrubberBar.h"
#import "PUReviewScreenBarsModel.h"
#import "PUBrowsingViewModel.h"

@interface PUReviewScreenScrubberBarTileViewController : PUTileViewController <PXChangeObserver, PUBrowsingViewModelChangeObserver>



@property (retain, nonatomic, setter=_setScrubberBar:) PUReviewScreenScrubberBar *_scrubberBar; // ivar: __scrubberBar
@property (retain, nonatomic) PUReviewScreenBarsModel *barsModel; // ivar: _barsModel
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // ivar: _browsingViewModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)loadView;
-(void)_updateViews;
-(void)_updateVisibilityAnimated:(BOOL)arg0 ;
-(void)becomeReusable;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif