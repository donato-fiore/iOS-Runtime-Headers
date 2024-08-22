// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSAUTORESIZINGMASKLAYOUTCONSTRAINT_H
#define NSAUTORESIZINGMASKLAYOUTCONSTRAINT_H



#import "NSLayoutConstraint.h"

@interface NSAutoresizingMaskLayoutConstraint : NSLayoutConstraint



+(id)constraintWithItem:(id)arg0 attribute:(NSInteger)arg1 relatedBy:(NSInteger)arg2 toItem:(id)arg3 attribute:(NSInteger)arg4 multiplier:(CGFloat)arg5 constant:(CGFloat)arg6 ;
+(id)constraintsWithAutoresizingMask:(NSUInteger)arg0 subitem:(id)arg1 frame:(struct CGRect )arg2 superitem:(id)arg3 bounds:(struct CGRect )arg4 ;
-(id)_viewForAutoresizingMask;
-(id)descriptionAccessory;
-(int)_constraintType;


@end


#endif