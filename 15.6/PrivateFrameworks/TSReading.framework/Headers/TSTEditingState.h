// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTEDITINGSTATE_H
#define TSTEDITINGSTATE_H

@class TSUPointerKeyDictionary, NSArray, TSKCommandController, TSTTextStatisticsTracker;
@protocol TSWPStorageObserver;


#import "TSPObject.h"
#import "TSTCell.h"
#import "TSTTableSelection.h"
#import "TSWPStorage.h"
#import "TSTSearchReference.h"
#import "TSTTableInfo.h"
#import "TSTTableModel.h"

@interface TSTEditingState : TSPObject <TSWPStorageObserver>

 {
    TSTCell *mEditingCell;
    ? mEditingCellID;
    int mEditingMode;
    TSTTableSelection *mSelection;
    TSTTableSelection *mSelectionReflectingEditingState;
    TSUPointerKeyDictionary *mColoredReferences;
    BOOL mCellWasEditedInCurrentSession;
}


@property (nonatomic) BOOL cellWasEditedInCurrentSession;
@property (readonly, nonatomic) NSArray *coloredReferences; // ivar: _coloredReferences
@property (readonly, nonatomic) TSKCommandController *commandController; // ivar: _commandController
@property (nonatomic, getter=isDispatchingPreflight) BOOL dispatchingPreflight; // ivar: _dispatchingPreflight
@property (retain, nonatomic) TSTCell *editingCell;
@property (nonatomic) ? editingCellID;
@property (nonatomic) BOOL editingCellInProxy; // ivar: mEditingCellInProxy
@property (readonly, nonatomic) ? editingCellRange;
@property (readonly, nonatomic) int editingMode;
@property (retain, nonatomic) TSWPStorage *editingStorage; // ivar: mEditingStorage
@property (nonatomic, getter=isEndingEditingDueToCancelOperation) BOOL endingEditingDueToCancelOperation; // ivar: mEndingEditingDueToCancelOperation
@property (nonatomic) unsigned char lastColumnHitByTap; // ivar: mLastColumnHitByTap
@property (nonatomic) ? lastEditingCellID; // ivar: _lastEditingCellID
@property (readonly, nonatomic) int previousEditingMode; // ivar: mPreviousEditingMode
@property (retain, nonatomic) TSTSearchReference *searchReference; // ivar: mSearchReference
@property (copy, nonatomic) TSTTableSelection *selection;
@property (nonatomic) TSTTableInfo *tableInfo; // ivar: mTableInfo
@property (readonly, nonatomic) TSTTableModel *tableModel;
@property (nonatomic) TSTTextStatisticsTracker *tracker; // ivar: mTracker


-(BOOL)p_shouldSetCellPostFlight;
-(id)initForPasteboardFromSourceInfo:(id)arg0 stylesheet:(id)arg1 ;
-(id)initWithTableInfo:(id)arg0 ;
-(id)prepareEditingStorageToEditCell:(struct ? )arg0 ;
-(id)storageForCellID:(struct ? )arg0 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)changeEditingMode:(int)arg0 ;
-(void)dealloc;
-(void)didEndEditingDueToCancelOperation;
-(void)p_performRichTextStorageDOLC:(id)arg0 newStorage:(id)arg1 ;
-(void)p_registerStorageObserver;
-(void)p_unregisterStorageObserver;
-(void)performEndRichTextEditing;
-(void)reloadValue;
-(void)reloadValueFromFocusedCell;
-(void)storage:(id)arg0 didChangeRange:(struct _NSRange )arg1 delta:(NSInteger)arg2 broadcastKind:(int)arg3 ;
-(void)willEndEditingDueToCancelOperation;


@end


#endif