// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCEMBEDDINGDESCRIPTOR_H
#define MLCEMBEDDINGDESCRIPTOR_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MLCEmbeddingDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic) NSNumber *embeddingCount; // ivar: _embeddingCount
@property (readonly, nonatomic) NSNumber *embeddingDimension; // ivar: _embeddingDimension
@property (readonly, nonatomic) NSNumber *maximumNorm; // ivar: _maximumNorm
@property (readonly, nonatomic) NSNumber *pNorm; // ivar: _pNorm
@property (readonly, nonatomic) NSNumber *paddingIndex; // ivar: _paddingIndex
@property (readonly, nonatomic) BOOL scalesGradientByFrequency; // ivar: _scalesGradientByFrequency


+(id)descriptorWithEmbeddingCount:(id)arg0 embeddingDimension:(id)arg1 ;
+(id)descriptorWithEmbeddingCount:(id)arg0 embeddingDimension:(id)arg1 paddingIndex:(id)arg2 maximumNorm:(id)arg3 pNorm:(id)arg4 scalesGradientByFrequency:(BOOL)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithEmbeddingCount:(id)arg0 embeddingDimension:(id)arg1 paddingIndex:(id)arg2 maximumNorm:(id)arg3 pNorm:(id)arg4 scalesGradientByFrequency:(BOOL)arg5 ;


@end


#endif