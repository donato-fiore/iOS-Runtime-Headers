// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMDSCALARFEATURE_H
#define AMDSCALARFEATURE_H



#import "AMDFeature.h"

@interface AMDScalarFeature : AMDFeature



-(id)initWithValue:(id)arg0 ;
-(id)stringValue;
-(void)copyDoubleValues:(int)arg0 toBuffer:(*CGFloat)arg1 withDefaultValue:(CGFloat)arg2 withMapOp:(id)arg3 withRemapDictionary:(id)arg4 andPostRemapOperation:(id)arg5 ;
-(void)copyFloat32Values:(int)arg0 toBuffer:(*float)arg1 withDefaultValue:(float)arg2 withMapOp:(id)arg3 withRemapDictionary:(id)arg4 andPostRemapOperation:(id)arg5 ;
-(void)copyInt32Values:(int)arg0 toBuffer:(*int)arg1 withDefaultValue:(int)arg2 withMapOp:(id)arg3 withRemapDictionary:(id)arg4 andPostRemapOperation:(id)arg5 ;


@end


#endif