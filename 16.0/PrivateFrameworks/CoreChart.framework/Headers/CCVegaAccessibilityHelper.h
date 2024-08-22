// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCVEGAACCESSIBILITYHELPER_H
#define CCVEGAACCESSIBILITYHELPER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CCVegaAccessibilityHelper : NSObject {
    stack<CCVegaAccessibilityHelperState, std::deque<CCVegaAccessibilityHelperState>> _stateStack;
    ? _currentState;
    NSMutableArray *_elementCache;
    NSMutableArray *_rootAccessibilityElements;
    NSMutableArray *_children;
    NSMutableArray *_groupStack;
}


@property (weak) id *container; // ivar: container


-(id)getElements;
-(id)initWithElements:(id)arg0 ;
-(id)newAccessibilityElementWithFrame:(struct CGRect )arg0 ;
-(void)addElementWithLabel:(id)arg0 roleDescription:(id)arg1 frame:(struct CGRect )arg2 ;
-(void)enterGroupWithLabel:(id)arg0 roleDescription:(id)arg1 frame:(struct CGRect )arg2 ;
-(void)exitGroup;
-(void)markAriaHidden;
-(void)restoreState;
-(void)saveState;
-(void)translateX:(CGFloat)arg0 Y:(CGFloat)arg1 ;


@end


#endif