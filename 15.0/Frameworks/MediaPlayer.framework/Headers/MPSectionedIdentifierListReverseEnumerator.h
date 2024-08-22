// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSECTIONEDIDENTIFIERLISTREVERSEENUMERATOR_H
#define MPSECTIONEDIDENTIFIERLISTREVERSEENUMERATOR_H

@class NSEnumerator, NSMutableArray;


#import "_MPSectionedIdentifierListProxyEntry.h"
#import "MPSectionedIdentifierListEntry.h"
#import "MPSectionedIdentifierList.h"

@interface MPSectionedIdentifierListReverseEnumerator : NSEnumerator {
    _MPSectionedIdentifierListProxyEntry *_startEntryProxy;
}


@property (retain, nonatomic) NSMutableArray *contexts; // ivar: _contexts
@property (retain, nonatomic) MPSectionedIdentifierListEntry *endEntry; // ivar: _endEntry
@property (retain, nonatomic) NSMutableArray *entriesToEmit; // ivar: _entriesToEmit
@property (retain, nonatomic) NSMutableArray *nextEmittableEnumerationResults; // ivar: _nextEmittableEnumerationResults
@property (nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) MPSectionedIdentifierList *sectionedIdentifierList; // ivar: _sectionedIdentifierList


-(id)_startEntryProxy;
-(id)initWithSectionedIdentifierList:(id)arg0 options:(NSUInteger)arg1 startEntry:(id)arg2 endEntry:(id)arg3 withExclusiveAccessToken:(id)arg4 ;
-(id)nextObject;
-(id)nextObjectWithExclusiveAccessToken:(id)arg0 ;


@end


#endif