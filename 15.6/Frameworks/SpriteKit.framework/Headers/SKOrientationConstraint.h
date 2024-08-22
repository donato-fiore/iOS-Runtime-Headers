// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKORIENTATIONCONSTRAINT_H
#define SKORIENTATIONCONSTRAINT_H



#import "SKConstraint.h"
#import "SKNode.h"
#import "SKRange.h"

@interface SKOrientationConstraint : SKConstraint

@property (weak) SKNode *node; // ivar: _node
@property (copy) SKRange *offset; // ivar: _offset
@property CGPoint point; // ivar: _point


+(BOOL)supportsSecureCoding;
+(id)constraintOrientingToNode:(id)arg0 offset:(id)arg1 ;
+(id)constraintOrientingToPoint:(struct CGPoint )arg0 inNode:(id)arg1 offset:(id)arg2 ;
+(id)constraintOrientingToPoint:(struct CGPoint )arg0 offset:(id)arg1 ;
-(BOOL)isEqualToOrientationConstraint:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNode:(id)arg0 point:(struct CGPoint )arg1 offset:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif