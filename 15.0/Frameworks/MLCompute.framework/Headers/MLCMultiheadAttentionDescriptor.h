// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCMULTIHEADATTENTIONDESCRIPTOR_H
#define MLCMULTIHEADATTENTIONDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MLCMultiheadAttentionDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL addsZeroAttention; // ivar: _addsZeroAttention
@property (readonly, nonatomic) float dropout; // ivar: _dropout
@property (readonly, nonatomic) BOOL hasAttentionBiases; // ivar: _hasAttentionBiases
@property (nonatomic) BOOL hasAttentionMask; // ivar: _hasAttentionMask
@property (readonly, nonatomic) BOOL hasBiases; // ivar: _hasBiases
@property (nonatomic) BOOL hasKeyPaddingMask; // ivar: _hasKeyPaddingMask
@property (readonly, nonatomic) NSUInteger headCount; // ivar: _headCount
@property (readonly, nonatomic) NSUInteger keyDimension; // ivar: _keyDimension
@property (readonly, nonatomic) NSUInteger modelDimension; // ivar: _modelDimension
@property (readonly, nonatomic) NSUInteger valueDimension; // ivar: _valueDimension


+(id)descriptorWithModelDimension:(NSUInteger)arg0 headCount:(NSUInteger)arg1 ;
+(id)descriptorWithModelDimension:(NSUInteger)arg0 keyDimension:(NSUInteger)arg1 valueDimension:(NSUInteger)arg2 headCount:(NSUInteger)arg3 dropout:(float)arg4 hasBiases:(BOOL)arg5 hasAttentionBiases:(BOOL)arg6 addsZeroAttention:(BOOL)arg7 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithModelDimension:(NSUInteger)arg0 keyDimension:(NSUInteger)arg1 valueDimension:(NSUInteger)arg2 headCount:(NSUInteger)arg3 dropout:(float)arg4 hasBias:(BOOL)arg5 hasAttentionBias:(BOOL)arg6 addsZeroAttention:(BOOL)arg7 ;


@end


#endif