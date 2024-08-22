// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3SPOTLIGHTMATCHINGNAMECACHE_H
#define ML3SPOTLIGHTMATCHINGNAMECACHE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ML3MusicLibrary.h"

@interface ML3SpotlightMatchingNameCache : NSObject {
    unordered_set<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> _matchingSet;
    NSString *_matchString;
    BOOL _idle;
    ML3MusicLibrary *_library;
}




+(void)initialize;
+(void)loadFromLibrary:(id)arg0 namesMatchingString:(id)arg1 cancelHandler:(id)arg2 ;
-(id)_initWithLibrary:(id)arg0 matchString:(id)arg1 cancelHandler:(id)arg2 ;
-(void)dealloc;


@end


#endif