// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHSAFENSCACHEDELEGATEREFLECTOR_H
#define PHSAFENSCACHEDELEGATEREFLECTOR_H

@class NSMapTable, NSString;
@protocol NSCacheDelegate;

#import <Foundation/Foundation.h>


@interface PHSafeNSCacheDelegateReflector : NSObject <NSCacheDelegate>

 {
    os_unfair_lock_s _lock;
    NSMapTable *_delegegatesByCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)removeDelegateForCache:(id)arg0 ;
+(void)setDelegate:(id)arg0 forCache:(id)arg1 ;
-(id)init;
-(void)cache:(id)arg0 willEvictObject:(id)arg1 ;
-(void)removeDelegateForCache:(id)arg0 ;
-(void)setDelegate:(id)arg0 forCache:(id)arg1 ;


@end


#endif