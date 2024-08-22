// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBARSIGNALSTRENGTHITEMVIEW_H
#define UISTATUSBARSIGNALSTRENGTHITEMVIEW_H



#import "UIStatusBarItemView.h"

@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView {
    int _signalStrengthRaw;
    int _signalStrengthBars;
    BOOL _enableRSSI;
    BOOL _showRSSI;
    BOOL _showFailure;
    BOOL _useSmallBars;
}




-(BOOL)_updateWithRaw:(int)arg0 bars:(int)arg1 enableRSSI:(BOOL)arg2 showFailure:(BOOL)arg3 useSmallBars:(BOOL)arg4 ;
-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(CGFloat)extraLeftPadding;
-(CGFloat)extraRightPadding;
-(id)_signalStrengthBarsImageName;
-(id)_stringForRSSI;
-(id)accessibilityHUDRepresentation;
-(id)contentsImage;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif