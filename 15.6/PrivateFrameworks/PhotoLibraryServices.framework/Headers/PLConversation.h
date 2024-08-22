// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCONVERSATION_H
#define PLCONVERSATION_H

@class NSSet, NSString;
@protocol PLCreateFromSearchableItem;


#import "PLGenericAlbum.h"

@interface PLConversation : PLGenericAlbum <PLCreateFromSearchableItem>



@property (nonatomic) BOOL albumShouldBeAutomaticallyDeleted; // ivar: _albumShouldBeAutomaticallyDeleted
@property (retain, nonatomic) NSSet *assets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsPersistenceUpdate; // ivar: _needsPersistenceUpdate
@property (readonly) Class superclass;
@property (nonatomic) unsigned short syndicate;


+(id)albumWithConversationID:(id)arg0 inLibrary:(id)arg1 ;
+(id)albumsWithConversationIDs:(id)arg0 inLibrary:(id)arg1 ;
+(id)createOrUpdateObjectFromSearchableItem:(id)arg0 library:(id)arg1 createIfNeeded:(BOOL)arg2 didCreate:(*BOOL)arg3 error:(*id)arg4 ;
+(id)entityName;
+(id)insertNewConversationAlbumWithConversationID:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(BOOL)_isAssetIncludedInConversationDates:(id)arg0 ;
-(BOOL)_isDateAfterEndDate:(id)arg0 ;
-(BOOL)_isDateBeforeStartDate:(id)arg0 ;
-(BOOL)canPerformEditOperation:(NSUInteger)arg0 ;
-(BOOL)isEmpty;
-(NSUInteger)count;
-(id)_orderedBatchedAssets;
-(id)mutableAssets;
-(void)_updateAssetSyndicationState:(unsigned short)arg0 ;
-(void)_updateEndDate:(id)arg0 ;
-(void)_updateStartDate:(id)arg0 ;
-(void)updateConversationDatesFromAddedAsset:(id)arg0 ;
-(void)willSave;


@end


#endif