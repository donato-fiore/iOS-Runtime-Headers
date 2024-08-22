// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGCURATIONINDEXSETTRAIT_H
#define PGCURATIONINDEXSETTRAIT_H

@class NSIndexSet, NSDictionary;


#import "PGCurationTrait.h"

@interface PGCurationIndexSetTrait : PGCurationTrait

@property (readonly, nonatomic) NSIndexSet *indexSet; // ivar: _indexSet
@property (nonatomic) NSUInteger targetNumberOfMatches; // ivar: _targetNumberOfMatches
@property (retain, nonatomic) NSDictionary *thresholdByIdentifier; // ivar: _thresholdByIdentifier


-(BOOL)isActive;
-(CGFloat)thresholdForSceneIdentifier:(unsigned int)arg0 ;
-(id)debugDescription;
-(id)initWithIndexSet:(id)arg0 ;
-(id)niceDescription;


@end


#endif