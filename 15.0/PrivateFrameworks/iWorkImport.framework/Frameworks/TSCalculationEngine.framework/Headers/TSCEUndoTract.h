// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCEUNDOTRACT_H
#define TSCEUNDOTRACT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCEUndoTract : NSObject <NSCopying>



@property (readonly) *void columnUids; // ivar: _columnUids
@property (nonatomic) BOOL isRangeRef; // ivar: _isRangeRef
@property (nonatomic) BOOL preserveRectangularRange; // ivar: _preserveRectangularRange
@property (nonatomic) unsigned char purpose; // ivar: _purpose
@property (readonly) *void rowUids; // ivar: _rowUids
@property (readonly, nonatomic) BOOL spansAllColumns;
@property (readonly, nonatomic) BOOL spansAllRows;


+(BOOL)p_remapUidVector:(*void)arg0 usingUidMap:(*void)arg1 clearIfMissing:(BOOL)arg2 ;
+(id)stringForPurpose:(unsigned char)arg0 ;
+(void)saveToArchive:(*void)arg0 columnUids:(*void)arg1 rowUids:(*void)arg2 purpose:(unsigned char)arg3 isRangeRef:(BOOL)arg4 preserveRectangularRange:(BOOL)arg5 ;
+(void)saveToArchive:(*void)arg0 tsuColumnUids:(*void)arg1 tsuRowUids:(*void)arg2 purpose:(unsigned char)arg3 isRangeRef:(BOOL)arg4 preserveRectangularRange:(BOOL)arg5 ;
-(BOOL)remapUsingColumnUidMap:(*void)arg0 rowUidMap:(*void)arg1 clearIfMissing:(BOOL)arg2 ;
-(BOOL)remapUsingUidMap:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithColumnUid:(struct TSKUIDStruct )arg0 rowUid:(struct TSKUIDStruct )arg1 purpose:(unsigned char)arg2 ;
-(id)initWithColumnUids:(*void)arg0 rowUids:(*void)arg1 purpose:(unsigned char)arg2 ;
-(id)initWithPurpose:(unsigned char)arg0 ;
-(void)appendColumnUid:(struct TSKUIDStruct )arg0 rowUid:(struct TSKUIDStruct )arg1 ;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif