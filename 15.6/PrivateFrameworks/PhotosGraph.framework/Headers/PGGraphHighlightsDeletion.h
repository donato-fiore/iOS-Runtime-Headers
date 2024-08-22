// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHHIGHLIGHTSDELETION_H
#define PGGRAPHHIGHLIGHTSDELETION_H

@class NSSet;


#import "PGGraphChange.h"

@interface PGGraphHighlightsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *highlightUUIDs; // ivar: _highlightUUIDs


-(NSUInteger)changeCount;
-(NSUInteger)type;
-(id)description;
-(id)initWithHighlightUUIDs:(id)arg0 ;


@end


#endif