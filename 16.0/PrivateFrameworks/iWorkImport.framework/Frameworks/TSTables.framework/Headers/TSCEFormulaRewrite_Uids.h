// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEFORMULAREWRITE_UIDS_H
#define TSCEFORMULAREWRITE_UIDS_H

@class NSIndexSet;

#import <Foundation/Foundation.h>


@interface TSCEFormulaRewrite_Uids : NSObject {
    unordered_map<TSKUIDStruct, unsigned int, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, unsigned int>>> _indexesForUids;
    unordered_map<unsigned int, TSKUIDStruct, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, TSKUIDStruct>>> _uidsForIndexes;
}


@property (readonly) NSIndexSet *indexes; // ivar: _indexes
@property (readonly) *void uids; // ivar: _uids
@property (readonly) *void viewOrderUids; // ivar: _viewOrderUids


-(?)uidsForIndexes;
-(BOOL)containsIndex:(unsigned int)arg0 ;
-(id)description;
-(id)indexSetBySubtractingOurIndexesFromIndexSet:(id)arg0 ;
-(id)initFromMessage:(*void)arg0 ;
-(id)initWithUids:(*void)arg0 ;
-(id)initWithUids:(*void)arg0 atIndexes:(*void)arg1 ;
-(struct TSKUIDStruct )uidForIndex:(unsigned int)arg0 ;
-(unsigned int)rowIndexForUid:(struct TSKUIDStruct *)arg0 ;
-(unsigned short)columnIndexForUid:(struct TSKUIDStruct *)arg0 ;
-(void)loadIndexesForTable:(id)arg0 isRows:(BOOL)arg1 shuffleMap:(id)arg2 ;
-(void)saveToMessage:(*void)arg0 ;
-(void)unloadIndexes;


@end


#endif