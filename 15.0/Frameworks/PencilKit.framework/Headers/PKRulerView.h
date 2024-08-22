// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKRULERVIEW_H
#define PKRULERVIEW_H

@class UIView;


#import "PKRulerLayer.h"

@interface PKRulerView : UIView {
    BOOL _rulerHidden;
    PKRulerLayer *_rulerLayer;
}




-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif