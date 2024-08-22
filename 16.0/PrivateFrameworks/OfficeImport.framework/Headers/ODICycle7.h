// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ODICYCLE7_H
#define ODICYCLE7_H



#import "ODICycle.h"

@interface ODICycle7 : ODICycle



+(BOOL)map1NodeWithState:(id)arg0 ;
+(BOOL)map2NodeWithState:(id)arg0 ;
+(struct CGRect )mapGSpaceWithState:(id)arg0 ;
+(struct CGSize )nodeSizeWithState:(id)arg0 ;
+(void)addShapeForNode:(id)arg0 relativeBounds:(struct CGRect )arg1 state:(id)arg2 ;
+(void)addShapeForTransition:(id)arg0 relativeBounds:(struct CGRect )arg1 rotation:(float)arg2 state:(id)arg3 ;
+(void)mapNode:(id)arg0 index:(unsigned int)arg1 state:(id)arg2 ;
+(void)mapTransition:(id)arg0 index:(unsigned int)arg1 state:(id)arg2 ;


@end


#endif