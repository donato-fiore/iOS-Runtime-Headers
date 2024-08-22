// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKPOPOVERCONTROLLER_H
#define TSKPOPOVERCONTROLLER_H

@class UIPopoverController, NSString;
@protocol UIPopoverControllerDelegate;



@interface TSKPopoverController : UIPopoverController <UIPopoverControllerDelegate>

 {
    id<UIPopoverControllerDelegate> *mSavedDelegate;
    BOOL mIsDismissing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissAnimatedOnOrientationChange; // ivar: mDismissAnimatedOnOrientationChange
@property (nonatomic) BOOL dismissOnMoviePlayback; // ivar: mDismissOnMoviePlayback
@property (nonatomic) BOOL dismissOnUndo; // ivar: mDismissOnUndo
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)anyPopoversVisible;
+(CGFloat)defaultPopoverPlacementPadding;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg0 ;
-(id)initWithContentViewController:(id)arg0 ;
-(void)dealloc;
-(void)dismissPopoverAnimated:(BOOL)arg0 ;
-(void)moviePlaybackWillBegin:(id)arg0 ;
-(void)p_applicationDidEnterBackground:(id)arg0 ;
-(void)p_dismissPopoverAnimated:(BOOL)arg0 ;
-(void)p_orientationWillChange:(id)arg0 ;
-(void)p_sendPopoverHidDelegateMessage;
-(void)p_willShowPopoverNotification:(id)arg0 ;
-(void)popoverControllerDidDismissPopover:(id)arg0 ;
-(void)presentPopoverFromRect:(struct CGRect )arg0 inView:(id)arg1 permittedArrowDirections:(NSUInteger)arg2 animated:(BOOL)arg3 ;
-(void)presentPopoverFromRect:(struct CGRect )arg0 inView:(id)arg1 permittedArrowDirections:(NSUInteger)arg2 animated:(BOOL)arg3 constrainToView:(BOOL)arg4 withPadding:(CGFloat)arg5 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif