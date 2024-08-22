// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRCODERUNARCHIVER_H
#define CRCODERUNARCHIVER_H

@class NSMutableArray, NSMutableOrderedSet, NSUUID;


#import "CRCoder.h"
#import "CRDocument.h"

@interface CRCoderUnarchiver : CRCoder

@property (retain, nonatomic) NSMutableArray *allocedDocObjects; // ivar: _allocedDocObjects
@property (retain, nonatomic) NSMutableArray *completionHandlers; // ivar: _completionHandlers
@property (nonatomic) *void currentDocObjectForDecodingPtr; // ivar: _currentDocObjectForDecodingPtr
@property (nonatomic) *void currentDocument; // ivar: _currentDocument
@property (retain, nonatomic) CRDocument *document; // ivar: _document
@property (retain, nonatomic) NSMutableOrderedSet *keySet; // ivar: _keySet
@property (copy, nonatomic) NSUUID *replica; // ivar: _replica
@property (retain, nonatomic) NSMutableOrderedSet *typeSetForDecoding; // ivar: _typeSetForDecoding
@property (retain, nonatomic) NSMutableArray *uuidArray; // ivar: _uuidArray


+(id)decodedDocumentFromData:(id)arg0 replica:(id)arg1 ;
+(void)initialize;
-(*void)currentObjectIDForKey:(id)arg0 ;
-(BOOL)hasDecodableValueForKey:(id)arg0 ;
-(BOOL)willModifySelfInInitForClass:(Class)arg0 ;
-(CGFloat)decodeDoubleForKey:(id)arg0 ;
-(NSInteger)decodeInt64ForKey:(id)arg0 ;
-(NSUInteger)decodeUInt64ForKey:(id)arg0 ;
-(NSUInteger)indexForKey:(id)arg0 ;
-(id)allocedObjectAtIndex:(NSUInteger)arg0 outNeedsInit:(*BOOL)arg1 ;
-(id)decodeDataForKey:(id)arg0 ;
-(id)decodeDocumentFromData:(id)arg0 replica:(id)arg1 ;
-(id)decodeObjectForKey:(id)arg0 ;
-(id)decodeObjectForProtobufObjectID:(*void)arg0 ;
-(id)decodeStringForKey:(id)arg0 ;
-(id)decodeUUIDForKey:(id)arg0 ;
-(id)decodeUUIDFromUUIDIndex:(NSUInteger)arg0 ;
-(int)decodeInt32ForKey:(id)arg0 ;
-(unsigned int)decodeUInt32ForKey:(id)arg0 ;
// -(void)addDecoderCompletionHandler:(id)arg0 dependency:(unk)arg1 for:(id)arg2  ;
-(void)sortCompletionHandlers;


@end


#endif