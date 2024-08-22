// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUPOSTERFRAMEVIEWCACHE_H
#define HUPOSTERFRAMEVIEWCACHE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface HUPosterFrameViewCache : NSObject

@property (retain, nonatomic) NSMutableArray *posterFrameViewQueue; // ivar: _posterFrameViewQueue


+(id)dequeuePosterFrameViewForWidth:(CGFloat)arg0 ;
+(id)sharedCache;
+(void)enqueuePosterFrameView:(id)arg0 ;
+(void)purgeCache;
-(id)init;


@end


#endif