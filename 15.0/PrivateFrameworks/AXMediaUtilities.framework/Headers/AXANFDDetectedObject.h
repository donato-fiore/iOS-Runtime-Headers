// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXANFDDETECTEDOBJECT_H
#define AXANFDDETECTEDOBJECT_H



#import "AXVNEspressoDetectedObject.h"

@interface AXANFDDetectedObject : AXVNEspressoDetectedObject

@property int labelKey; // ivar: _labelKey
@property float rotationAngle; // ivar: _rotationAngle
@property float yawAngle; // ivar: _yawAngle


-(id)initWithObjectType:(NSInteger)arg0 boundingBox:(struct CGRect )arg1 confidence:(float)arg2 rotationAngle:(float)arg3 yawAngle:(float)arg4 labelKey:(int)arg5 ;


@end


#endif