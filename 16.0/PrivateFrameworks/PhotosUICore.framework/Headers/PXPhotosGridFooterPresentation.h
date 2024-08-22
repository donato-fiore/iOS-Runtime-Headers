// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSGRIDFOOTERPRESENTATION_H
#define PXPHOTOSGRIDFOOTERPRESENTATION_H

@class NSTimer, NSString;
@protocol PXChangeObserver, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver, PXPhotosGridFooterPresentationDelegate;

#import <Foundation/Foundation.h>

#import "PXPhotosViewModel.h"
#import "PXGView.h"
#import "PXPhotosLayout.h"
#import "PXPhotosGlobalFooterView.h"

@interface PXPhotosGridFooterPresentation : NSObject <PXChangeObserver, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver>

 {
    PXPhotosViewModel *_viewModel;
    PXGView *_gridView;
    PXPhotosLayout *_layout;
    BOOL _hasAppearedOnce;
    BOOL _hasReachedInitialPosition;
    PXPhotosGlobalFooterView *_reusableFooterView;
    CGFloat _lastUserScrollTime;
    BOOL _didAutoReveal;
    NSTimer *_autoRevealMinimumIdleTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXPhotosGridFooterPresentationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldAutoReveal; // ivar: _shouldAutoReveal
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsFooter; // ivar: _wantsFooter


-(CGFloat)_footerVisibleAmountIncludingSafeAreaInsets:(BOOL)arg0 ;
-(id)init;
-(id)initWithViewModel:(id)arg0 gridView:(id)arg1 layout:(id)arg2 ;
-(void)_conditionallyAutoRevealFooterView;
-(void)_conditionallyAutoRevealFooterViewWithLastUserScrollTime:(CGFloat)arg0 ;
-(void)_updateFooterView;
-(void)_updateWantsFooter;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photosGlobalFooterView:(id)arg0 presentViewController:(id)arg1 ;
-(void)photosGlobalFooterViewDidChangeHeight:(id)arg0 ;
-(void)scrollViewControllerContentBoundsDidChange:(id)arg0 ;
-(void)scrollViewControllerWillBeginScrolling:(id)arg0 ;
-(void)viewDidAppear;
-(void)viewDidScrollToInitialPosition;
-(void)viewWillAppear;


@end


#endif