// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUCOVERSHEETVIEWCONTROLLER_H
#define MRUCOVERSHEETVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray;
@protocol MRUNowPlayingViewControllerDelegate, UIGestureRecognizerDelegate, MTVisualStylingRequiring, MRUCoverSheetViewControllerDelegate;


#import "MediaControlsInteractionRecognizer.h"
#import "MRUNowPlayingViewController.h"
#import "MRUVisualStylingProvider.h"
#import "MRUCoverSheetView.h"

@interface MRUCoverSheetViewController : UIViewController <MRUNowPlayingViewControllerDelegate, UIGestureRecognizerDelegate, MTVisualStylingRequiring>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUCoverSheetViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MediaControlsInteractionRecognizer *interactionRecognizer; // ivar: _interactionRecognizer
@property (readonly, nonatomic) NSInteger layout;
@property (retain, nonatomic) MRUNowPlayingViewController *nowPlayingViewController; // ivar: _nowPlayingViewController
@property (copy, nonatomic) id *preferredContentSizeBlock; // ivar: _preferredContentSizeBlock
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) MRUCoverSheetView *view;
@property (retain, nonatomic) MRUCoverSheetView *viewIfLoaded;


-(BOOL)_canShowWhileLocked;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)_childViewControllersForAlwaysOnTimelines;
-(void)didReceiveInteraction:(id)arg0 ;
-(void)loadView;
// -(void)nowPlayingViewController:(id)arg0 didChangeSizeWithAnimations:(id)arg1 completion:(unk)arg2  ;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updatePreferredContentSize;
-(void)updateRestrictedRects;
-(void)updateVisualStyling;


@end


#endif