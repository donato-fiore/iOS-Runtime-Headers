// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTARCHIVEDCELLSELECTION_H
#define TSTARCHIVEDCELLSELECTION_H

@class TSPObject, NSString, TSKSelection;
@protocol TSKArchivedSelection;


#import "TSTCellSelection.h"
#import "TSTCellRegion.h"

@interface TSTArchivedCellSelection : TSPObject <TSKArchivedSelection>

 {
    TSTCellSelection *_cellSelection;
    BOOL _isLegacyBasedIDSelection;
    TSUCellCoord _legacyAnchorCellID;
    TSUCellCoord _legacyCursorCellID;
    TSTCellRegion *_legacyCellRegion;
    TSTCellRegion *_legacyBaseCellRegion;
    NSInteger _selectionType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSKSelection *selection;
@property (readonly) Class superclass;


-(id)selectionWithParent:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif