// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCONTENTSIZELAYOUTCONSTRAINT_H
#define NSCONTENTSIZELAYOUTCONSTRAINT_H



#import "NSLayoutConstraint.h"

@interface NSContentSizeLayoutConstraint : NSLayoutConstraint

@property (readonly) CGFloat compressionResistancePriority; // ivar: _compressionResistancePriority
@property (readonly) CGFloat huggingPriority; // ivar: _huggingPriority


-(CGFloat)priorityForVariable:(id)arg0 ;
-(id)_priorityDescription;
-(id)initWithLayoutItem:(id)arg0 value:(CGFloat)arg1 huggingPriority:(CGFloat)arg2 compressionResistancePriority:(CGFloat)arg3 orientation:(NSInteger)arg4 ;


@end


#endif