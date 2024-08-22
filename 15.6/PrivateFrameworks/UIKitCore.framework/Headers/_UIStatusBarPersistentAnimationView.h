// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARPERSISTENTANIMATIONVIEW_H
#define _UISTATUSBARPERSISTENTANIMATIONVIEW_H

@class NSHashTable, NSArray;


#import "UIView.h"

@interface _UIStatusBarPersistentAnimationView : UIView

@property (retain, nonatomic) NSHashTable *animations; // ivar: _animations
@property (copy, nonatomic) NSArray *persistentAnimations;


-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;


@end


#endif