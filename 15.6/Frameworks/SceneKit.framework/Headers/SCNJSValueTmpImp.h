// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNJSVALUETMPIMP_H
#define SCNJSVALUETMPIMP_H


#import <Foundation/Foundation.h>


@interface SCNJSValueTmpImp : NSObject



+(id)valueWithTransform3D:(struct SCNMatrix4 )arg0 inContext:(id)arg1 ;
+(id)valueWithVector3:(struct SCNVector3 )arg0 inContext:(id)arg1 ;
+(id)valueWithVector4:(struct SCNVector4 )arg0 inContext:(id)arg1 ;
-(struct SCNMatrix4 )toTransform3D;
-(struct SCNVector3 )toVector3;
-(struct SCNVector4 )toVector4;


@end


#endif