// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKPRESENTATIONVIEWPROXY_H
#define OKPRESENTATIONVIEWPROXY_H

@class OFUIView, NSString;
@protocol UIGestureRecognizerDelegate;


#import "OKPresentationViewAllGestureRecognizer.h"

@interface OKPresentationViewProxy : OFUIView <UIGestureRecognizerDelegate>

 {
    OKPresentationViewAllGestureRecognizer *_allGestureRecognizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)presentationViewController;
-(void)commonInit;
-(void)dealloc;
-(void)handleAllGesture:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif