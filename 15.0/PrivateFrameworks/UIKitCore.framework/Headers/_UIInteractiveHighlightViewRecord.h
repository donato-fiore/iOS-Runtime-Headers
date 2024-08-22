// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIINTERACTIVEHIGHLIGHTVIEWRECORD_H
#define _UIINTERACTIVEHIGHLIGHTVIEWRECORD_H

@class NSHashTable;

#import <Foundation/Foundation.h>

#import "UIVisualEffectView.h"
#import "_UIPortalView.h"
#import "UIView.h"

@interface _UIInteractiveHighlightViewRecord : NSObject

@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (retain, nonatomic) NSHashTable *interactiveHighlightEffects; // ivar: _interactiveHighlightEffects
@property (retain, nonatomic) _UIPortalView *portalView; // ivar: _portalView
@property (weak, nonatomic) UIView *superview; // ivar: _superview
@property (weak, nonatomic) UIView *view; // ivar: _view




@end


#endif