// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSITEMFRAMEREPORTER_H
#define _UIFOCUSITEMFRAMEREPORTER_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "UIFocusSystem.h"

@interface _UIFocusItemFrameReporter : NSObject {
    NSObject<OS_dispatch_source> *_focusedFrameUpdateTimer;
    BOOL _hasStagedFocusFrameUpdate;
}


@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (weak, nonatomic) UIFocusSystem *focusSystem; // ivar: _focusSystem


-(BOOL)_rect:(struct CGRect )arg0 differsFromRect:(struct CGRect )arg1 lowerThreshold:(CGFloat)arg2 upperThreshold:(CGFloat)arg3 ;
-(id)primaryWindow;
-(struct CGRect )_clampRect:(struct CGRect )arg0 insideRect:(struct CGRect )arg1 ;
-(struct CGRect )_globalFrameForFocusedItemInSystem:(id)arg0 ;
-(void)_cancelRepeatingFrameUpdate;
-(void)_reportFocusFrameForCurrentlyFocusedItem;
-(void)_reportFocusFrameUpdateForGlobalFrame:(struct CGRect )arg0 ;
-(void)_scheduleRepeatingFrameUpdate;


@end


#endif