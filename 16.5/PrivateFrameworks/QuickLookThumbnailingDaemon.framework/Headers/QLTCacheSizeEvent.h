// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLTCACHESIZEEVENT_H
#define QLTCACHESIZEEVENT_H

@class NSString;
@protocol QLTAnalyticsEventProtocol;

#import <Foundation/Foundation.h>


@interface QLTCacheSizeEvent : NSObject <QLTAnalyticsEventProtocol>



@property (readonly) NSUInteger cacheSize; // ivar: _cacheSize
@property (readonly) NSString *name;
@property (readonly) id *propertiesBuilder;


-(id)build;
-(id)initWithCacheSize:(NSUInteger)arg0 ;


@end


#endif