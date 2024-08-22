// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNPHYSICSLINEARGRAVITYFIELD_H
#define SCNPHYSICSLINEARGRAVITYFIELD_H



#import "SCNPhysicsField.h"

@interface SCNPhysicsLinearGravityField : SCNPhysicsField



-(BOOL)supportsOffset;
-(struct SCNVector3 )gravity;
-(struct c3dPhysicsField *)_createField;
-(void)setDirection:(struct SCNVector3 )arg0 ;


@end


#endif