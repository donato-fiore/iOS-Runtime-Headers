// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCONCRETEMUTABLEDATA_H
#define NSCONCRETEMUTABLEDATA_H

@class NSMutableData;



@interface NSConcreteMutableData : NSMutableData {
    BOOL _reserved;
    BOOL _needToZero;
    BOOL _hasVM;
    BOOL _retainCount;
    NSUInteger _length;
    NSUInteger _capacity;
    *void _bytes;
}




-(*void)bytes;
-(*void)mutableBytes;
-(BOOL)_canUseRealloc;
-(BOOL)_providesConcreteBacking;
-(NSUInteger)length;
-(id)init;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 copy:(BOOL)arg2 deallocator:(id)arg3 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithLength:(NSUInteger)arg0 ;
-(void)_freeBytes;
-(void)appendBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)appendData:(id)arg0 ;
-(void)dealloc;
-(void)increaseLengthBy:(NSUInteger)arg0 ;
-(void)replaceBytesInRange:(struct _NSRange )arg0 withBytes:(*void)arg1 ;
-(void)resetBytesInRange:(struct _NSRange )arg0 ;
-(void)setLength:(NSUInteger)arg0 ;


@end


#endif