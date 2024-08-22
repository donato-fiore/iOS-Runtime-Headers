// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBFOCUSGUIDE_H
#define UIKBFOCUSGUIDE_H

@protocol UIKBFocusGuideDelegate;


#import "UIFocusGuide.h"

@interface UIKBFocusGuide : UIFocusGuide

@property (nonatomic) NSUInteger focusHeading; // ivar: focusHeading
@property (nonatomic) NSObject<UIKBFocusGuideDelegate> *keyboardDelegate; // ivar: _keyboardDelegate


-(BOOL)_ignoresSpeedBumpEdges;
-(BOOL)_isUnclippable;
-(BOOL)_isUnoccludable;
-(CGFloat)_focusPriority;
-(id)focusGuideRegion:(id)arg0 preferredFocusEnvironmentsForMovementRequest:(id)arg1 ;
-(void)_didUpdateFocusToPreferredFocusedView;


@end


#endif