// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUBROWSINGBACKGROUNDTILEVIEWCONTROLLER_H
#define PUBROWSINGBACKGROUNDTILEVIEWCONTROLLER_H

@class UIVisualEffectView, _UIContentUnavailableView, UIColor, NSString, UIVisualEffect;
@protocol PUBrowsingViewModelChangeObserver;


#import "PUTileViewController.h"
#import "PUBrowsingViewModel.h"

@interface PUBrowsingBackgroundTileViewController : PUTileViewController <PUBrowsingViewModelChangeObserver>



@property (retain, nonatomic, setter=_setBackgroundBlurView:) UIVisualEffectView *_backgroundBlurView; // ivar: __backgroundBlurView
@property (nonatomic, setter=_setEmptyPlaceholderFrame:) CGRect _emptyPlaceholderFrame; // ivar: __emptyPlaceholderFrame
@property (retain, nonatomic, setter=_setEmptyPlaceholderView:) _UIContentUnavailableView *_emptyPlaceholderView; // ivar: __emptyPlaceholderView
@property (nonatomic, setter=_setNeedsUpdateColor:) BOOL _needsUpdateColor; // ivar: __needsUpdateColor
@property (copy, nonatomic, setter=_setNextColorUpdateAnimatorBlock:) id *_nextColorUpdateAnimatorBlock; // ivar: __nextColorUpdateAnimatorBlock
@property (retain, nonatomic) UIColor *backgroundColorOverride; // ivar: _backgroundColorOverride
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldDisplayEmptyPlaceholder; // ivar: _shouldDisplayEmptyPlaceholder
@property (readonly) Class superclass;
@property (retain, nonatomic) PUBrowsingViewModel *viewModel; // ivar: _viewModel
@property (retain, nonatomic) UIVisualEffect *visualEffect; // ivar: _visualEffect


-(id)initWithReuseIdentifier:(id)arg0 ;
-(struct CGRect )_emptyPlaceholderFrameForLayoutInfo:(id)arg0 ;
-(void)_invalidateColor;
-(void)_invalidateColorWithAnimatorBlock:(id)arg0 ;
-(void)_updateBackgroundBlurViewAnimated:(BOOL)arg0 ;
-(void)_updateColorIfNeeded;
-(void)_updateEmptyPlaceholderAnimated:(BOOL)arg0 ;
-(void)applyLayoutInfo:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif