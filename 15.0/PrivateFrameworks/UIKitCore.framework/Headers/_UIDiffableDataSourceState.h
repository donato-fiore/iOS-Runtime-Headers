// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDIFFABLEDATASOURCESTATE_H
#define _UIDIFFABLEDATASOURCESTATE_H

@class NSUUID, NSOrderedSet, NSString;
@protocol _UIDiffableDataSourceState, NSCopying, _UIDataSourceSnapshotTranslating;

#import <Foundation/Foundation.h>


@interface _UIDiffableDataSourceState : NSObject <_UIDiffableDataSourceState, NSCopying>

 {
    NSUUID *_generationID;
    NSOrderedSet *_identifiers;
    NSOrderedSet *_sections;
    id<_UIDataSourceSnapshotTranslating> *_dataSourceSnapshot;
    ? _stateFlags;
}


@property (readonly, nonatomic) NSObject<_UIDataSourceSnapshotTranslating> *dataSourceSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUUID *generationID;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSOrderedSet *identifiers;
@property (readonly, nonatomic) NSOrderedSet *sections;
@property (readonly) Class superclass;


-(BOOL)containsItemIdentifier:(id)arg0 ;
-(BOOL)containsSectionIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)indexForSectionIdentifier:(id)arg0 ;
-(NSInteger)indexOfItemIdentifier:(id)arg0 ;
-(NSInteger)indexOfSectionIdentifier:(id)arg0 ;
-(NSInteger)numberOfItems;
-(NSInteger)numberOfItemsInSection:(id)arg0 ;
-(NSInteger)numberOfSections;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)indexPathForItemIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithGenerationID:(id)arg0 identifiers:(id)arg1 sections:(id)arg2 dataSourceSnapshot:(id)arg3 ;
-(id)initWithGenerationID:(id)arg0 identifiers:(id)arg1 sections:(id)arg2 dataSourceSnapshot:(id)arg3 identifiersHaveGuaranteedPerformance:(BOOL)arg4 sectionsHaveGuaranteedPerformance:(BOOL)arg5 ;
-(id)initWithState:(id)arg0 ;
-(id)initWithStateAdvancingGenerationID:(id)arg0 ;
-(id)itemIdentifierForIndexPath:(id)arg0 ;
-(id)itemIdentifiers;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg0 ;
-(id)sectionIdentifierForIndex:(NSInteger)arg0 ;
-(id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg0 ;
-(id)sectionIdentifiers;
-(id)sectionIndexesForItemIndexRange:(struct _NSRange )arg0 ;
-(void)ensureOrderedSetsHaveGuaranteedPerformance;
-(void)validateIdentifiers;


@end


#endif