// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ODICYCLE2_H
#define ODICYCLE2_H



#import "ODICycle.h"

@interface ODICycle2 : ODICycle



+(BOOL)map1NodeWithState:(id)arg0 ;
+(BOOL)map2NodeWithState:(id)arg0 ;
+(float)nodeRadiusWithState:(id)arg0 ;
+(struct CGRect )mapGSpaceWithState:(id)arg0 ;
+(struct CGSize )nodeSizeWithState:(id)arg0 ;
+(void)mapNode:(id)arg0 index:(unsigned int)arg1 state:(id)arg2 ;
+(void)mapTransition:(id)arg0 index:(unsigned int)arg1 state:(id)arg2 ;


@end


#endif