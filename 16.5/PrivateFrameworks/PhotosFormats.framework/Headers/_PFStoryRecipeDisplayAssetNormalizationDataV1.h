// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PFSTORYRECIPEDISPLAYASSETNORMALIZATIONDATAV1_H
#define _PFSTORYRECIPEDISPLAYASSETNORMALIZATIONDATAV1_H

@class NSString, NSDictionary;
@protocol _PFStoryRecipeDisplayAssetNormalizationData;

#import <Foundation/Foundation.h>


@interface _PFStoryRecipeDisplayAssetNormalizationDataV1 : NSObject <_PFStoryRecipeDisplayAssetNormalizationData>

 {
    ? _data;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *highKeyProperties;
@property (readonly, nonatomic) CGFloat score;
@property (readonly, nonatomic) *? sliderNetPackedData;
@property (readonly, nonatomic) NSDictionary *smartColorProperties;
@property (readonly, nonatomic) NSDictionary *smartToneProperties;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *tempTintProperties;
@property (readonly, nonatomic) NSInteger version;


+(id)limits;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithSliderNetPackedDataV1:(struct ? *)arg0 ;


@end


#endif