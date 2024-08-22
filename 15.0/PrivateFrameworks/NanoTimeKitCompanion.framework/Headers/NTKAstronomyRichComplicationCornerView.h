// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKASTRONOMYRICHCOMPLICATIONCORNERVIEW_H
#define NTKASTRONOMYRICHCOMPLICATIONCORNERVIEW_H



#import "NTKRichComplicationCornerTextCustomView.h"
#import "NTKAstronomyRichComplicationContentView.h"

@interface NTKAstronomyRichComplicationCornerView : NTKRichComplicationCornerTextCustomView {
    NTKAstronomyRichComplicationContentView *_astronomyContentView;
}




-(id)_outerView;
-(void)_applyPausedUpdate;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)_updateInnerLabel;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 ;
-(void)setEditing:(BOOL)arg0 ;
-(void)setTimeTravelDate:(id)arg0 animated:(BOOL)arg1 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif