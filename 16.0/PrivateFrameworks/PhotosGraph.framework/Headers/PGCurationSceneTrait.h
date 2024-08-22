// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGCURATIONSCENETRAIT_H
#define PGCURATIONSCENETRAIT_H

@class CLSSceneConfidenceThresholdHelper, NSSet;


#import "PGCurationTrait.h"

@interface PGCurationSceneTrait : PGCurationTrait {
    CLSSceneConfidenceThresholdHelper *_helper;
}


@property (readonly) NSSet *sceneNames; // ivar: _sceneNames
@property (nonatomic) NSUInteger targetNumberOfMatches; // ivar: _targetNumberOfMatches


-(BOOL)isActive;
-(id)confidenceThresholdBySceneIdentifierWithCurationModel:(id)arg0 ;
-(id)initWithSceneNames:(id)arg0 ;


@end


#endif