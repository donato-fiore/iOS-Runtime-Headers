// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVIEWANIMATIONWITHCOMPOSERWRAPPER_H
#define _UIVIEWANIMATIONWITHCOMPOSERWRAPPER_H

@protocol UIIntervalAnimating, UIViewAnimationComposing;

#import <Foundation/Foundation.h>


@interface _UIViewAnimationWithComposerWrapper : NSObject

@property (retain, nonatomic) NSObject<UIIntervalAnimating> *animation; // ivar: _animation
@property (retain, nonatomic) NSObject<UIViewAnimationComposing> *composer; // ivar: _composer


+(id)instanceWithAnimation:(id)arg0 composer:(id)arg1 ;


@end


#endif