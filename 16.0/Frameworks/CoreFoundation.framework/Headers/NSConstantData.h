// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCONSTANTDATA_H
#define NSCONSTANTDATA_H



#import "NSData.h"

@interface NSConstantData : NSData {
    NSUInteger _length;
    char * _bytes;
}




+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)new;
-(*void)bytes;
-(BOOL)_copyWillRetain;
-(BOOL)_isCompact;
-(BOOL)_isDeallocating;
-(BOOL)_providesConcreteBacking;
-(BOOL)_tryRetain;
-(NSUInteger)length;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 copy:(BOOL)arg2 deallocator:(id)arg3 ;
-(id)initWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 freeWhenDone:(BOOL)arg2 ;
-(id)initWithData:(id)arg0 ;
-(id)retain;
-(void)dealloc;
-(void)release;


@end


#endif