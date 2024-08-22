// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UILABELMARQUEEANIMATIONDELEGATE_H
#define _UILABELMARQUEEANIMATIONDELEGATE_H

@class NSString;
@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>

#import "UILabel.h"

@interface _UILabelMarqueeAnimationDelegate : NSObject <CAAnimationDelegate>

 {
    BOOL _started;
    BOOL _updated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UILabel *label; // ivar: _label
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressEnded; // ivar: _suppressEnded


-(id)initWithLabel:(id)arg0 ;
-(void)animationDidStart:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;


@end


#endif