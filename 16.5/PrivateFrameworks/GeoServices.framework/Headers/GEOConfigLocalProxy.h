// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCONFIGLOCALPROXY_H
#define GEOCONFIGLOCALPROXY_H

@class NSPointerArray, NSString;
@protocol GEOConfigProxy;

#import <Foundation/Foundation.h>


@interface GEOConfigLocalProxy : NSObject <GEOConfigProxy>

 {
    os_unfair_recursive_lock_s _lock;
    NSPointerArray *_configStores;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)configExpiryForOptions:(NSUInteger)arg0 ;
-(id)configExpiryForSource:(NSInteger)arg0 ;
-(id)configStoreForOptions:(NSUInteger)arg0 ;
-(id)configStoreForSource:(NSInteger)arg0 ;
-(id)init;


@end


#endif