// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPASTSUPERSETMEMORYTITLEGENERATOR_H
#define PGPASTSUPERSETMEMORYTITLEGENERATOR_H

@class NSDateInterval;


#import "PGTitleGenerator.h"
#import "PGGraphLocationNode.h"

@interface PGPastSupersetMemoryTitleGenerator : PGTitleGenerator

@property (readonly) NSDateInterval *supersetDateInterval; // ivar: _supersetDateInterval
@property (readonly) PGGraphLocationNode *supersetLocationNode; // ivar: _supersetLocationNode


-(id)_locationTitle;
-(id)_timeTitle;
-(id)initWithMomentNodes:(id)arg0 supersetLocationNode:(id)arg1 supersetDateInterval:(id)arg2 titleGenerationContext:(id)arg3 ;
-(void)_generateTitleAndSubtitleWithResult:(id)arg0 ;


@end


#endif