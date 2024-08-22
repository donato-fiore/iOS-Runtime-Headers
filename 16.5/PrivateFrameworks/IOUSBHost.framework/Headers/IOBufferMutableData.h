// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IOBUFFERMUTABLEDATA_H
#define IOBUFFERMUTABLEDATA_H

@class NSMutableData;



@interface IOBufferMutableData : NSMutableData {
    *void _bytes;
    NSUInteger _length;
}


@property (copy) id *deallocator; // ivar: _deallocator


-(*void)bytes;
-(*void)mutableBytes;
-(NSUInteger)length;
-(id)initWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 deallocator:(id)arg2 ;
-(void)dealloc;
-(void)setLength:(NSUInteger)arg0 ;


@end


#endif