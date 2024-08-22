// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHPROPERTYLESSNODE_H
#define PGGRAPHPROPERTYLESSNODE_H



#import "PGGraphOptimizedNode.h"

@interface PGGraphPropertylessNode : PGGraphOptimizedNode



-(BOOL)hasProperties;
-(BOOL)hasProperties:(id)arg0 ;
-(id)propertyDictionary;
-(void)checkConsistencyOfProperties:(id)arg0 withExtraPropertyKeys:(id)arg1 ;


@end


#endif