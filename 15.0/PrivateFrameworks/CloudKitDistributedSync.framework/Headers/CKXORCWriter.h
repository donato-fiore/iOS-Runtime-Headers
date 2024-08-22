// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKXORCWRITER_H
#define CKXORCWRITER_H

@protocol CKXWriterProtocol, CKXORCHelpers;


#import "CKXWriterBase.h"
#import "CKXORCWriterOptions.h"

@interface CKXORCWriter : CKXWriterBase <CKXWriterProtocol>

 {
    unique_ptr<orc::Writer, std::default_delete<orc::Writer>> _writer;
    unique_ptr<orc::OutputStream, std::default_delete<orc::OutputStream>> _outputStream;
    unique_ptr<orc::ColumnVectorBatch, std::default_delete<orc::ColumnVectorBatch>> _currentBatch;
    set<CKXStructInstance, std::less<CKXStructInstance>, std::allocator<CKXStructInstance>> _uncommittedStructs;
}


@property (readonly, nonatomic) NSObject<CKXORCHelpers> *helpers; // ivar: _helpers
@property (readonly, nonatomic) CKXORCWriterOptions *options; // ivar: _options
@property (nonatomic) NSUInteger rootStructToken; // ivar: _rootStructToken
@property (nonatomic) NSUInteger startingRowForCurrentBatch; // ivar: _startingRowForCurrentBatch


-(*void)listColumnForReference:(NSUInteger)arg0 ;
-(*void)rootColumn;
-(*void)structColumnForStruct:(NSUInteger)arg0 ;
-(*void)structReferenceColumnForReference:(NSUInteger)arg0 ;
-(*void)valueColumnForField:(NSUInteger)arg0 ;
-(BOOL)growCurrentBatchToIncludeBatchOffset:(NSUInteger)arg0 ;
-(BOOL)growCurrentBatchToIncludeRow:(NSUInteger)arg0 ;
-(NSUInteger)offsetInCurrentBatchForRow:(NSUInteger)arg0 ;
-(id)flush;
-(id)initWithSchema:(id)arg0 ;
-(id)initWithSchema:(id)arg0 helpers:(id)arg1 options:(id)arg2 ;
-(struct ? )appendRowForStruct:(NSUInteger)arg0 ;
-(struct ? )beginAppendedListStructInList:(struct ? )arg0 ;
-(struct ? )beginReferencedListForReference:(NSUInteger)arg0 inStruct:(struct ? )arg1 ;
-(struct ? )beginReferencedStructForReference:(NSUInteger)arg0 inStruct:(struct ? )arg1 ;
-(struct ? )beginRootStructWithType:(NSUInteger)arg0 ;
-(void)commitBatch;
-(void)commitBatchIfNeeded;
-(void)commitStruct:(struct ? )arg0 ;
-(void)createWriter;
-(void)enumerateAllColumnsWithBlock:(id)arg0 ;
-(void)expandColumn:(*void)arg0 includingBatchOffset:(NSUInteger)arg1 ;
-(void)expandColumn:(*void)arg0 includingRow:(NSUInteger)arg1 ;
-(void)resetColumnNulls:(*void)arg0 inRange:(struct _NSRange )arg1 ;
-(void)setData:(*void)arg0 withEncoding:(char *)arg1 forField:(NSUInteger)arg2 inStruct:(struct ? )arg3 ;
-(void)setData:(*void)arg0 withLength:(NSUInteger)arg1 forList:(struct ? )arg2 ;
-(void)updateNumberOfElementsForCurrentBatch;


@end


#endif