// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCDAEMONSYNCEDROOTURLCACHE_H
#define BRCDAEMONSYNCEDROOTURLCACHE_H

@class NSString, NSArray;
@protocol BRSyncedRootURLCache;

#import <Foundation/Foundation.h>


@interface BRCDaemonSyncedRootURLCache : NSObject <BRSyncedRootURLCache>



@property (readonly, nonatomic) BOOL cacheMightBePopulated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *syncedRootURLs;


-(id)initWithPersona:(id)arg0 ;


@end


#endif