// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMDCOLDSTARTOPERATION_H
#define AMDCOLDSTARTOPERATION_H


#import <Foundation/Foundation.h>


@interface AMDColdstartOperation : NSObject



+(id)computeUpdatedScores:(id)arg0 withModel:(id)arg1 andMappingDictionary:(id)arg2 summaryDict:(id)arg3 ;
+(id)computeUpdatedScoresV2:(id)arg0 withModel:(id)arg1 andMappingDictionary:(id)arg2 ;
+(id)ensureNewDirectoryForBinaryWithModelId:(id)arg0 andVersion:(id)arg1 ;
+(id)saveColdStartBinaryforModel:(id)arg0 atLocation:(id)arg1 withVersion:(id)arg2 error:(*id)arg3 ;


@end


#endif