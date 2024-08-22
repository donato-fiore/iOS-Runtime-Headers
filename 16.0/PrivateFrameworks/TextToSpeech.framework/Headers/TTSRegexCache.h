// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTSREGEXCACHE_H
#define TTSREGEXCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TTSRegexCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache; // ivar: _cache


+(id)sharedInstance;
-(id)regexForString:(id)arg0 ;
-(id)regexForString:(id)arg0 atStart:(BOOL)arg1 ;


@end


#endif