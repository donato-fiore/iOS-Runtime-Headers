// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGDEJUNKERDEDUPER_CLSINVESTIGATIONITEM_H
#define PGDEJUNKERDEDUPER_CLSINVESTIGATIONITEM_H

@class NSDictionary, NSSet;


#import "PGDejunkerDeduper.h"

@interface PGDejunkerDeduper_CLSInvestigationItem : PGDejunkerDeduper {
    NSDictionary *_personLocalIdentifiersByItemIdentifier;
    NSDictionary *_peopleScenesByItemIdentifier;
    NSDictionary *_averageFaceQualityByItemIdentifier;
}


@property (retain, nonatomic) NSSet *verifiedPersonLocalIdentifiers; // ivar: _verifiedPersonLocalIdentifiers


-(BOOL)isJunkForItem:(id)arg0 ;
-(BOOL)item:(id)arg0 isStrongRequiredWithOptions:(id)arg1 ;
-(BOOL)item:(id)arg0 isWeaklyRequiredWithOptions:(id)arg1 ;
-(id)bestItemInItems:(id)arg0 options:(id)arg1 ;
-(id)bestItemsInItems:(id)arg0 options:(id)arg1 ;
-(id)debugPersonStringForItem:(id)arg0 ;
-(id)dejunkedDedupedItemIdentifiersWithItems:(id)arg0 options:(id)arg1 debugInfo:(*id)arg2 ;
-(id)dejunkedDedupedItemsInItems:(id)arg0 options:(id)arg1 debugInfo:(id)arg2 progressBlock:(id)arg3 ;
-(id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)arg0 ;
-(id)featureWithItem:(id)arg0 ;
-(id)itemsSortedByScoreWithItems:(id)arg0 options:(id)arg1 ;
-(id)requiredItemsInItems:(id)arg0 options:(id)arg1 containStronglyRequiredItems:(*BOOL)arg2 ;
-(void)_buildCachesWithItems:(id)arg0 options:(id)arg1 ;


@end


#endif