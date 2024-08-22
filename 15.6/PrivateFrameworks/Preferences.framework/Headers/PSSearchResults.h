// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSSEARCHRESULTS_H
#define PSSEARCHRESULTS_H

@class NSMutableArray, NSMutableSet, NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PSSearchResults : NSObject <NSCopying>

 {
    NSMutableArray *_sectionEntries;
    NSMutableSet *_explicitlyAddedSectionEntries;
    NSMutableDictionary *_entriesBySection;
    BOOL _needsSorting;
}


@property (copy, nonatomic) id *entryComparator; // ivar: _entryComparator
@property (copy, nonatomic) id *sectionComparator; // ivar: _sectionComparator
@property (nonatomic) BOOL treatSectionEntriesAsRegularEntries; // ivar: _treatSectionEntriesAsRegularEntries


-(BOOL)removeEntry:(id)arg0 ;
-(NSUInteger)numberOfEntriesInSectionAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSectionEntries;
-(NSUInteger)removeEntries:(id)arg0 ;
-(NSUInteger)totalNumberOfEntries;
-(id)_initForCopyWithSectionEntries:(id)arg0 entriesBySection:(id)arg1 explicitlyAddedSectionEntries:(id)arg2 ;
-(id)allSectionEntries;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)entriesInSectionAtIndex:(NSUInteger)arg0 ;
-(id)entryAtIndexPath:(id)arg0 ;
-(id)init;
-(id)resultsByMergingWithResults:(id)arg0 ;
-(id)sectionEntryAtIndex:(NSUInteger)arg0 ;
-(void)addEntries:(id)arg0 ;
-(void)addEntry:(id)arg0 ;
-(void)mergeWithResults:(id)arg0 ;
-(void)sortResults;


@end


#endif