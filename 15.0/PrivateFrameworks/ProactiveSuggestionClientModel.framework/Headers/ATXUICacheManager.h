// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXUICACHEMANAGER_H
#define ATXUICACHEMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ATXUICacheManager : NSObject {
    NSString *_cacheBasePath;
}




-(BOOL)deleteCacheFileForConsumerSubType:(unsigned char)arg0 ;
-(BOOL)updateCachedLayout:(id)arg0 consumerSubType:(unsigned char)arg1 ;
-(BOOL)writeSerializedDataToCacheFile:(id)arg0 path:(id)arg1 ;
-(CGFloat)cacheAgeForConsumerSubTypeString:(id)arg0 ;
-(id)cacheFilePathForConsumerSubType:(unsigned char)arg0 ;
-(id)cacheFilePathForConsumerSubTypeString:(id)arg0 ;
-(id)cachedLayoutForConsumerSubType:(unsigned char)arg0 expectedClass:(Class)arg1 ;
-(id)consumerSubTypeStringsWithNonEmptyCachedLayout;
-(id)dataFromFileHandle:(id)arg0 ;
-(id)deserializeLayoutData:(id)arg0 expectedClass:(Class)arg1 ;
-(id)init;
-(id)initWithCacheBasePath:(id)arg0 ;
-(id)serializeLayout:(id)arg0 ;


@end


#endif