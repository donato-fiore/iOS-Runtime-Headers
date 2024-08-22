// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACECOLLECTIONSPUBLISHERICONMANAGER_H
#define MKPLACECOLLECTIONSPUBLISHERICONMANAGER_H

@class NSString, NSCache;
@protocol NSCacheDelegate, MKPublisherIconProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MKPlaceCollectionsPublisherIconManager : NSObject <NSCacheDelegate, MKPublisherIconProvider>

 {
    NSObject<OS_dispatch_queue> *_publisherLogoImageQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSCache *publisherIconCache; // ivar: _publisherIconCache
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_iconForPublisherNamed:(id)arg0 usingId:(unsigned int)arg1 usingContentScale:(CGFloat)arg2 usingSizeGroup:(NSUInteger)arg3 isNightMode:(BOOL)arg4 ;
-(id)iconForPublisherNamed:(id)arg0 usingId:(unsigned int)arg1 usingContentScale:(CGFloat)arg2 usingSizeGroup:(NSUInteger)arg3 isNightMode:(BOOL)arg4 ;
-(id)init;
-(void)cache:(id)arg0 willEvictObject:(id)arg1 ;
-(void)iconForPublisherNamed:(id)arg0 usingId:(unsigned int)arg1 contentScale:(CGFloat)arg2 onCompletion:(id)arg3 ;


@end


#endif