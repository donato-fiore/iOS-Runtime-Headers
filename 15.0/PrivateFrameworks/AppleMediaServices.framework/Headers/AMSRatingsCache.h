// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSRATINGSCACHE_H
#define AMSRATINGSCACHE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMSRatingsCache : NSObject

@property (readonly, nonatomic) NSUInteger mediaType; // ivar: _mediaType
@property (readonly, nonatomic) NSString *storeFront; // ivar: _storeFront


-(BOOL)_hasCachedData;
-(BOOL)addCacheData:(id)arg0 ;
-(id)cacheDirectory;
-(id)cachePath;
-(id)cacheTitle;
-(id)getCacheData;
-(id)initWithMediaType:(NSUInteger)arg0 ;
-(id)initWithMediaType:(NSUInteger)arg0 storeFront:(id)arg1 ;
-(void)clearCacheIfNeeded;


@end


#endif