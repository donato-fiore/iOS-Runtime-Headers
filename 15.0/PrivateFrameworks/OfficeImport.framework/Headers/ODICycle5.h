// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ODICYCLE5_H
#define ODICYCLE5_H



#import "ODICycle.h"

@interface ODICycle5 : ODICycle



+(BOOL)map1NodeWithState:(id)arg0 ;
+(BOOL)map2NodeWithState:(id)arg0 ;
+(float)intersectionAngleNextToAngle:(float)arg0 isAfter:(BOOL)arg1 state:(id)arg2 ;
+(float)normalizedAngle:(float)arg0 ;
+(struct CGRect )mapGSpaceWithState:(id)arg0 ;
+(struct CGSize )nodeSizeWithState:(id)arg0 ;
+(void)addShapeForNode:(id)arg0 relativeBounds:(struct CGRect )arg1 state:(id)arg2 ;
+(void)addShapeForTransition:(id)arg0 startAngle:(float)arg1 endAngle:(float)arg2 state:(id)arg3 ;
+(void)mapNode:(id)arg0 index:(unsigned int)arg1 state:(id)arg2 ;
+(void)mapStyleForTransition:(id)arg0 shape:(id)arg1 state:(id)arg2 ;
+(void)mapTransition:(id)arg0 index:(unsigned int)arg1 state:(id)arg2 ;


@end


#endif