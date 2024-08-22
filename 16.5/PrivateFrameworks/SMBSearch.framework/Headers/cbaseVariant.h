// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBASEVARIANT_H
#define CBASEVARIANT_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "vtSafeArray.h"
#import "utf16leData.h"
#import "vtVector.h"

@interface cbaseVariant : NSObject

@property (retain) vtSafeArray *arrObj; // ivar: _arrObj
@property (readonly, retain) NSNumber *scalarValue; // ivar: _scalarValue
@property (readonly, retain) utf16leData *strData; // ivar: _strData
@property (readonly) unsigned char vData1; // ivar: _vData1
@property (readonly) unsigned char vData2; // ivar: _vData2
@property (readonly) unsigned short vType; // ivar: _vType
@property (retain) vtVector *vectObj; // ivar: _vectObj


-(id)init;
-(int)encodeArray:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;
-(int)encodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;
-(int)encodeIntArray:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;
-(int)encodeIntVector:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;
-(int)encodeStrArray:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;
-(int)encodeStrVector:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;
-(int)encodeVector:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;
-(int)setArrayWithType:(unsigned short)arg0 ValueArray:(id)arg1 ;
-(int)setIntArrayType:(unsigned int)arg0 ValueArray:(id)arg1 ;
-(int)setIntVectorType:(unsigned int)arg0 ValueArray:(id)arg1 ;
-(int)setScalarType:(unsigned short)arg0 ScalarValue:(id)arg1 ;
-(int)setStrArrayType:(unsigned short)arg0 ValueArray:(id)arg1 ;
-(int)setStrVectorType:(unsigned short)arg0 ValueArray:(id)arg1 ;
-(int)setStringType:(unsigned short)arg0 UTF8Str:(id)arg1 ;
-(int)setVectorWithType:(unsigned short)arg0 ValueArray:(id)arg1 ;


@end


#endif