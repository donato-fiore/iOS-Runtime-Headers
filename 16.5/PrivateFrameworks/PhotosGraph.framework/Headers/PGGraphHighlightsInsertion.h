// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHHIGHLIGHTSINSERTION_H
#define PGGRAPHHIGHLIGHTSINSERTION_H

@class NSSet;


#import "PGGraphChange.h"

@interface PGGraphHighlightsInsertion : PGGraphChange

@property (readonly, nonatomic) NSSet *highlightUUIDs; // ivar: _highlightUUIDs
@property (readonly, nonatomic) NSSet *highlights; // ivar: _highlights


-(NSUInteger)changeCount;
-(NSUInteger)type;
-(id)description;
-(id)initWithHighlightUUIDs:(id)arg0 ;
-(id)initWithHighlights:(id)arg0 ;


@end


#endif