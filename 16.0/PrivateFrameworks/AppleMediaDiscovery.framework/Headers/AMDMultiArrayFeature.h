// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMDMULTIARRAYFEATURE_H
#define AMDMULTIARRAYFEATURE_H



#import "AMDFeature.h"

@interface AMDMultiArrayFeature : AMDFeature



-(*CGFloat)fillDoubleMultiArray:(*CGFloat)arg0 fromSource:(id)arg1 atDepth:(unsigned int)arg2 error:(*id)arg3 ;
-(*float)fillFloat32MultiArray:(*float)arg0 fromSource:(id)arg1 atDepth:(unsigned int)arg2 error:(*id)arg3 ;
-(*int)fillInt32MultiArray:(*int)arg0 fromSource:(id)arg1 atDepth:(unsigned int)arg2 error:(*id)arg3 ;
-(id)buildMultiArrayBufferFrom:(id)arg0 andCapacity:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)getMultiArray:(*id)arg0 ;
-(id)initWithValue:(id)arg0 ;


@end


#endif