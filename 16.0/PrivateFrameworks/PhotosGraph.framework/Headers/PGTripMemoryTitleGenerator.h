// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGTRIPMEMORYTITLEGENERATOR_H
#define PGTRIPMEMORYTITLEGENERATOR_H



#import "PGTitleGenerator.h"
#import "PGGraphLocationNodeCollection.h"
#import "PGGraphAreaNodeCollection.h"

@interface PGTripMemoryTitleGenerator : PGTitleGenerator {
    PGGraphLocationNodeCollection *_locationNodes;
    PGGraphAreaNodeCollection *_areaNodes;
}


@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(BOOL)_triggerDefaultTitleGenerationIfNil;
-(id)_locationTitle;
-(id)_timeTitleForTrip;
-(id)_timeTitleForTripAndWeekend;
-(id)_timeTitleForWeekend;
-(id)initWithHighlightNode:(id)arg0 titleGenerationContext:(id)arg1 ;
-(id)initWithMomentNodes:(id)arg0 locationNodes:(id)arg1 areaNodes:(id)arg2 type:(NSUInteger)arg3 titleGenerationContext:(id)arg4 ;
-(id)initWithMomentNodes:(id)arg0 locationNodes:(id)arg1 type:(NSUInteger)arg2 titleGenerationContext:(id)arg3 ;
-(id)initWithMomentNodes:(id)arg0 type:(NSUInteger)arg1 titleGenerationContext:(id)arg2 ;
-(void)_generateTitleAndSubtitleWithResult:(id)arg0 ;


@end


#endif