// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPEVENTFEATURESCORE_H
#define PPEVENTFEATURESCORE_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PPEventFeatureScore : NSObject <NSCopying>

 {
    NSUInteger _ocnt_precomputedHash;
}


@property (readonly, nonatomic) NSArray *featureValues; // ivar: _featureValues
@property (readonly, nonatomic) NSUInteger prominentFeature; // ivar: _prominentFeature
@property (readonly, nonatomic) CGFloat weightedScore; // ivar: _weightedScore


+(id)eventFeatureScoreWithFeatureValues:(id)arg0 weightedScore:(CGFloat)arg1 prominentFeature:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEventFeatureScore:(id)arg0 ;
-(NSUInteger)_hash;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithFeatureValues:(id)arg0 weightedScore:(CGFloat)arg1 prominentFeature:(NSUInteger)arg2 ;


@end


#endif