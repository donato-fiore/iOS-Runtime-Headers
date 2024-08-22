// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDICTATIONFLOATINGSTARKVIEW_H
#define UIDICTATIONFLOATINGSTARKVIEW_H

@class NSString;
@protocol UIGestureRecognizerDelegate;


#import "UIDictationView.h"
#import "UIDimmingView.h"

@interface UIDictationFloatingStarkView : UIDictationView <UIGestureRecognizerDelegate>

 {
    UIDimmingView *_dimmingView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )positionForShow;
-(void)dealloc;
-(void)dimmingViewWasTapped:(id)arg0 ;
-(void)endpointButtonPressed;
-(void)finishReturnToKeyboard;
-(void)layoutSubviews;
-(void)prepareForReturnToKeyboard;
-(void)returnToKeyboard;
-(void)setInputViewsHiddenForDictation:(BOOL)arg0 ;
-(void)setState:(int)arg0 ;
-(void)show;


@end


#endif