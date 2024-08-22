// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APUIAPPCLIPVIEW_H
#define APUIAPPCLIPVIEW_H

@class ATXHeroData, UITapGestureRecognizer;


#import "APUISuggestionView.h"

@interface APUIAppClipView : APUISuggestionView {
    ATXHeroData *_prediction;
    UITapGestureRecognizer *_tapRecognizer;
}




-(void)_tapRecognized:(id)arg0 ;
-(void)layoutSuggestion:(id)arg0 ;
-(void)openPredictionAction;


@end


#endif