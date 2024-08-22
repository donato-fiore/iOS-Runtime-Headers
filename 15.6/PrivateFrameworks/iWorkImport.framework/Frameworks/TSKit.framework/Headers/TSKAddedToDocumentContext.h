// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKADDEDTODOCUMENTCONTEXT_H
#define TSKADDEDTODOCUMENTCONTEXT_H

@class NSMutableArray;
@protocol TSKMultiTableRemapping;

#import <Foundation/Foundation.h>


@interface TSKAddedToDocumentContext : NSObject {
    NSMutableArray *mInsertedTableInfos;
}


@property (retain) NSObject<TSKMultiTableRemapping> *multiTableRemapper;


+(id)defaultContext;
+(id)dragCopyContext;
+(id)dragMoveContext;
+(id)exportFootnoteContext;
+(id)exportMergedHeaderContext;
+(id)importingContextWithImporterID:(id)arg0 ;
+(id)insertingPrototypeContext;
+(id)migrateStylesContext;
+(id)moveSectionContext;
+(id)movingContext;
+(id)pastingContext;
+(id)pastingMatchStyleContext;
+(id)preserveParentStorageContext;
+(id)textBoxLinkageContext;
+(id)unarchivingContext;
+(id)undoDeleteContext;
+(id)unhidingContext;
-(BOOL)autoUpdateSmartFields;
-(BOOL)invokeDOLC;
-(BOOL)matchStyle;
-(BOOL)preserveChangeTracking;
-(BOOL)preserveParentStorage;
-(BOOL)syncChanges;
-(BOOL)uniqueBookmarks;
-(BOOL)wasDragMoved;
-(BOOL)wasDragOperation;
-(BOOL)wasImported;
-(BOOL)wasMigratingStyles;
-(BOOL)wasMoved;
-(BOOL)wasPasted;
-(BOOL)wasUnarchived;
-(BOOL)wasUndoDelete;
-(BOOL)wasUnhidden;
-(id)addedDrawables;
-(id)importerID;
-(id)insertedTableInfos;
-(id)undoContext;
-(void)addDrawable:(id)arg0 ;
-(void)addDrawables:(id)arg0 ;
-(void)addInsertedTableInfo:(id)arg0 ;


@end


#endif