// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNPHYSICSDRAGFIELD_H
#define SCNPHYSICSDRAGFIELD_H



#import "SCNPhysicsField.h"

@interface SCNPhysicsDragField : SCNPhysicsField



-(BOOL)supportsDirection;
-(BOOL)supportsOffset;
-(struct c3dPhysicsField *)_createField;


@end


#endif