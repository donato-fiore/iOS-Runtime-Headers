// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFSTORYRECIPEDISPLAYASSETNORMALIZATION_H
#define PFSTORYRECIPEDISPLAYASSETNORMALIZATION_H

@class NSData, NSString, NSDictionary;
@protocol NSCopying, _PFStoryRecipeDisplayAssetNormalizationData;

#import <Foundation/Foundation.h>


@interface PFStoryRecipeDisplayAssetNormalization : NSObject <NSCopying>

 {
    id<_PFStoryRecipeDisplayAssetNormalizationData> *_normalizationData;
}


@property (readonly, nonatomic) NSData *analysisData;
@property (readonly, nonatomic) NSString *detailedDescription;
@property (readonly, nonatomic) NSDictionary *highKeyProperties;
@property (readonly, nonatomic) CGFloat score;
@property (readonly, nonatomic) NSDictionary *smartColorProperties;
@property (readonly, nonatomic) NSDictionary *smartToneProperties;
@property (readonly, nonatomic) NSDictionary *tempTintProperties;
@property (readonly, nonatomic) NSInteger version;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAnalysisData:(id)arg0 ;


@end


#endif