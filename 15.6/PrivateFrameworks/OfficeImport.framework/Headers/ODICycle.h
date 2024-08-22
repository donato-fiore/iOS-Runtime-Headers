// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ODICYCLE_H
#define ODICYCLE_H


#import <Foundation/Foundation.h>


@interface ODICycle : NSObject



+(BOOL)map1NodeWithState:(id)arg0 ;
+(BOOL)map2NodeWithState:(id)arg0 ;
+(BOOL)mapIdentifier:(id)arg0 state:(id)arg1 ;
+(NSUInteger)nodeCountWithState:(id)arg0 ;
+(struct CGRect )boundingBoxWithIsTight:(BOOL)arg0 state:(id)arg1 ;
+(struct CGRect )mapGSpaceWithState:(id)arg0 ;
+(struct CGRect )nodeBoundsWithIndex:(unsigned int)arg0 state:(id)arg1 ;
+(struct CGSize )nodeSizeWithState:(id)arg0 ;
+(void)mapNode:(id)arg0 index:(unsigned int)arg1 state:(id)arg2 ;
+(void)mapTransition:(id)arg0 index:(unsigned int)arg1 state:(id)arg2 ;
+(void)mapWithState:(id)arg0 ;


@end


#endif