// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHPROPERTYLESSEDGE_H
#define PGGRAPHPROPERTYLESSEDGE_H



#import "PGGraphOptimizedEdge.h"

@interface PGGraphPropertylessEdge : PGGraphOptimizedEdge



-(BOOL)hasProperties;
-(BOOL)hasProperties:(id)arg0 ;
-(id)propertyDictionary;
-(void)checkConsistencyOfProperties:(id)arg0 withExtraPropertyKeys:(id)arg1 ;


@end


#endif