// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXFILEUTIL_H
#define ATXFILEUTIL_H


#import <Foundation/Foundation.h>


@interface ATXFileUtil : NSObject



+(BOOL)_shouldUpdateCache:(id)arg0 withRefreshRate:(CGFloat)arg1 currentTime:(CGFloat)arg2 ;
+(BOOL)cachesAreValidForBasePath:(id)arg0 consumerSubTypes:(id)arg1 ;
+(BOOL)cachesAreValidForConsumerSubTypes:(id)arg0 ;
+(BOOL)shouldUpdateCache:(id)arg0 withRefreshRate:(CGFloat)arg1 ;
+(CGFloat)cacheAgeForCache:(id)arg0 withCurrentTime:(CGFloat)arg1 ;
+(CGFloat)cacheAgeForConsumerType:(unsigned char)arg0 ;
+(CGFloat)cacheAgeForConsumerType:(unsigned char)arg0 basePath:(id)arg1 ;


@end


#endif