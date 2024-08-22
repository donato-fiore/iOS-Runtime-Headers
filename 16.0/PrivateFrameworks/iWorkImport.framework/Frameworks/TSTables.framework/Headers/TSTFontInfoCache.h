// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTFONTINFOCACHE_H
#define TSTFONTINFOCACHE_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface TSTFontInfoCache : NSObject {
    _opaque_pthread_rwlock_t _rwlock;
    os_unfair_lock_s _resolvedTextStyleLock;
}


@property (retain, nonatomic) NSMapTable *cache; // ivar: _cache
@property (retain, nonatomic) NSMapTable *propertyMapToTextStyleMap; // ivar: _propertyMapToTextStyleMap


-(id)fontInfoForTextStyle:(id)arg0 ;
-(id)fontInfoForTextStyle:(id)arg0 withString:(id)arg1 ;
-(id)initWithName:(id)arg0 ;
-(id)resolvedTextStyleWithPropertyMap:(id)arg0 ;
-(void)dealloc;
-(void)p_didEnterBackground:(id)arg0 ;
-(void)p_didReceiveMemoryWarning:(id)arg0 ;


@end


#endif