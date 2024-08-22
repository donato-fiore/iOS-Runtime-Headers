// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBARTHERMALCOLORITEMVIEW_H
#define UISTATUSBARTHERMALCOLORITEMVIEW_H



#import "UIStatusBarItemView.h"

@interface UIStatusBarThermalColorItemView : UIStatusBarItemView {
    int _thermalColor;
    BOOL _sunlightMode;
}




-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(id)_color;
-(id)contentsImage;


@end


#endif