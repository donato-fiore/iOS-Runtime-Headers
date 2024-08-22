// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16MAGNIFIERSUPPORT36FREEZEFRAMEPAGECONTENTVIEWCONTROLLER_H
#define _TTC16MAGNIFIERSUPPORT36FREEZEFRAMEPAGECONTENTVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol UIScrollViewDelegate, UIEditMenuInteractionDelegate;



@interface _TtC16MagnifierSupport36FreezeFramePageContentViewController : UIViewController <UIScrollViewDelegate, UIEditMenuInteractionDelegate>

 {
    ? pageSelectionDelegate;
    ? imageView;
    ? scrollView;
    ? asset;
    ? filterSet;
    ? image;
    ? thumbnailWorkItem;
    ? fullSizeWorkItem;
    ? imageProcessingQueue;
    ? delayedAssetSubscription;
    ? zoomSubscription;
    ? isShowingFullSizeImage;
    ? $__lazy_storage_$_singleTapGestureRecognizer;
    ? $__lazy_storage_$_longPressGestureRecognizer;
    ? $__lazy_storage_$_doubleTapGestureRecognizer;
    ? $__lazy_storage_$_editMenuInteraction;
    ? shareMenuLocation;
}


@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSUInteger supportedInterfaceOrientations;


-(BOOL)_canShowWhileLocked;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)editMenuInteraction:(id)arg0 menuForConfiguration:(id)arg1 suggestedActions:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(void)doubleTap:(id)arg0 ;
-(void)longPress:(id)arg0 ;
-(void)scrollViewDidZoom:(id)arg0 ;
-(void)shareFreezeFrameMenuItemAction;
-(void)singleTap:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif