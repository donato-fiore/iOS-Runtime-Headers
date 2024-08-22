// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCONCRETEDATA_H
#define NSCONCRETEDATA_H

@class NSData;



@interface NSConcreteData : NSData {
    NSUInteger _length;
    *void _bytes;
    id *_deallocator;
}




-(*void)bytes;
-(BOOL)_copyWillRetain;
-(BOOL)_isCompact;
-(BOOL)_providesConcreteBacking;
-(NSUInteger)length;
-(id)_createDispatchData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 copy:(BOOL)arg2 deallocator:(id)arg3 ;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 copy:(BOOL)arg2 freeWhenDone:(BOOL)arg3 bytesAreVM:(BOOL)arg4 ;
-(void)dealloc;
-(void)getBytes:(*void)arg0 ;
-(void)getBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)getBytes:(*void)arg0 range:(struct _NSRange )arg1 ;


@end


#endif