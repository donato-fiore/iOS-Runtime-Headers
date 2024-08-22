// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODEFACESUGGESTIONSCACHE_H
#define ATXMODEFACESUGGESTIONSCACHE_H


#import <Foundation/Foundation.h>


@interface ATXModeFaceSuggestionsCache : NSObject



-(id)_cacheForUUID:(id)arg0 ;
-(id)_suggestedFacesDirectoryURL;
-(id)cachedSuggestedFacesForModeUUID:(id)arg0 ;
-(void)cacheSuggestedFaces:(id)arg0 forModeUUID:(id)arg1 ;
-(void)evictCachedSuggestedFaces;


@end


#endif