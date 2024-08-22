// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XRCAPABILITYCONTEXT_H
#define XRCAPABILITYCONTEXT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface XRCapabilityContext : NSObject {
    _opaque_pthread_rwlock_t _lock;
    NSMutableDictionary *_capabilities;
    NSMutableDictionary *_unimplementedResponses;
}




+(id)currentContextSet;
+(void)announceUsedCapability:(id)arg0 version:(NSUInteger)arg1 ;
+(void)enterContextSet:(id)arg0 ;
+(void)leaveContextSet:(id)arg0 ;
-(id)init;
-(void)addToCurrentContextSet;
-(void)announceUsedCapability:(id)arg0 version:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)enumerateRequiredCapabilities:(id)arg0 ;
-(void)removeFromCurrentContextSet;


@end


#endif