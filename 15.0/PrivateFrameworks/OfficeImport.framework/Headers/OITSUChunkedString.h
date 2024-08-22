// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OITSUCHUNKEDSTRING_H
#define OITSUCHUNKEDSTRING_H

@class NSMutableString;



@interface OITSUChunkedString : NSMutableString {
    NSUInteger _length;
    vector<std::shared_ptr<TSUStringChunk>, std::allocator<std::shared_ptr<TSUStringChunk>>> _chunks;
    NSUInteger _chunkLength;
}




-(NSUInteger)length;
-(id)init;
-(id)initWithChunkLength:(NSUInteger)arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)appendString:(id)arg0 ;
-(void)compact;
-(void)dealloc;
-(void)deleteCharactersInRange:(struct _NSRange )arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;
-(void)insertString:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)p_appendRange:(struct _NSRange )arg0 fromString:(id)arg1 ;
-(void)p_compactChunksInRange:(struct _NSRange )arg0 ;
-(void)p_deleteCharactersInRange:(struct _NSRange )arg0 chunkIndex:(NSUInteger)arg1 ;
-(void)p_insertCharactersInRange:(struct _NSRange )arg0 fromString:(id)arg1 atIndex:(NSUInteger)arg2 chunkIndex:(NSUInteger)arg3 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;


@end


#endif