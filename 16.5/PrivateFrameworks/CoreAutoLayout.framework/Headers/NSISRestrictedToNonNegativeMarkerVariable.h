// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSISRESTRICTEDTONONNEGATIVEMARKERVARIABLE_H
#define NSISRESTRICTEDTONONNEGATIVEMARKERVARIABLE_H



#import "NSISVariable.h"

@interface NSISRestrictedToNonNegativeMarkerVariable : NSISVariable



-(BOOL)shouldBeMinimized;
-(id)markedConstraint;
-(int)valueRestriction;


@end


#endif