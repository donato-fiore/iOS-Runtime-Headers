// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTIMPORTWARNINGSETBYCELLREF_H
#define TSTIMPORTWARNINGSETBYCELLREF_H


#import <Foundation/Foundation.h>


@interface TSTImportWarningSetByCellRef : NSObject {
    unordered_map<TSCECellRef, TSTImportWarningSet *, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<std::pair<const TSCECellRef, TSTImportWarningSet *>>> _warningSetForCoordinate;
    ? _coordinates;
}


@property (readonly) NSUInteger count;


-(id)initFromArchive:(*void)arg0 ;
-(id)warningSetAtCellRef:(struct TSCECellRef *)arg0 ;
-(struct TSCECellRef )cellRefForIndex:(NSUInteger)arg0 ;
-(void)addWarning:(id)arg0 atCellRef:(struct TSCECellRef *)arg1 ;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif