// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXGENERICFILEBASEDCACHE_H
#define ATXGENERICFILEBASEDCACHE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ATXGenericFileBasedCache : NSObject {
    NSString *_cacheFilePath;
}




-(BOOL)storeData:(id)arg0 ;
-(id)init;
-(id)initWithCacheFilePath:(id)arg0 ;
-(void)readWithMaxValidAge:(CGFloat)arg0 unlink:(BOOL)arg1 cacheDataOut:(*id)arg2 cacheAgeOut:(*CGFloat)arg3 ;


@end


#endif