// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIINPUTVIEWANIMATIONCONTROLLERSLIDECONTEXT_H
#define UIINPUTVIEWANIMATIONCONTROLLERSLIDECONTEXT_H


#import <Foundation/Foundation.h>

#import "UIInputViewSetPlacement.h"
#import "UIView.h"

@interface UIInputViewAnimationControllerSlideContext : NSObject

@property (retain, nonatomic) UIInputViewSetPlacement *endPlacement; // ivar: _endPlacement
@property (retain, nonatomic) UIView *snapshot; // ivar: _snapshot
@property (nonatomic) CGRect snapshotEndFrame; // ivar: _snapshotEndFrame


-(void)dealloc;


@end


#endif