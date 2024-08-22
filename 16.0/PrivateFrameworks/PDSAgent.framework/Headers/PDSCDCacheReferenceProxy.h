// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDSCDCACHEREFERENCEPROXY_H
#define PDSCDCACHEREFERENCEPROXY_H

@class NSProxy, NSPersistentContainer;


#import "PDSCDCacheContainer.h"

@interface PDSCDCacheReferenceProxy : NSProxy

@property (retain, nonatomic) PDSCDCacheContainer *cacheContainer; // ivar: _cacheContainer
@property (retain, nonatomic) NSPersistentContainer *persistentContainer; // ivar: _persistentContainer


-(BOOL)conformsToProtocol:(id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithCacheContainer:(id)arg0 persistentContainer:(id)arg1 ;


@end


#endif