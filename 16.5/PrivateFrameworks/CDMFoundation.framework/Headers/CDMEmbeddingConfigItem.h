// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMEMBEDDINGCONFIGITEM_H
#define CDMEMBEDDINGCONFIGITEM_H

@class NSNumber, NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CDMEmbeddingConfigItem : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSNumber *embeddingModelDimension; // ivar: _embeddingModelDimension
@property (readonly, nonatomic) NSDictionary *embeddingModelMetadata; // ivar: _embeddingModelMetadata
@property (readonly, nonatomic) NSString *embeddingModelPath; // ivar: _embeddingModelPath
@property (readonly, nonatomic) NSString *embeddingModelVersion; // ivar: _embeddingModelVersion
@property (readonly, nonatomic) BOOL isStableEmbeddingModel; // ivar: _isStableEmbeddingModel


+(BOOL)supportsSecureCoding;
+(NSInteger)getEmbeddingDimensionFromEmbeddingModelMetadata:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEmbeddingModelPath:(id)arg0 isStableEmbeddingModel:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif