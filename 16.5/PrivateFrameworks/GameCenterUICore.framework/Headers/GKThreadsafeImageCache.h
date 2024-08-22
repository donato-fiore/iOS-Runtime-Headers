// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKTHREADSAFEIMAGECACHE_H
#define GKTHREADSAFEIMAGECACHE_H

@class GKThreadsafeCache, NSString;
@protocol GKScreenConfigurationListener;



@interface GKThreadsafeImageCache : GKThreadsafeCache <GKScreenConfigurationListener>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithName:(id)arg0 maxCount:(NSUInteger)arg1 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)greatestScreenScaleDidChange:(CGFloat)arg0 ;


@end


#endif