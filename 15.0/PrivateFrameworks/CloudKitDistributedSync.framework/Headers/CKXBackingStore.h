// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKXBACKINGSTORE_H
#define CKXBACKINGSTORE_H

@class NSData, CKXProxyBase<CKXReadStructProxy>, CKXProxyBase<CKXWriteStructProxy>;
@protocol CKXReaderProtocol, CKXWriterProtocol, CKXBinding;

#import <Foundation/Foundation.h>

#import "CKXProxyCache.h"
#import "CKXVersionedReaderWriterStore.h"

@interface CKXBackingStore : NSObject <CKXReaderProtocol, CKXWriterProtocol>



@property (retain, nonatomic) NSObject<CKXBinding> *binding; // ivar: _binding
@property (nonatomic) NSUInteger cacheScope; // ivar: _cacheScope
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) unsigned char formatVersion;
@property (nonatomic) ? header; // ivar: _header
@property (readonly, nonatomic) BOOL isWriting;
@property (retain, nonatomic) CKXProxyCache *proxyCache; // ivar: _proxyCache
@property (retain, nonatomic) CKXVersionedReaderWriterStore *readerWriterStore; // ivar: _readerWriterStore
@property (retain, nonatomic) CKXProxyBase<CKXReadStructProxy> *topLevelReadProxy; // ivar: _topLevelReadProxy
@property (retain, nonatomic) CKXProxyBase<CKXWriteStructProxy> *topLevelWriteProxy; // ivar: _topLevelWriteProxy


+(id)createHeaderDataForFormatVersion:(unsigned char)arg0 ;
+(id)data:(id)arg0 withHeaderForVersion:(unsigned char)arg1 ;
+(id)dataWithoutHeader:(id)arg0 ;
+(struct ? )headerForData:(id)arg0 ;
-(BOOL)_setupBackingStoreForReadingWithError:(*id)arg0 ;
-(BOOL)referenceIsNull:(NSUInteger)arg0 inStruct:(struct ? )arg1 ;
-(NSInteger)lengthForList:(struct ? )arg0 ;
-(id)appendedStructProxyForListInstance:(struct ? )arg0 ;
-(id)flush;
-(id)initWithBinding:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
-(id)initWithBinding:(id)arg0 data:(id)arg1 formatVersion:(unsigned char)arg2 optionsByReaderWriterClass:(id)arg3 error:(*id)arg4 ;
-(id)initWithBinding:(id)arg0 formatVersion:(unsigned char)arg1 writerBlock:(id)arg2 ;
-(id)initWriterWithBinding:(id)arg0 version:(unsigned char)arg1 ;
-(id)proxyForStructToken:(NSUInteger)arg0 withCKXStructInstance:(struct ? )arg1 mutable:(BOOL)arg2 cacheScope:(NSInteger)arg3 ;
-(id)proxyWithListInstance:(struct ? )arg0 mutable:(BOOL)arg1 cacheScope:(NSInteger)arg2 ;
-(id)reader;
-(id)readerForProxy:(id)arg0 ;
-(id)schema;
-(id)structListProxyForListReference:(NSUInteger)arg0 inCKXStructInstance:(struct ? )arg1 mutable:(BOOL)arg2 ;
-(id)structProxyForListInstance:(struct ? )arg0 atIndex:(NSInteger)arg1 ;
-(id)structProxyForStructReference:(NSUInteger)arg0 inCKXStructInstance:(struct ? )arg1 mutable:(BOOL)arg2 ;
-(id)writer;
-(id)writerForProxy:(id)arg0 ;
-(struct ? )beginAppendedListStructInList:(struct ? )arg0 ;
-(struct ? )beginReferencedListForReference:(NSUInteger)arg0 inStruct:(struct ? )arg1 ;
-(struct ? )beginReferencedStructForReference:(NSUInteger)arg0 inStruct:(struct ? )arg1 ;
-(struct ? )beginRootStructWithType:(NSUInteger)arg0 ;
-(struct ? )referencedListForReference:(NSUInteger)arg0 inStruct:(struct ? )arg1 ;
-(struct ? )referencedStructAtIndex:(NSInteger)arg0 inList:(struct ? )arg1 ;
-(struct ? )referencedStructForReference:(NSUInteger)arg0 inStruct:(struct ? )arg1 ;
-(struct ? )rootStructWithType:(NSUInteger)arg0 ;
-(struct ? )writerIdentity;
-(void)commitStruct:(struct ? )arg0 ;
-(void)copyData:(*void)arg0 forField:(NSUInteger)arg1 inStruct:(struct ? )arg2 ;
-(void)copyData:(*void)arg0 forList:(struct ? )arg1 ;
-(void)finishWriting;
-(void)proxyScope:(id)arg0 ;
-(void)readUsingBlock:(id)arg0 ;
-(void)writeUsingBlock:(id)arg0 ;


@end


#endif