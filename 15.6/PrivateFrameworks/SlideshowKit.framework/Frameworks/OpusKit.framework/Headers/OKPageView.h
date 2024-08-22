// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKPAGEVIEW_H
#define OKPAGEVIEW_H

@class OFUIView;



@interface OKPageView : OFUIView



-(BOOL)_canRespondToEventWithPoint:(struct CGPoint )arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)pageViewController;
-(void)commonInit;
-(void)dealloc;


@end


#endif