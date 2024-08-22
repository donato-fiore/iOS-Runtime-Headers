// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKWIDGETVIEW_H
#define OKWIDGETVIEW_H



#import "OKWidgetViewProxy.h"
#import "OKRoundProgressView.h"

@interface OKWidgetView : OKWidgetViewProxy {
    OKRoundProgressView *_roundProgressView;
}




-(BOOL)_canRespondToEventWithPoint:(struct CGPoint )arg0 ;
-(BOOL)downloadIndicatorEnabled;
-(BOOL)isActivityIndicatorVisible;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)commonInit;
-(void)dealloc;
-(void)setActivityIndicatorVisible:(BOOL)arg0 ;
-(void)updateProgressIndicator:(CGFloat)arg0 ;


@end


#endif