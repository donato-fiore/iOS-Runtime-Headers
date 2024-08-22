// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKSIZECONSTRAINT_H
#define SKSIZECONSTRAINT_H



#import "SKConstraint.h"
#import "SKRange.h"

@interface SKSizeConstraint : SKConstraint

@property (copy) SKRange *heightRange; // ivar: _heightRange
@property (copy) SKRange *widthRange; // ivar: _widthRange


+(BOOL)supportsSecureCoding;
+(id)constraintWithHeightRange:(id)arg0 ;
+(id)constraintWithWidthRange:(id)arg0 ;
+(id)constraintWithWidthRange:(id)arg0 heightRange:(id)arg1 ;
-(BOOL)isEqualToSizeConstraint:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWidthRange:(id)arg0 heightRange:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif