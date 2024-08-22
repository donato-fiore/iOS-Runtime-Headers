// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDEBUGGINGOVERLAYDETAILOPACITY_H
#define _UIDEBUGGINGOVERLAYDETAILOPACITY_H

@class UIDebuggingOverlayDetail;


#import "UIView.h"

@interface _UIDebuggingOverlayDetailOpacity : UIDebuggingOverlayDetail {
    UIView *_view;
    UIView *_inspectedView;
}




-(id)view;
-(void)_sliderValueChanged:(id)arg0 ;
-(void)_updateForInspectedView:(id)arg0 ;


@end


#endif