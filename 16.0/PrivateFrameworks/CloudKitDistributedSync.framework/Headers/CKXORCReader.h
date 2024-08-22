// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKXORCREADER_H
#define CKXORCREADER_H

@protocol CKXReaderProtocol, CKXORCHelpers;


#import "CKXReaderBase.h"
#import "CKXORCReaderOptions.h"
#import "CKDSReadableStorage.h"

@interface CKXORCReader : CKXReaderBase <CKXReaderProtocol>

 {
    unique_ptr<orc::Reader, std::default_delete<orc::Reader>> _reader;
    unordered_map<unsigned long long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>>> _structToReaderBatchPair;
    unordered_map<unsigned long long, NSIndexSet *, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, NSIndexSet *>>> _rowsForTopLevelContainerStructs;
}


@property (readonly, nonatomic) NSObject<CKXORCHelpers> *helpers; // ivar: _helpers
@property (nonatomic) NSUInteger loadCount; // ivar: _loadCount
@property (readonly, nonatomic) CKXORCReaderOptions *options; // ivar: _options
@property (retain, nonatomic) CKDSReadableStorage *storage; // ivar: _storage


-(*void)listColumnForReference:(NSUInteger)arg0 ;
-(*void)rootColumnForStruct:(NSUInteger)arg0 ;
-(*void)structColumnForStruct:(NSUInteger)arg0 ;
-(*void)structReferenceColumnForReference:(NSUInteger)arg0 ;
-(*void)valueColumnForField:(NSUInteger)arg0 ;
-(BOOL)_setInputWithError:(*id)arg0 ;
-(BOOL)createReaderIfNecessaryWithError:(*id)arg0 ;
-(BOOL)loadBatchWithRow:(NSUInteger)arg0 forStruct:(NSUInteger)arg1 ;
-(BOOL)referenceIsNull:(NSUInteger)arg0 inStruct:(struct ? )arg1 ;
-(BOOL)setReadableStorage:(id)arg0 error:(*id)arg1 ;
-(BOOL)size:(*NSUInteger)arg0 error:(*id)arg1 ;
-(NSInteger)lengthForList:(struct ? )arg0 ;
-(NSUInteger)offsetInCurrentBatchForRow:(NSUInteger)arg0 forStruct:(NSUInteger)arg1 ;
-(NSUInteger)valueSizeForField:(NSUInteger)arg0 ;
-(id)initWithSchema:(id)arg0 ;
-(id)initWithSchema:(id)arg0 helpers:(id)arg1 options:(id)arg2 ;
-(id)rowsForStructColumn:(NSUInteger)arg0 ;
-(struct ? )referencedListForReference:(NSUInteger)arg0 inStruct:(struct ? )arg1 ;
-(struct ? )referencedStructAtIndex:(NSInteger)arg0 inList:(struct ? )arg1 ;
-(struct ? )referencedStructForReference:(NSUInteger)arg0 inStruct:(struct ? )arg1 ;
-(struct ? )rootStructWithType:(NSUInteger)arg0 ;
-(void)copyData:(*void)arg0 forField:(NSUInteger)arg1 inStruct:(struct ? )arg2 ;
-(void)copyData:(*void)arg0 forList:(struct ? )arg1 ;
-(void)createRowReaderForStruct:(NSUInteger)arg0 ;


@end


#endif