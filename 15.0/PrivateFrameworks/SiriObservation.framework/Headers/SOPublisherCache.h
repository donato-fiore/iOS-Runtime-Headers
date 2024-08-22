// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOPUBLISHERCACHE_H
#define SOPUBLISHERCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SOPublisherCache : NSObject {
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedInstance;
-(id)init;
-(id)publisherForSnapshotType:(Class)arg0 ;
-(void)removePublisherForSnapshotType:(Class)arg0 ;
-(void)setPublisher:(id)arg0 forSnapshotType:(Class)arg1 ;


@end


#endif