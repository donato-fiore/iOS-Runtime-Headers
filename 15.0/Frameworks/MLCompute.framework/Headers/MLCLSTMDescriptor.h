// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCLSTMDESCRIPTOR_H
#define MLCLSTMDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MLCLSTMDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL batchFirst; // ivar: _batchFirst
@property (readonly, nonatomic) float dropout; // ivar: _dropout
@property (readonly, nonatomic) NSUInteger hiddenSize; // ivar: _hiddenSize
@property (readonly, nonatomic) NSUInteger inputSize; // ivar: _inputSize
@property (readonly, nonatomic) BOOL isBidirectional; // ivar: _isBidirectional
@property (readonly, nonatomic) NSUInteger layerCount; // ivar: _layerCount
@property (readonly, nonatomic) NSUInteger resultMode; // ivar: _resultMode
@property (readonly, nonatomic) BOOL returnsSequences; // ivar: _returnsSequences
@property (readonly, nonatomic) BOOL usesBiases; // ivar: _usesBiases


+(id)descriptorWithInputSize:(NSUInteger)arg0 hiddenSize:(NSUInteger)arg1 layerCount:(NSUInteger)arg2 ;
+(id)descriptorWithInputSize:(NSUInteger)arg0 hiddenSize:(NSUInteger)arg1 layerCount:(NSUInteger)arg2 usesBiases:(BOOL)arg3 batchFirst:(BOOL)arg4 isBidirectional:(BOOL)arg5 dropout:(float)arg6 ;
+(id)descriptorWithInputSize:(NSUInteger)arg0 hiddenSize:(NSUInteger)arg1 layerCount:(NSUInteger)arg2 usesBiases:(BOOL)arg3 batchFirst:(BOOL)arg4 isBidirectional:(BOOL)arg5 returnsSequences:(BOOL)arg6 dropout:(float)arg7 ;
+(id)descriptorWithInputSize:(NSUInteger)arg0 hiddenSize:(NSUInteger)arg1 layerCount:(NSUInteger)arg2 usesBiases:(BOOL)arg3 batchFirst:(BOOL)arg4 isBidirectional:(BOOL)arg5 returnsSequences:(BOOL)arg6 dropout:(float)arg7 resultMode:(NSUInteger)arg8 ;
+(id)descriptorWithInputSize:(NSUInteger)arg0 hiddenSize:(NSUInteger)arg1 layerCount:(NSUInteger)arg2 usesBiases:(BOOL)arg3 isBidirectional:(BOOL)arg4 dropout:(float)arg5 ;
-(BOOL)bias;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)numberOfLayers;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithInputSize:(NSUInteger)arg0 hiddenSize:(NSUInteger)arg1 layerCount:(NSUInteger)arg2 usesBiases:(BOOL)arg3 batchFirst:(BOOL)arg4 isBidirectional:(BOOL)arg5 returnsSequences:(BOOL)arg6 dropout:(float)arg7 resultMode:(NSUInteger)arg8 ;


@end


#endif