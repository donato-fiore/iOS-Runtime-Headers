// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGCHILDOUTDOORMEMORYTITLEGENERATOR_H
#define PGCHILDOUTDOORMEMORYTITLEGENERATOR_H



#import "PGTitleGenerator.h"
#import "PGGraphPersonNode.h"

@interface PGChildOutdoorMemoryTitleGenerator : PGTitleGenerator {
    PGGraphPersonNode *_personNode;
}




-(id)initWithMomentNodes:(id)arg0 personNode:(id)arg1 type:(NSInteger)arg2 titleGenerationContext:(id)arg3 ;
-(void)_generateTitleAndSubtitleWithResult:(id)arg0 ;


@end


#endif