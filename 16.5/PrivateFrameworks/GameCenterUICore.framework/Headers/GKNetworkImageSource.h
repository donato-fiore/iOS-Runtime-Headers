// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKNETWORKIMAGESOURCE_H
#define GKNETWORKIMAGESOURCE_H

@class NSMutableDictionary;


#import "GKImageSource.h"

@interface GKNetworkImageSource : GKImageSource

@property (retain, nonatomic) NSMutableDictionary *loadingGroups; // ivar: _loadingGroups


-(BOOL)imageNeedsRefresh:(id)arg0 ;
-(void)loadAndCacheAvatarFromGamedForURLString:(id)arg0 useUIImage:(BOOL)arg1 cacheSubdirectory:(id)arg2 reference:(id)arg3 queue:(id)arg4 handler:(id)arg5 ;
// -(void)loadImageForURLString:(id)arg0 loader:(id)arg1 reference:(unk)arg2 queue:(id)arg3 handler:(id)arg4  ;
-(void)loadImageForURLString:(id)arg0 reference:(id)arg1 queue:(id)arg2 handler:(id)arg3 ;


@end


#endif