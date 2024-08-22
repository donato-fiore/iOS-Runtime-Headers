// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTPASSTHROUGHRESOURCECACHE_H
#define AVTPASSTHROUGHRESOURCECACHE_H

@class NSString;
@protocol AVTImageCache, AVTResourceCache;

#import <Foundation/Foundation.h>


@interface AVTPassThroughResourceCache : NSObject <AVTImageCache, AVTResourceCache>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)resourceExistsInCacheForItem:(id)arg0 scope:(id)arg1 ;
-(id)imageForItem:(id)arg0 scope:(id)arg1 ;
-(id)imageForItem:(id)arg0 scope:(id)arg1 cacheMissHandler:(id)arg2 ;
-(id)resourceForItem:(id)arg0 scope:(id)arg1 ;
-(id)resourceForItem:(id)arg0 scope:(id)arg1 cacheMissHandler:(id)arg2 ;
-(void)clearCache;


@end


#endif