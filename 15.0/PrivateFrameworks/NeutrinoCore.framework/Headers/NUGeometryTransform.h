// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUGEOMETRYTRANSFORM_H
#define NUGEOMETRYTRANSFORM_H


#import <Foundation/Foundation.h>


@interface NUGeometryTransform : NSObject



-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)inverseTransform;
-(struct ? )transformMatrix:(struct ? )arg0 ;
-(struct ? )transformTime:(struct ? )arg0 ;
-(struct CGPoint )transformPoint:(struct CGPoint )arg0 ;


@end


#endif