// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLEDATASTORE_H
#define TSTTABLEDATASTORE_H



#import "TSPContainedObject.h"
#import "TSTTileIDKeyDict.h"
#import "TSTTableHeaderStorage.h"
#import "TSPLazyReference.h"
#import "TSTCustomFormatList.h"
#import "TSTMergeRegionMap.h"

@interface TSTTableDataStore : TSPContainedObject {
    *TSTTableRBTreeNode_s mColumnTileIndex;
    *TSTTableRBTreeNode_s mRowTileIndex;
    TSTTileIDKeyDict *mTileStorage;
    TSTTableHeaderStorage *mRowHeaderStorage;
    TSPLazyReference *mColumnHeaderStorageReference;
    TSPLazyReference *mConditionalStyleSetTableReference;
    TSPLazyReference *mStringTableReference;
    TSPLazyReference *mStyleTableReference;
    TSPLazyReference *mFormulaTableReference;
    TSPLazyReference *mFormulaErrorTableReference;
    TSPLazyReference *mRichTextPayloadTableReference;
    TSPLazyReference *mFormatTableReference;
    TSPLazyReference *mMultipleChoiceListFormatTableReference;
    TSPLazyReference *mCommentStorageTableReference;
    TSTCustomFormatList *mPasteboardCustomFormatList;
    unsigned short mNextRowStripID;
    unsigned short mNextColumnStripID;
    TSTMergeRegionMap *mMergedCellRanges;
    unsigned int mCellCount;
    BOOL mCellCountValid;
    BOOL mDrawableIsBeingCopied;
    unsigned int mStorageVersion;
}




-(BOOL)needToUpgradeCellStorage;
-(id)initWithOwner:(id)arg0 ;
-(void)dealloc;
-(void)debugDump;
-(void)p_updateTileStorageToCurrentVersion;
-(void)setDrawableIsBeingCopied:(BOOL)arg0 ;
-(void)setStorageParentToInfo:(id)arg0 ;
-(void)upgradeDataStoreCellStorage;
-(void)validate;


@end


#endif