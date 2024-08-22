// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGFOODIEMEMORYTITLEGENERATOR_H
#define PGFOODIEMEMORYTITLEGENERATOR_H

@class PGGraphNode<PGGraphLocationOrArea>;


#import "PGTitleGenerator.h"
#import "PGGraphLocationCityNode.h"
#import "PGGraphBusinessNode.h"
#import "PGGraphPersonNode.h"
#import "PGGraphAddressNode.h"

@interface PGFoodieMemoryTitleGenerator : PGTitleGenerator {
    NSInteger _type;
    PGGraphLocationCityNode *_cityNode;
    PGGraphBusinessNode *_businessNode;
    PGGraphPersonNode *_personNode;
    PGGraphAddressNode *_addressNode;
    PGGraphNode<PGGraphLocationOrArea> *_tripLocationNode;
    NSUInteger _tripTitleLocationType;
}




-(id)_timeTitleForTripAndWeekend;
-(id)_typeString;
-(id)initWithMomentNodes:(id)arg0 addressNode:(id)arg1 titleGenerationContext:(id)arg2 ;
-(id)initWithMomentNodes:(id)arg0 businessNode:(id)arg1 titleGenerationContext:(id)arg2 ;
-(id)initWithMomentNodes:(id)arg0 cityNode:(id)arg1 titleGenerationContext:(id)arg2 ;
-(id)initWithMomentNodes:(id)arg0 personNode:(id)arg1 titleGenerationContext:(id)arg2 ;
-(id)initWithMomentNodes:(id)arg0 tripLocationNode:(id)arg1 tripTitleLocationType:(NSUInteger)arg2 titleGenerationContext:(id)arg3 ;
-(void)_generateTitleAndSubtitleWithResult:(id)arg0 ;


@end


#endif