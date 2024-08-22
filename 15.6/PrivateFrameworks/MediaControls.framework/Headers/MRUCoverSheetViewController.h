// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUCOVERSHEETVIEWCONTROLLER_H
#define MRUCOVERSHEETVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray;
@protocol MRUNowPlayingViewControllerDelegate, UIGestureRecognizerDelegate, MTVisualStylingRequiring, MRUCoverSheetViewControllerDelegate;


#import "MediaControlsInteractionRecognizer.h"
#import "MRUNowPlayingViewController.h"
#import "MRUVisualStylingProvider.h"

@interface MRUCoverSheetViewController : UIViewController <MRUNowPlayingViewControllerDelegate, UIGestureRecognizerDelegate, MTVisualStylingRequiring>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUCoverSheetViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MediaControlsInteractionRecognizer *interactionRecognizer; // ivar: _interactionRecognizer
@property (readonly, nonatomic) NSInteger layout;
@property (retain, nonatomic) MRUNowPlayingViewController *nowPlayingViewController; // ivar: _nowPlayingViewController
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(void)didReceiveInteraction:(id)arg0 ;
// -(void)nowPlayingViewController:(id)arg0 didChangeSizeWithAnimations:(id)arg1 completion:(unk)arg2  ;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif