// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRCODERARCHIVER_H
#define CRCODERARCHIVER_H

@class NSMutableOrderedSet;


#import "CRCoder.h"

@interface CRCoderArchiver : CRCoder {
    vector<CRDT::Document_DocObject *, std::allocator<CRDT::Document_DocObject *>> currentDocObjectEncodingStack;
}


@property (nonatomic) *void currentDocument; // ivar: _currentDocument
@property (retain, nonatomic) NSMutableOrderedSet *encodedObjects; // ivar: _encodedObjects
@property (retain, nonatomic) NSMutableOrderedSet *keySet; // ivar: _keySet
@property (retain, nonatomic) NSMutableOrderedSet *uuidSet; // ivar: _uuidSet


+(id)encodedDataWithDocument:(id)arg0 ;
+(void)initialize;
-(*void)currentCustomObjectForEncoding;
-(*void)mutableObjectIDForKey:(id)arg0 ;
-(NSUInteger)encodeUUIDIndexFromUUID:(id)arg0 ;
-(id)encodeDocument:(id)arg0 ;
-(int)indexForKey:(id)arg0 ;
-(void)encodeData:(id)arg0 forKey:(id)arg1 ;
-(void)encodeDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)encodeInt32:(int)arg0 forKey:(id)arg1 ;
-(void)encodeInt64:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeObject:(id)arg0 forKey:(id)arg1 ;
-(void)encodeObject:(id)arg0 forObjectID:(*void)arg1 ;
-(void)encodeString:(id)arg0 forKey:(id)arg1 ;
-(void)encodeUInt32:(unsigned int)arg0 forKey:(id)arg1 ;
-(void)encodeUInt64:(NSUInteger)arg0 forKey:(id)arg1 ;
-(void)encodeUUID:(id)arg0 forKey:(id)arg1 ;
-(void)setTypeIndexForCurrentCustomObjectIfNecessary:(id)arg0 ;


@end


#endif