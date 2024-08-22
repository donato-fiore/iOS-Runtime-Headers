// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIUPDATECYCLEDEBUGOVERLAY_H
#define _UIUPDATECYCLEDEBUGOVERLAY_H

@protocol _UIUpdateCompletionObserving;

#import <Foundation/Foundation.h>

#import "UIWindow.h"

@interface _UIUpdateCycleDebugOverlay : NSObject <_UIUpdateCompletionObserving>

 {
    UIWindow *_windowWithBorder;
}




+(id)instance;
-(void)_updateCompletedForModelMediaTime:(CGFloat)arg0 timing:(struct _UIUpdateTiming *)arg1 ;
-(void)addBorderToWindow:(id)arg0 ;
-(void)removeBorderFromWindow:(id)arg0 ;


@end


#endif