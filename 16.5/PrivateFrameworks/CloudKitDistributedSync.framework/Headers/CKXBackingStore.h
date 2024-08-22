// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKXBACKINGSTORE_H
#define CKXBACKINGSTORE_H

@class CKXProxyBase<CKXReadStructProxy>, CKXProxyBase<CKXWriteStructProxy>;
@protocol CKXReaderProtocol, CKXWriterProtocol, CKXReaderWriterProtocol, CKXBinding;

#import <Foundation/Foundation.h>

#import "CKXProxyCache.h"
#import "CKDSReadableStorage.h"
#import "CKXVersionedReaderWriterStore.h"
#import "CKDSStorage.h"
#import "CKDSWritableStorage.h"

@interface CKXBackingStore : NSObject <CKXReaderProtocol, CKXWriterProtocol, CKXReaderWriterProtocol>



@property (readonly, nonatomic) NSObject<CKXBinding> *binding; // ivar: _binding
@property (nonatomic) NSUInteger cacheScope; // ivar: _cacheScope
@property (readonly, nonatomic) unsigned char formatVersion;
@property (nonatomic) ? header; // ivar: _header
@property (readonly, nonatomic) BOOL isWriting;
@property (retain, nonatomic) CKXProxyCache *proxyCache; // ivar: _proxyCache
@property (readonly, nonatomic) CKDSReadableStorage *readableStorage;
@property (retain, nonatomic) CKXVersionedReaderWriterStore *readerWriterStore; // ivar: _readerWriterStore
@property (retain, nonatomic) CKDSStorage *storage; // ivar: _storage
@property (retain, nonatomic) CKXProxyBase<CKXReadStructProxy> *topLevelReadProxy; // ivar: _topLevelReadProxy
@property (readonly, nonatomic) CKXProxyBase<CKXWriteStructProxy> *topLevelWriteProxy; // ivar: _topLevelWriteProxy
@property (readonly, nonatomic) CKDSWritableStorage *writableStorage;


+(BOOL)header:(struct ? *)arg0 forStorage:(id)arg1 error:(*id)arg2 ;
+(BOOL)prefixStorage:(id)arg0 withHeaderForVersion:(unsigned char)arg1 error:(*id)arg2 ;
+(NSUInteger)headerSizeForFormatVersion:(unsigned char)arg0 ;
+(id)createHeaderDataForFormatVersion:(unsigned char)arg0 ;
+(struct ? )headerForData:(id)arg0 ;
-(BOOL)_setupBackingStoreForReadingWithError:(*id)arg0 ;
-(BOOL)_setupBackingStoreForWritingWithError:(*id)arg0 ;
-(BOOL)_validateVersion:(unsigned char)arg0 isReader:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)finishWritingWithError:(*id)arg0 ;
-(BOOL)flushWithError:(*id)arg0 ;
-(BOOL)referenceIsNull:(NSUInteger)arg0 inStruct:(struct ? )arg1 ;
-(NSInteger)lengthForList:(struct ? )arg0 ;
-(NSUInteger)valueSizeForField:(NSUInteger)arg0 ;
-(id)_proxyWithListInstance:(struct ? )arg0 mutable:(BOOL)arg1 cacheScope:(NSInteger)arg2 ;
-(id)_proxyWithStructInstance:(struct ? )arg0 mutable:(BOOL)arg1 cacheScope:(NSInteger)arg2 ;
-(id)appendedStructProxyForListInstance:(struct ? )arg0 ;
-(id)initWithStorage:(id)arg0 binding:(id)arg1 error:(*id)arg2 ;
-(id)initWithStorage:(id)arg0 binding:(id)arg1 optionsByReaderWriterClass:(id)arg2 formatVersion:(unsigned char)arg3 error:(*id)arg4 ;
-(id)initWriterWithStorage:(id)arg0 binding:(id)arg1 formatVersion:(unsigned char)arg2 ;
-(id)reader;
-(id)readerForProxy:(id)arg0 ;
-(id)schema;
-(id)structListProxyForListReference:(NSUInteger)arg0 inStructInstance:(struct ? )arg1 mutable:(BOOL)arg2 ;
-(id)structProxyForListInstance:(struct ? )arg0 atIndex:(NSInteger)arg1 ;
-(id)structProxyForStructReference:(NSUInteger)arg0 inStructInstance:(struct ? )arg1 mutable:(BOOL)arg2 ;
-(id)writer;
-(id)writerForProxy:(id)arg0 ;
-(struct ? )beginAppendedListStructInList:(struct ? )arg0 ;
-(struct ? )beginReferencedListForReference:(NSUInteger)arg0 inStruct:(struct ? )arg1 ;
-(struct ? )beginReferencedStructForReference:(NSUInteger)arg0 inStruct:(struct ? )arg1 ;
-(struct ? )beginRootStructWithType:(NSUInteger)arg0 error:(*id)arg1 ;
-(struct ? )referencedListForReference:(NSUInteger)arg0 inStruct:(struct ? )arg1 ;
-(struct ? )referencedStructAtIndex:(NSInteger)arg0 inList:(struct ? )arg1 ;
-(struct ? )referencedStructForReference:(NSUInteger)arg0 inStruct:(struct ? )arg1 ;
-(struct ? )rootStructWithType:(NSUInteger)arg0 ;
-(struct ? )writerIdentity;
-(void)assignStruct:(struct ? )arg0 toReference:(NSUInteger)arg1 inStruct:(struct ? )arg2 ;
-(void)commitStruct:(struct ? )arg0 ;
-(void)copyData:(*void)arg0 forField:(NSUInteger)arg1 inStruct:(struct ? )arg2 ;
-(void)copyData:(*void)arg0 forList:(struct ? )arg1 ;
-(void)proxyScope:(id)arg0 ;
-(void)readUsingBlock:(id)arg0 ;
-(void)setData:(*void)arg0 withEncoding:(char *)arg1 forField:(NSUInteger)arg2 inStruct:(struct ? )arg3 ;
-(void)setData:(*void)arg0 withLength:(NSUInteger)arg1 forList:(struct ? )arg2 ;
-(void)writeUsingBlock:(id)arg0 ;


@end


#endif