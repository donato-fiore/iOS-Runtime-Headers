// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSEASONMEMORYTITLEGENERATOR_H
#define PGSEASONMEMORYTITLEGENERATOR_H

@class NSString;


#import "PGTitleGenerator.h"

@interface PGSeasonMemoryTitleGenerator : PGTitleGenerator

@property (retain, nonatomic) NSString *season; // ivar: _season


+(id)seasonSubtitleWithMomentNodes:(id)arg0 seasonName:(id)arg1 ;
-(id)initWithMomentNodes:(id)arg0 seasonName:(id)arg1 titleGenerationContext:(id)arg2 ;
-(void)_generateTitleAndSubtitleWithResult:(id)arg0 ;


@end


#endif