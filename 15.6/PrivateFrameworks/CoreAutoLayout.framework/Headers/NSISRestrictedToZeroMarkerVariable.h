// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSISRESTRICTEDTOZEROMARKERVARIABLE_H
#define NSISRESTRICTEDTOZEROMARKERVARIABLE_H



#import "NSISVariable.h"

@interface NSISRestrictedToZeroMarkerVariable : NSISVariable



-(BOOL)shouldBeMinimized;
-(id)markedConstraint;
-(int)valueRestriction;


@end


#endif