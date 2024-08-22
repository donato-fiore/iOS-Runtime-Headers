// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMLSPARSEVECTOR_H
#define PMLSPARSEVECTOR_H


#import <Foundation/Foundation.h>


@interface PMLSparseVector : NSObject

@property (readonly, nonatomic) NSUInteger length; // ivar: _length
@property (nonatomic) NSUInteger numberOfNonZeroValues; // ivar: _numberOfNonZeroValues
@property (nonatomic) *NSInteger sparseIndices; // ivar: _sparseIndices
@property (nonatomic) *float sparseValues; // ivar: _sparseValues


+(id)sparseVectorEmptyWithLength:(NSUInteger)arg0 ;
+(id)sparseVectorFromDense:(*float)arg0 length:(NSUInteger)arg1 ;
+(id)sparseVectorFromDense:(id)arg0 ;
+(id)sparseVectorFromNumbers:(id)arg0 ;
+(id)sparseVectorFromNumbers:(id)arg0 indices:(id)arg1 length:(NSUInteger)arg2 ;
+(id)sparseVectorWithLength:(NSUInteger)arg0 numberOfNonZeroValues:(NSUInteger)arg1 block:(id)arg2 ;
+(void)sparseVectorWithLength:(NSUInteger)arg0 numberOfNonZeroValues:(NSUInteger)arg1 isSparseIndexInt64:(BOOL)arg2 sparseIndices:(*void)arg3 sparseValues:(*float)arg4 toDenseValues:(*float)arg5 withLength:(NSUInteger)arg6 ;
-(float)l1norm;
-(float)l2norm;
-(float)maxAbsValue;
-(float)maxValue;
-(float)minValue;
-(float)valueAtIndex:(NSUInteger)arg0 ;
-(id)indicesAsUInt16Data;
-(id)indicesData;
-(id)init;
-(id)initWithLength:(NSUInteger)arg0 numberOfNonZeroValues:(NSUInteger)arg1 indices:(*NSInteger)arg2 values:(*float)arg3 ;
-(id)initWithLength:(NSUInteger)arg0 numberOfNonZeroValues:(NSUInteger)arg1 indicesData:(id)arg2 valuesData:(id)arg3 ;
-(id)quantizedValuesAsUInt8DataWithMin:(float)arg0 max:(float)arg1 ;
-(id)valuesData;
-(id)vectorWithConstantColumn;
-(void)addEndId:(NSInteger)arg0 paddingId:(NSInteger)arg1 withMaxVectorLength:(NSUInteger)arg2 ;
-(void)applyOneHotNormalization;
-(void)convertToBagOfIds;
-(void)dealloc;
-(void)enumerateNonZeroValuesWithBlock:(id)arg0 ;
-(void)processNonZeroValuesInPlaceWithBlock:(id)arg0 ;
-(void)scaleInPlaceWithInversedFactor:(float)arg0 ;
-(void)scaleWithVectorNormalization:(NSInteger)arg0 ;
-(void)sparseVectorToDense:(*float)arg0 length:(NSUInteger)arg1 ;


@end


#endif