// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSERRORVARIABLECONSTRAINT_H
#define NSERRORVARIABLECONSTRAINT_H



#import "NSLayoutConstraint.h"
#import "NSISVariable.h"

@interface NSErrorVariableConstraint : NSLayoutConstraint {
    NSISVariable *_errorVariable;
    CGFloat _errorValue;
}




-(BOOL)_lowerIntoExpression:(id)arg0 reportingConstantIsRounded:(*BOOL)arg1 ;
-(id)constrainedConstraint;
-(id)initWithVariable:(id)arg0 value:(CGFloat)arg1 ;
-(int)nsis_orientationHintForVariable:(id)arg0 ;
-(void)dealloc;


@end


#endif