// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNJSVALUE_H
#define SCNJSVALUE_H

@class NSValue;



@interface SCNJSValue : NSValue



+(id)SCNJSExportProtocol;
+(id)valueWithMatrix4:(struct SCNMatrix4 )arg0 ;
+(id)valueWithVector3:(struct SCNVector3 )arg0 ;
+(id)valueWithVector4:(struct SCNVector4 )arg0 ;
-(struct SCNMatrix4 )matrix4;
-(struct SCNVector3 )vector3;
-(struct SCNVector4 )vector4;


@end


#endif