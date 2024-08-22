// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNPHYSICSVORTEXFIELD_H
#define SCNPHYSICSVORTEXFIELD_H



#import "SCNPhysicsField.h"

@interface SCNPhysicsVortexField : SCNPhysicsField



-(id)init;
-(struct SCNVector3 )axis;
-(struct c3dPhysicsField *)_createField;
-(void)setDirection:(struct SCNVector3 )arg0 ;


@end


#endif