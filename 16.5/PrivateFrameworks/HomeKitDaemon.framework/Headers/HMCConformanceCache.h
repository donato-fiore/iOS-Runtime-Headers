// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMCCONFORMANCECACHE_H
#define HMCCONFORMANCECACHE_H

@class HMFObject, NSSet, NSMapTable;



@interface HMCConformanceCache : HMFObject {
    os_unfair_lock_s _lock;
    NSSet *_protocols;
    NSMapTable *_conformanceCache;
}




-(BOOL)classConforms:(Class)arg0 ;
-(BOOL)objectConforms:(id)arg0 ;
-(id)initWithProtocol:(id)arg0 ;
-(id)initWithProtocols:(id)arg0 ;
-(void)refreshConformanceOf:(Class)arg0 ;


@end


#endif