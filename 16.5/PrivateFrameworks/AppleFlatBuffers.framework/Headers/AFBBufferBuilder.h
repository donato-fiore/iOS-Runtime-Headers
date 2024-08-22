// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFBBUFFERBUILDER_H
#define AFBBUFFERBUILDER_H

@class NSError, NSString;

#import <Foundation/Foundation.h>


@interface AFBBufferBuilder : NSObject {
    type _fbbStorage;
    *void _fileAllocator;
    BOOL _initOk;
    BOOL _isFinalized;
}


@property (readonly, nonatomic) NSError *firstError; // ivar: _firstError
@property (readonly, nonatomic) NSString *path; // ivar: _path


-(*void)fbb;
-(BOOL)finalizeWithSelector:(SEL)arg0 allocatorBufferAddr:(*void)arg1 size:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)createString:(id)arg0 ;
-(id)createString:(id)arg0 alignment:(NSUInteger)arg1 ;
-(id)createStringWithCString:(char *)arg0 ;
-(id)createStringWithCString:(char *)arg0 alignment:(NSUInteger)arg1 ;
-(id)createStringWithData:(id)arg0 ;
-(id)createStringWithData:(id)arg0 alignment:(NSUInteger)arg1 ;
-(id)createVectorOfBoolWithArray:(id)arg0 ;
-(id)createVectorOfBoolWithArray:(id)arg0 alignment:(NSUInteger)arg1 ;
-(id)createVectorOfBoolWithCArray:(*BOOL)arg0 count:(NSUInteger)arg1 ;
-(id)createVectorOfBoolWithCArray:(*BOOL)arg0 count:(NSUInteger)arg1 alignment:(NSUInteger)arg2 ;
-(id)createVectorOfBoolWithCount:(NSUInteger)arg0 alignment:(NSUInteger)arg1 block:(id)arg2 ;
-(id)createVectorOfBoolWithCount:(NSUInteger)arg0 block:(id)arg1 ;
-(id)createVectorOfFloat32WithArray:(id)arg0 ;
-(id)createVectorOfFloat32WithArray:(id)arg0 alignment:(NSUInteger)arg1 ;
-(id)createVectorOfFloat32WithCArray:(*float)arg0 count:(NSUInteger)arg1 ;
-(id)createVectorOfFloat32WithCArray:(*float)arg0 count:(NSUInteger)arg1 alignment:(NSUInteger)arg2 ;
-(id)createVectorOfFloat32WithCount:(NSUInteger)arg0 alignment:(NSUInteger)arg1 block:(id)arg2 ;
-(id)createVectorOfFloat32WithCount:(NSUInteger)arg0 block:(id)arg1 ;
-(id)createVectorOfFloat64WithArray:(id)arg0 ;
-(id)createVectorOfFloat64WithArray:(id)arg0 alignment:(NSUInteger)arg1 ;
-(id)createVectorOfFloat64WithCArray:(*CGFloat)arg0 count:(NSUInteger)arg1 ;
-(id)createVectorOfFloat64WithCArray:(*CGFloat)arg0 count:(NSUInteger)arg1 alignment:(NSUInteger)arg2 ;
-(id)createVectorOfFloat64WithCount:(NSUInteger)arg0 alignment:(NSUInteger)arg1 block:(id)arg2 ;
-(id)createVectorOfFloat64WithCount:(NSUInteger)arg0 block:(id)arg1 ;
-(id)createVectorOfInt16WithArray:(id)arg0 ;
-(id)createVectorOfInt16WithArray:(id)arg0 alignment:(NSUInteger)arg1 ;
-(id)createVectorOfInt16WithCArray:(*short)arg0 count:(NSUInteger)arg1 ;
-(id)createVectorOfInt16WithCArray:(*short)arg0 count:(NSUInteger)arg1 alignment:(NSUInteger)arg2 ;
-(id)createVectorOfInt16WithCount:(NSUInteger)arg0 alignment:(NSUInteger)arg1 block:(id)arg2 ;
-(id)createVectorOfInt16WithCount:(NSUInteger)arg0 block:(id)arg1 ;
-(id)createVectorOfInt32WithArray:(id)arg0 ;
-(id)createVectorOfInt32WithArray:(id)arg0 alignment:(NSUInteger)arg1 ;
-(id)createVectorOfInt32WithCArray:(*int)arg0 count:(NSUInteger)arg1 ;
-(id)createVectorOfInt32WithCArray:(*int)arg0 count:(NSUInteger)arg1 alignment:(NSUInteger)arg2 ;
-(id)createVectorOfInt32WithCount:(NSUInteger)arg0 alignment:(NSUInteger)arg1 block:(id)arg2 ;
-(id)createVectorOfInt32WithCount:(NSUInteger)arg0 block:(id)arg1 ;
-(id)createVectorOfInt64WithArray:(id)arg0 ;
-(id)createVectorOfInt64WithArray:(id)arg0 alignment:(NSUInteger)arg1 ;
-(id)createVectorOfInt64WithCArray:(*NSInteger)arg0 count:(NSUInteger)arg1 ;
-(id)createVectorOfInt64WithCArray:(*NSInteger)arg0 count:(NSUInteger)arg1 alignment:(NSUInteger)arg2 ;
-(id)createVectorOfInt64WithCount:(NSUInteger)arg0 alignment:(NSUInteger)arg1 block:(id)arg2 ;
-(id)createVectorOfInt64WithCount:(NSUInteger)arg0 block:(id)arg1 ;
-(id)createVectorOfInt8WithArray:(id)arg0 ;
-(id)createVectorOfInt8WithArray:(id)arg0 alignment:(NSUInteger)arg1 ;
-(id)createVectorOfInt8WithCArray:(char *)arg0 count:(NSUInteger)arg1 ;
-(id)createVectorOfInt8WithCArray:(char *)arg0 count:(NSUInteger)arg1 alignment:(NSUInteger)arg2 ;
-(id)createVectorOfInt8WithCount:(NSUInteger)arg0 alignment:(NSUInteger)arg1 block:(id)arg2 ;
-(id)createVectorOfInt8WithCount:(NSUInteger)arg0 block:(id)arg1 ;
-(id)createVectorOfStringWithArray:(id)arg0 ;
-(id)createVectorOfStringWithArray:(id)arg0 alignment:(NSUInteger)arg1 ;
-(id)createVectorOfStringWithCount:(NSUInteger)arg0 alignment:(NSUInteger)arg1 block:(id)arg2 ;
-(id)createVectorOfStringWithCount:(NSUInteger)arg0 block:(id)arg1 ;
-(id)createVectorOfStringWithOffsets:(id)arg0 ;
-(id)createVectorOfUInt16WithArray:(id)arg0 ;
-(id)createVectorOfUInt16WithArray:(id)arg0 alignment:(NSUInteger)arg1 ;
-(id)createVectorOfUInt16WithCArray:(*unsigned short)arg0 count:(NSUInteger)arg1 ;
-(id)createVectorOfUInt16WithCArray:(*unsigned short)arg0 count:(NSUInteger)arg1 alignment:(NSUInteger)arg2 ;
-(id)createVectorOfUInt16WithCount:(NSUInteger)arg0 alignment:(NSUInteger)arg1 block:(id)arg2 ;
-(id)createVectorOfUInt16WithCount:(NSUInteger)arg0 block:(id)arg1 ;
-(id)createVectorOfUInt32WithArray:(id)arg0 ;
-(id)createVectorOfUInt32WithArray:(id)arg0 alignment:(NSUInteger)arg1 ;
-(id)createVectorOfUInt32WithCArray:(*unsigned int)arg0 count:(NSUInteger)arg1 ;
-(id)createVectorOfUInt32WithCArray:(*unsigned int)arg0 count:(NSUInteger)arg1 alignment:(NSUInteger)arg2 ;
-(id)createVectorOfUInt32WithCount:(NSUInteger)arg0 alignment:(NSUInteger)arg1 block:(id)arg2 ;
-(id)createVectorOfUInt32WithCount:(NSUInteger)arg0 block:(id)arg1 ;
-(id)createVectorOfUInt64WithArray:(id)arg0 ;
-(id)createVectorOfUInt64WithArray:(id)arg0 alignment:(NSUInteger)arg1 ;
-(id)createVectorOfUInt64WithCArray:(*NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(id)createVectorOfUInt64WithCArray:(*NSUInteger)arg0 count:(NSUInteger)arg1 alignment:(NSUInteger)arg2 ;
-(id)createVectorOfUInt64WithCount:(NSUInteger)arg0 alignment:(NSUInteger)arg1 block:(id)arg2 ;
-(id)createVectorOfUInt64WithCount:(NSUInteger)arg0 block:(id)arg1 ;
-(id)createVectorOfUInt8WithArray:(id)arg0 ;
-(id)createVectorOfUInt8WithArray:(id)arg0 alignment:(NSUInteger)arg1 ;
-(id)createVectorOfUInt8WithCArray:(char *)arg0 count:(NSUInteger)arg1 ;
-(id)createVectorOfUInt8WithCArray:(char *)arg0 count:(NSUInteger)arg1 alignment:(NSUInteger)arg2 ;
-(id)createVectorOfUInt8WithCount:(NSUInteger)arg0 alignment:(NSUInteger)arg1 block:(id)arg2 ;
-(id)createVectorOfUInt8WithCount:(NSUInteger)arg0 block:(id)arg1 ;
-(id)createVectorOfUInt8WithData:(id)arg0 ;
-(id)createVectorOfUInt8WithData:(id)arg0 alignment:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithConfig:(struct Config *)arg0 path:(id)arg1 protectionClass:(int)arg2 capacity:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)initWithFileAtPath:(id)arg0 capacity:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithFileAtPath:(id)arg0 protection:(id)arg1 capacity:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)dealloc;
-(void)finalizeWithSelector:(SEL)arg0 ;
-(void)setError:(id)arg0 ;
-(void)throwIfFinalizedWithSelector:(SEL)arg0 ;


@end


#endif