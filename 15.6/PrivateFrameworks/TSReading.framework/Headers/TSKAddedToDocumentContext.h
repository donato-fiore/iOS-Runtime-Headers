// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKADDEDTODOCUMENTCONTEXT_H
#define TSKADDEDTODOCUMENTCONTEXT_H


#import <Foundation/Foundation.h>


@interface TSKAddedToDocumentContext : NSObject



+(id)changeTrackingSubstorageForCopyContext;
+(id)dragCopyContext;
+(id)dragMoveContext;
+(id)exportFootnoteContext;
+(id)importingContextWithImporterID:(id)arg0 ;
+(id)importingMasterTemplateContextWithImporterID:(id)arg0 ;
+(id)insertingPrototypeContext;
+(id)movingContext;
+(id)pastingContext;
+(id)pastingMatchStyleContext;
+(id)unarchivingContext;
+(id)undoDeleteContext;
+(id)unhidingContext;
-(BOOL)autoUpdateSmartFields;
-(BOOL)changeTrackingSubstorage;
-(BOOL)exportingFootnotes;
-(BOOL)invokeDOLC;
-(BOOL)matchStyle;
-(BOOL)syncChanges;
-(BOOL)uniqueBookmarks;
-(BOOL)wasDragMoved;
-(BOOL)wasDragOperation;
-(BOOL)wasImported;
-(BOOL)wasImportedFromMasterTemplate;
-(BOOL)wasMoved;
-(BOOL)wasPasted;
-(BOOL)wasUnarchived;
-(BOOL)wasUndoDelete;
-(BOOL)wasUnhidden;
-(id)importerID;
-(id)undoContext;
-(struct __CFDictionary *)tableIDMap;
-(void)setTableIDMap:(struct __CFDictionary *)arg0 ;


@end


#endif