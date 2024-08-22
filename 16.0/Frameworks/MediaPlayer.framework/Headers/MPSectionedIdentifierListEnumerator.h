// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSECTIONEDIDENTIFIERLISTENUMERATOR_H
#define MPSECTIONEDIDENTIFIERLISTENUMERATOR_H

@class NSEnumerator, NSMutableArray;


#import "MPSectionedIdentifierListEntry.h"
#import "MPSectionedIdentifierList.h"

@interface MPSectionedIdentifierListEnumerator : NSEnumerator

@property (retain, nonatomic) NSMutableArray *contexts; // ivar: _contexts
@property (retain, nonatomic) MPSectionedIdentifierListEntry *endEntry; // ivar: _endEntry
@property (retain, nonatomic) NSMutableArray *nextEmittableEnumerationResults; // ivar: _nextEmittableEnumerationResults
@property (nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) MPSectionedIdentifierList *sectionedIdentifierList; // ivar: _sectionedIdentifierList


-(id)initWithSectionedIdentifierList:(id)arg0 options:(NSUInteger)arg1 startEntry:(id)arg2 endEntry:(id)arg3 withExclusiveAccessToken:(id)arg4 ;
-(id)nextObject;
-(id)nextObjectWithExclusiveAccessToken:(id)arg0 ;


@end


#endif