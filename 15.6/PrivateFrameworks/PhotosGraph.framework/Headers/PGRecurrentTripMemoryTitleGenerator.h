// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGRECURRENTTRIPMEMORYTITLEGENERATOR_H
#define PGRECURRENTTRIPMEMORYTITLEGENERATOR_H

@class NSSet;


#import "PGTitleGenerator.h"

@interface PGRecurrentTripMemoryTitleGenerator : PGTitleGenerator

@property (retain, nonatomic) NSSet *locationNodes; // ivar: _locationNodes


-(id)_locationTitle;
-(id)_timeTitle;
-(id)initWithLocationNodes:(id)arg0 titleGenerationContext:(id)arg1 ;
-(void)_generateTitleAndSubtitleWithResult:(id)arg0 ;


@end


#endif