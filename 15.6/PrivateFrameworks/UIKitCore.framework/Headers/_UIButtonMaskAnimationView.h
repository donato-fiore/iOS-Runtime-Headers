// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIBUTTONMASKANIMATIONVIEW_H
#define _UIBUTTONMASKANIMATIONVIEW_H

@class NSString;
@protocol CAAnimationDelegate, _UIButtonMaskAnimationViewDelegate;


#import "UIView.h"
#import "UIColor.h"

@interface _UIButtonMaskAnimationView : UIView <CAAnimationDelegate>

 {
    NSUInteger _hardEdge;
    UIView *_hardEdgeLine;
}


@property (nonatomic) UIColor *borderColor;
@property CGFloat borderWidth;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<_UIButtonMaskAnimationViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property NSUInteger hardEdge;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)init;
-(struct CGRect )_frameForLine;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif