// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASSETSCENEANALYSISPROPERTIES_H
#define PHASSETSCENEANALYSISPROPERTIES_H

@class NSData, NSDate;


#import "PHAssetPropertySet.h"

@interface PHAssetSceneAnalysisProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSData *distanceIdentity; // ivar: _distanceIdentity
@property (readonly, nonatomic) NSDate *sceneAnalysisTimestamp; // ivar: _sceneAnalysisTimestamp
@property (readonly, nonatomic) short sceneAnalysisVersion; // ivar: _sceneAnalysisVersion


+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif