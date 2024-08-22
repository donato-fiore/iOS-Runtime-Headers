// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGTHROWBACKTHURSDAYMEMORYTITLEGENERATOR_H
#define PGTHROWBACKTHURSDAYMEMORYTITLEGENERATOR_H

@class NSString;
@protocol PGSpecBasedTitleGeneratorDelegate;


#import "PGTitleGenerator.h"

@interface PGThrowbackThursdayMemoryTitleGenerator : PGTitleGenerator <PGSpecBasedTitleGeneratorDelegate>

 {
    NSInteger _numberOfYearsAgo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithMomentNode:(id)arg0 numberOfYearsAgo:(NSInteger)arg1 titleGenerationContext:(id)arg2 ;
-(id)titleGenerator:(id)arg0 inputForArgument:(id)arg1 ;
-(void)_generateTitleAndSubtitleWithResult:(id)arg0 ;


@end


#endif