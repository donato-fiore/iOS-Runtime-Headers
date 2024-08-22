// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICATTACHMENTTABLEMODEL_H
#define ICATTACHMENTTABLEMODEL_H



#import "ICAttachmentModel.h"
#import "ICTable.h"
#import "ICTableVersionedDocument.h"

@interface ICAttachmentTableModel : ICAttachmentModel

@property (readonly, nonatomic) ICTable *table;
@property (retain, nonatomic) ICTableVersionedDocument *tableDocument; // ivar: _tableDocument


+(id)contentInfoTextWithAttachmentCount:(NSUInteger)arg0 ;
+(id)tableFromAttributedString:(id)arg0 managedObjectContext:(id)arg1 replicaID:(id)arg2 ;
-(BOOL)isReadyToPresent;
-(BOOL)mergeWithMergeableData:(id)arg0 ;
-(BOOL)providesTextContentInNote;
-(id)localizedFallbackSubtitleIOS;
-(id)localizedFallbackSubtitleMac;
-(id)localizedFallbackTitle;
-(id)mergeableDataForCopying:(*id)arg0 ;
-(id)searchableTextContentInNote;
-(id)stringsAtRow:(NSUInteger)arg0 ;
-(id)textContentInNote;
-(void)attachmentAwakeFromFetch;
-(void)attachmentDidRefresh:(BOOL)arg0 ;
-(void)attachmentWillRefresh:(BOOL)arg0 ;
-(void)attachmentWillTurnIntoFault;
-(void)mergeTablePrimitiveData;
-(void)noteWillAddOrRemovePassword;
-(void)regenerateTextContentInNote;
-(void)removeTimestampsForReplicaID:(id)arg0 ;
-(void)replaceChildInlineAttachment:(id)arg0 withText:(id)arg1 ;
-(void)updateAfterLoadWithInlineAttachmentIdentifierMap:(id)arg0 ;
-(void)updateAttachmentByMergingWithTableData:(id)arg0 ;
-(void)willMarkAttachmentForDeletion;
-(void)writeMergeableData;


@end


#endif