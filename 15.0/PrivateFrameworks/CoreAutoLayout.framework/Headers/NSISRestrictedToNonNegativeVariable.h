// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSISRESTRICTEDTONONNEGATIVEVARIABLE_H
#define NSISRESTRICTEDTONONNEGATIVEVARIABLE_H



#import "NSISVariable.h"

@interface NSISRestrictedToNonNegativeVariable : NSISVariable



-(BOOL)shouldBeMinimized;
-(id)markedConstraint;
-(int)valueRestriction;


@end


#endif