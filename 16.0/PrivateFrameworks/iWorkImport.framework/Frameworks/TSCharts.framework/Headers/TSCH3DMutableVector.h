// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DMUTABLEVECTOR_H
#define TSCH3DMUTABLEVECTOR_H



#import "TSCH3DVector.h"

@interface TSCH3DMutableVector : TSCH3DVector

@property (nonatomic) float w;
@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float z;


-(void)setValue2:(struct tvec2<float> )arg0 ;
-(void)setValue3:(struct tvec3<float> )arg0 ;
-(void)setValue4:(struct tvec4<float> )arg0 ;
-(void)setValue:(struct tvec4<float> )arg0 ;


@end


#endif