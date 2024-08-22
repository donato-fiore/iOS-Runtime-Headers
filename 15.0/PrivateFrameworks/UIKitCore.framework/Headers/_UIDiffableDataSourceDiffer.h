// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDIFFABLEDATASOURCEDIFFER_H
#define _UIDIFFABLEDATASOURCEDIFFER_H

@class NSHashTable, NSIndexSet, NSArray;
@protocol _UIDiffableDataSourceDiffer, _UIDiffableDataSourceState;

#import <Foundation/Foundation.h>

#import "_UIIdentifierDiffer.h"

@interface _UIDiffableDataSourceDiffer : NSObject <_UIDiffableDataSourceDiffer>



@property (retain, nonatomic) NSHashTable *affectedSectionIdentifiers; // ivar: _affectedSectionIdentifiers
@property (retain, nonatomic) NSObject<_UIDiffableDataSourceState> *afterDataSourceState; // ivar: _afterDataSourceState
@property (retain, nonatomic) NSObject<_UIDiffableDataSourceState> *beforeDataSourceState; // ivar: _beforeDataSourceState
@property (retain, nonatomic) NSIndexSet *deletedSections; // ivar: _deletedSections
@property (readonly, nonatomic) BOOL hasDifferences;
@property (retain, nonatomic) NSIndexSet *insertedSections; // ivar: _insertedSections
@property (retain, nonatomic) _UIIdentifierDiffer *itemIdentifierDiffer; // ivar: _itemIdentifierDiffer
@property (retain, nonatomic) _UIIdentifierDiffer *sectionIdentifierDiffer; // ivar: _sectionIdentifierDiffer
@property (readonly, nonatomic) BOOL snapshotsAreRelated;
@property (retain, nonatomic) NSArray *updates; // ivar: _updates


+(id)differWithBeforeDataSourceState:(id)arg0 afterDataSourceState:(id)arg1 ;
+(id)differWithBeforeDataSourceState:(id)arg0 afterDataSourceState:(id)arg1 itemIdentifierDiffer:(id)arg2 ;
-(BOOL)_verifyForUpdates:(id)arg0 ;
-(id)_computeSectionBoundaryMovesForItemDiffer:(id)arg0 ;
-(id)_computeUpdatesForIdentifierBasedDiff;
-(id)_itemUpdatesForDiffResults:(id)arg0 sectionBoundaryMoves:(id)arg1 deletedSections:(id)arg2 insertedSections:(id)arg3 ;
-(id)_sectionUpdatesForDiffResults:(id)arg0 deletedSections:(id)arg1 insertedSections:(id)arg2 ;
-(id)description;
-(id)initWithBeforeDataSource:(id)arg0 afterDataSource:(id)arg1 itemIdentifierDiffer:(id)arg2 ;
-(void)_computeUpdates;


@end


#endif