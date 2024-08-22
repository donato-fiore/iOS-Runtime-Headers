// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROVPANALYSISHELPERS_H
#define MIROVPANALYSISHELPERS_H

@class NSCache;


#import "VEiOSSharedObject.h"

@interface MiroVPAnalysisHelpers : VEiOSSharedObject {
    NSCache *_analysisInfos;
}




+(NSUInteger)_extendedFlagsWithFlags:(NSUInteger)arg0 ;
+(id)_createAnalysisInfoWithVPResultDictionary:(id)arg0 asset:(id)arg1 ;
+(id)sharedHelpers;
+(int)_timeInFramesWithDictionaryRepresentation:(id)arg0 naturalFrameRate:(NSInteger)arg1 ;
+(void)clearStaticCache;
+(void)purgeSharedInstance;
-(id)init;
-(int)fetchAnalysisInfoWithAsset:(id)arg0 completionHandler:(id)arg1 ;
-(int)fetchAnalysisInfoWithAssets:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearCaches;
-(void)processResults:(id)arg0 forAssets:(id)arg1 intoInfos:(id)arg2 ;


@end


#endif