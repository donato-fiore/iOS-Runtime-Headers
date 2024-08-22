// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKASTRONOMYRICHCOMPLICATIONBASECIRCULARVIEW_H
#define NTKASTRONOMYRICHCOMPLICATIONBASECIRCULARVIEW_H



#import "NTKRichComplicationCircularBaseView.h"
#import "NTKAstronomyRichComplicationContentView.h"

@interface NTKAstronomyRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {
    NTKAstronomyRichComplicationContentView *_astronomyContentView;
}




-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_applyPausedUpdate;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)_setupContentViewForFamily:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 ;
-(void)setEditing:(BOOL)arg0 ;
-(void)setTimeTravelDate:(id)arg0 animated:(BOOL)arg1 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif