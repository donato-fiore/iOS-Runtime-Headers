// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMEANINGSCENECRITERIA_H
#define PGMEANINGSCENECRITERIA_H

@class NSString, NSArray;
@protocol PGMeaningCriteria;

#import <Foundation/Foundation.h>


@interface PGMeaningSceneCriteria : NSObject <PGMeaningCriteria>



@property (nonatomic) BOOL accumulateAssetCountsWithPositiveScenes; // ivar: _accumulateAssetCountsWithPositiveScenes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger minimumNumberOfAssetsWithNegativeScenes; // ivar: _minimumNumberOfAssetsWithNegativeScenes
@property (nonatomic) NSUInteger minimumNumberOfAssetsWithPositiveScenes; // ivar: _minimumNumberOfAssetsWithPositiveScenes
@property (nonatomic) NSUInteger minimumNumberOfNegativeScenes; // ivar: _minimumNumberOfNegativeScenes
@property (nonatomic) NSUInteger minimumNumberOfPositiveScenes; // ivar: _minimumNumberOfPositiveScenes
@property (nonatomic) CGFloat minimumRatioOfAssetsWithPositiveScenes; // ivar: _minimumRatioOfAssetsWithPositiveScenes
@property (retain, nonatomic) NSArray *negativeScenes; // ivar: _negativeScenes
@property (retain, nonatomic) NSArray *positiveScenes; // ivar: _positiveScenes
@property (readonly) Class superclass;


+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)passesForAssets:(id)arg0 ;
-(BOOL)passesForMomentNode:(id)arg0 momentNodeCache:(id)arg1 ;


@end


#endif