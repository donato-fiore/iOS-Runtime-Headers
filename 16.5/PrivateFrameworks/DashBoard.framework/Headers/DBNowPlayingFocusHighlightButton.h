// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBNOWPLAYINGFOCUSHIGHLIGHTBUTTON_H
#define DBNOWPLAYINGFOCUSHIGHLIGHTBUTTON_H

@class CPUIMediaButton;



@interface DBNowPlayingFocusHighlightButton : CPUIMediaButton



-(BOOL)canShowHighlight;
-(BOOL)shouldUpdateButtonOpacityForKnobUnfocused;
-(id)colorForKnobFocusLayer;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif