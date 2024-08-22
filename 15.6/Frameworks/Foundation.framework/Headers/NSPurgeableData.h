// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPURGEABLEDATA_H
#define NSPURGEABLEDATA_H

@class NSMutableData;
@protocol NSDiscardableContent;



@interface NSPurgeableData : NSMutableData <NSDiscardableContent>

 {
    NSUInteger _length;
    int _accessCount;
    unsigned char _private;
    *void _reserved;
}




-(*void)bytes;
-(*void)mutableBytes;
-(BOOL)beginContentAccess;
-(BOOL)isContentDiscarded;
-(NSUInteger)length;
-(id)description;
-(id)init;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 copy:(BOOL)arg2 deallocator:(id)arg3 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(void)_destroyMemory;
-(void)dealloc;
-(void)discardContentIfPossible;
-(void)endContentAccess;
-(void)setLength:(NSUInteger)arg0 ;


@end


#endif