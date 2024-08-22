// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ANFDDETECTEDOBJECT_H
#define ANFDDETECTEDOBJECT_H



#import "VNEspressoDetectedObject.h"

@interface ANFDDetectedObject : VNEspressoDetectedObject

@property int labelKey; // ivar: _labelKey
@property float pitchAngle; // ivar: _pitchAngle
@property float rotationAngle; // ivar: _rotationAngle
@property float yawAngle; // ivar: _yawAngle


-(id)description;
-(id)initWithObjectType:(NSInteger)arg0 boundingBox:(struct CGRect )arg1 confidence:(float)arg2 rotationAngle:(float)arg3 yawAngle:(float)arg4 pitchAngle:(float)arg5 labelKey:(int)arg6 ;


@end


#endif