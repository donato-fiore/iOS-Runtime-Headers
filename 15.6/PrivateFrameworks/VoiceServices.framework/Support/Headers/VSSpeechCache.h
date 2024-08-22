// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSSPEECHCACHE_H
#define VSSPEECHCACHE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VSSpeechCache : NSObject

@property (retain, nonatomic) NSString *dirPath; // ivar: _dirPath
@property (retain, nonatomic) NSString *preinstalledCacheDir; // ivar: _preinstalledCacheDir


+(id)defaultCacheStore;
-(BOOL)isPreinstalledCacheAvailableForRequest:(id)arg0 ;
-(NSUInteger)totalCacheSize;
-(id)addCache:(id)arg0 ;
-(id)cacheDataForKey:(id)arg0 ;
-(id)initWithStorePath:(id)arg0 ;
-(id)preinstalledCacheForText:(id)arg0 language:(id)arg1 name:(id)arg2 ;
-(void)cleanCache;
-(void)deleteCache;


@end


#endif