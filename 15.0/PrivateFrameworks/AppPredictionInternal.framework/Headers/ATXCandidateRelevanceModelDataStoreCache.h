// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXCANDIDATERELEVANCEMODELDATASTORECACHE_H
#define ATXCANDIDATERELEVANCEMODELDATASTORECACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXCandidateRelevanceModelDataStoreCache : NSObject {
    NSMutableDictionary *_featurizationManagers;
}




-(id)featurizationManagerForFeaturizationManagerId:(NSInteger)arg0 ;
-(id)init;
-(void)setFeaturizationManager:(id)arg0 forFeaturizationManagerId:(NSInteger)arg1 ;


@end


#endif