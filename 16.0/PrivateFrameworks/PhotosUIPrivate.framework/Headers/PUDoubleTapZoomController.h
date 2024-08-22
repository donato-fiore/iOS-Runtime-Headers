// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUDOUBLETAPZOOMCONTROLLER_H
#define PUDOUBLETAPZOOMCONTROLLER_H

@class UITapGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate, PUDoubleTapZoomControllerDelegate;

#import <Foundation/Foundation.h>


@interface PUDoubleTapZoomController : NSObject <UIGestureRecognizerDelegate>

 {
    ? _delegateFlags;
}


@property (retain, nonatomic, setter=_setDoubleTapGestureRecognizer:) UITapGestureRecognizer *_doubleTapGestureRecognizer; // ivar: __doubleTapGestureRecognizer
@property (nonatomic, setter=_setNeedsUpdateGestureRecognizers:) BOOL _needsUpdateGestureRecognizers; // ivar: __needsUpdateGestureRecognizers
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUDoubleTapZoomControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)shouldDoubleTapBeginAtLocationFromProvider:(id)arg0 ;
-(id)_userTransformViewAtLocationFromProvider:(id)arg0 ;
-(id)init;
-(void)_handleDoubleTapGestureRecognizer:(id)arg0 ;
-(void)_invalidateGestureRecognizers;
-(void)_updateGestureRecognizersIfNeeded;
-(void)invalidateViewHostingGestureRecognizers;


@end


#endif