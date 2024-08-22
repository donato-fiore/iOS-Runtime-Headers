// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYRECIPECLIPMOTIONSTYLEPROVIDER_H
#define PXSTORYRECIPECLIPMOTIONSTYLEPROVIDER_H

@class PFStoryAutoEditFrequencyTable, PFStoryAutoEditConfiguration;
@protocol PFRandomNumberGenerator;

#import <Foundation/Foundation.h>


@interface PXStoryRecipeClipMotionStyleProvider : NSObject {
    PFStoryAutoEditFrequencyTable *_frequencyTable;
    PFStoryAutoEditFrequencyTable *_diptychFrequencyTable;
    PFStoryAutoEditFrequencyTable *_triptychFrequencyTable;
    id<PFRandomNumberGenerator> *_randomNumberGenerator;
}


@property (readonly, nonatomic) PFStoryAutoEditConfiguration *configuration; // ivar: _configuration


-(NSInteger)_nextMotionStyleForDisplayAssetCount:(NSInteger)arg0 excluding:(id)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 colorGradeCategory:(id)arg1 songPace:(NSInteger)arg2 randomNumberGenerator:(id)arg3 ;
-(struct ? )_nextMotionInfoForDisplayAssetCount:(NSInteger)arg0 excluding:(id)arg1 ;
-(struct ? )nextMotionInfoForDisplayAssetCount:(NSInteger)arg0 ;
-(struct ? )nextMotionInfoForModuleExcludingMomentMotion:(NSInteger)arg0 previousModuleMotion:(NSInteger)arg1 ;
-(void)provideMotionStylesForMomentClipRange:(struct _NSRange )arg0 withClipCatalog:(id)arg1 usingBlock:(id)arg2 ;


@end


#endif