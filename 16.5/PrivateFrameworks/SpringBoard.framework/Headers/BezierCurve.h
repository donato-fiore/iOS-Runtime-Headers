// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BEZIERCURVE_H
#define BEZIERCURVE_H


#import <Foundation/Foundation.h>


@interface BezierCurve : NSObject {
    ? _p0;
    ? _p1;
    ? _p2;
    ? _p3;
}


@property ? p0;
@property ? p1;
@property ? p2;
@property ? p3;


-(id)_float4FromArray;
-(id)derivativeAt;
-(id)initWithDictionary:(id)arg0 ;
-(id)pointAt;
-(void)scaleBy;


@end


#endif