// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTHEADERNAMESUBSET_H
#define TSTHEADERNAMESUBSET_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TSTHeaderNameMgr.h"

@interface TSTHeaderNameSubset : NSObject {
    TSTHeaderNameMgr *_hnm;
    unordered_map<NSString *, TSCECellRefSet, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, TSCECellRefSet>>> _stringsInHeaderCells;
    unordered_map<NSString *, TSCECellRefSet, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, TSCECellRefSet>>> _prefixStringsInHeaderCells;
}


@property (nonatomic) BOOL includesPrefixes; // ivar: _includesPrefixes
@property (readonly, nonatomic) TSKUIDStruct limitedToTableUID; // ivar: _limitedToTableUID
@property (readonly, nonatomic) NSString *originalFullReferenceString; // ivar: _originalFullReferenceString


-(id)description;
-(id)initWithHeaderNameMgr:(id)arg0 limitToTableUID:(struct TSKUIDStruct *)arg1 ;
-(struct TSCECellRefSet )headerCellsExactlyMatching:(id)arg0 ;
-(struct TSCECellRefSet )headerCellsMatchingPrefix:(id)arg0 ;
-(void)loadSubsetWithExactMatches:(*void)arg0 prefixMatches:(*void)arg1 ;


@end


#endif