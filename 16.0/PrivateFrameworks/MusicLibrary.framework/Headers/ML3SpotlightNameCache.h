// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3SPOTLIGHTNAMECACHE_H
#define ML3SPOTLIGHTNAMECACHE_H


#import <Foundation/Foundation.h>

#import "ML3MusicLibrary.h"

@interface ML3SpotlightNameCache : NSObject {
    unordered_map<long long, NSString *, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, NSString *>>> _map;
    BOOL _idle;
    ML3MusicLibrary *_library;
}




+(id)copyFromLibrary:(id)arg0 cancelHandler:(id)arg1 ;
+(void)initialize;
-(id)_initWithLibrary:(id)arg0 cancelHandler:(id)arg1 ;
-(void)dealloc;


@end


#endif