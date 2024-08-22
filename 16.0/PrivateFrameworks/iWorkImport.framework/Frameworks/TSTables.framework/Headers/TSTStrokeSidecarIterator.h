// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTSTROKESIDECARITERATOR_H
#define TSTSTROKESIDECARITERATOR_H

@class NSString;
@protocol TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating;

#import <Foundation/Foundation.h>

#import "TSTCellRegion.h"
#import "TSTStrokeSidecar.h"

@interface TSTStrokeSidecarIterator : NSObject <TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating>



@property (nonatomic) TSUCellCoord curCellID; // ivar: _curCellID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSTCellRegion *region; // ivar: _region
@property (readonly, nonatomic) NSObject<TSTCellRegionIterating> *regionIterator; // ivar: _regionIterator
@property (readonly, nonatomic) TSTStrokeSidecar *strokeSidecar; // ivar: _strokeSidecar
@property (readonly) Class superclass;


+(id)p_filterRegion:(id)arg0 strokeSidecar:(id)arg1 ;
-(id)initWithStrokeSidecar:(id)arg0 region:(id)arg1 ;
-(struct TSUCellCoord )advanceToCellID:(struct TSUCellCoord )arg0 ;
-(struct TSUCellCoord )getNext;
-(void)terminate;
-(void)updateCellData:(id)arg0 ;
-(void)updateFormulaForCellData:(id)arg0 ;


@end


#endif