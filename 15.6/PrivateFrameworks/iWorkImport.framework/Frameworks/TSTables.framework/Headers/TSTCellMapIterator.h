// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCELLMAPITERATOR_H
#define TSTCELLMAPITERATOR_H


#import <Foundation/Foundation.h>

#import "TSTCellMap.h"
#import "TSTCellUIDIterator.h"
#import "TSTCell.h"

@interface TSTCellMapIterator : NSObject {
    TSTCellMap *_cellMap;
    TSTCellUIDIterator *_cellUIDIterator;
    NSUInteger _index;
    BOOL _oneToMany;
    TSKUIDStructCoord _currentCellUID;
    TSTCell *_currentCell;
}




-(id)currentCell;
-(id)initWithCellMap:(id)arg0 ;
-(struct TSKUIDStructCoord *)currentCellUID;
-(struct pair<TSTCell *, TSKUIDStructCoord> )nextCellAndCellUID;


@end


#endif