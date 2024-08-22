// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTABLE_H
#define ICTABLE_H

@class NSMutableDictionary;
@protocol ICTableDelegate;


#import "CRTable.h"
#import "ICTableCellChangeNotifier.h"
#import "CRTTCompatibleDocument.h"

@interface ICTable : CRTable

@property (readonly, nonatomic) ICTableCellChangeNotifier *cellChangeNotifier; // ivar: _cellChangeNotifier
@property (readonly, nonatomic) NSMutableDictionary *columnTextStorages; // ivar: _columnTextStorages
@property (weak, nonatomic) NSObject<ICTableDelegate> *delegate;
@property (readonly, nonatomic) CRTTCompatibleDocument *ttDocument;


+(void)registerWithCRCoder;
-(BOOL)columnIsEmptyAtIndex:(NSUInteger)arg0 ;
-(BOOL)isEmptyAtColumnIdentifiers:(id)arg0 rowIdentifiers:(id)arg1 ;
-(BOOL)isEmptyAtColumnIndexes:(id)arg0 rowIndexes:(id)arg1 ;
-(BOOL)rowIsEmptyAtIndex:(NSUInteger)arg0 ;
-(id)copyIntoNewDocumentWithReplicaID:(id)arg0 ;
-(id)defaultContentAtColumn:(id)arg0 row:(id)arg1 ;
-(id)mergeableStringForColumnID:(id)arg0 rowID:(id)arg1 ;
-(id)stringForColumnID:(id)arg0 rowID:(id)arg1 ;
-(id)stringForColumnIndex:(NSUInteger)arg0 rowIndex:(NSUInteger)arg1 ;
-(id)subtableWithDocument:(id)arg0 forSelectionContainingColumnIndices:(id)arg1 rowIndices:(id)arg2 ;
-(void)setAttributedString:(id)arg0 columnIndex:(NSUInteger)arg1 rowIndex:(NSUInteger)arg2 ;
-(void)undoablyInsertContents:(id)arg0 atColumn:(id)arg1 ;
-(void)undoablyRemoveContentsOfColumn:(id)arg0 ;


@end


#endif