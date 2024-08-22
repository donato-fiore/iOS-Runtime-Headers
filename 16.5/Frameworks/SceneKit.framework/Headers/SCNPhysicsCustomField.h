// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNPHYSICSCUSTOMFIELD_H
#define SCNPHYSICSCUSTOMFIELD_H



#import "SCNPhysicsField.h"

@interface SCNPhysicsCustomField : SCNPhysicsField {
    id *_block;
}


@property id *block;


-(struct c3dPhysicsField *)_createField;
-(void)dealloc;


@end


#endif