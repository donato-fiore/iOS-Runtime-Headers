// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLCONTAINERRELATIONCHANGE_H
#define CPLCONTAINERRELATIONCHANGE_H

@class NSString;


#import "CPLRecordChange.h"
#import "CPLContainerRelation.h"

@interface CPLContainerRelationChange : CPLRecordChange

@property (copy, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (retain, nonatomic) CPLContainerRelation *relation; // ivar: _relation


+(BOOL)shouldReallyQuarantineRecord;
+(BOOL)supportsDeletion;
+(BOOL)supportsDirectDeletion;
+(Class)relatedRecordClass;
+(id)relationToContainerWithIdentifier:(id)arg0 ;
+(id)relationWithItemIdentifier:(id)arg0 containerIdentifier:(id)arg1 ;
+(id)relationWithItemScopedIdentifier:(id)arg0 containerIdentifier:(id)arg1 ;
-(BOOL)validateFullRecord;
-(id)compactedChangeWithRelatedChanges:(id)arg0 isOnlyChange:(BOOL)arg1 fullRecord:(id)arg2 usingStorageView:(id)arg3 ;
-(id)containerScopedIdentifier;
-(id)description;
-(id)itemScopedIdentifier;
-(id)relatedIdentifier;
-(id)scopedIdentifiersForMapping;
-(id)secondaryIdentifier;
-(id)translateToClientChangeUsingIDMapping:(id)arg0 error:(*id)arg1 ;
-(id)translateToCloudChangeUsingIDMapping:(id)arg0 error:(*id)arg1 ;
-(void)setContainerScopedIdentifier:(id)arg0 ;
-(void)setItemScopedIdentifier:(id)arg0 ;
-(void)setRelatedIdentifier:(id)arg0 ;
-(void)setSecondaryIdentifier:(id)arg0 ;


@end


#endif