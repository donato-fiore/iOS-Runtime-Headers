// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPLACEMEMORYTITLEGENERATOR_H
#define PGPLACEMEMORYTITLEGENERATOR_H



#import "PGTitleGenerator.h"
#import "PGGraphNode.h"

@interface PGPlaceMemoryTitleGenerator : PGTitleGenerator

@property (retain, nonatomic) PGGraphNode *placeNode; // ivar: _placeNode


-(id)_placeTitle;
-(id)initWithMomentNodes:(id)arg0 placeNode:(id)arg1 titleGenerationContext:(id)arg2 ;
-(void)_generateTitleAndSubtitleWithResult:(id)arg0 ;


@end


#endif