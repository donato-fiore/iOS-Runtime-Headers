// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKXPROXYCACHE_H
#define CKXPROXYCACHE_H

@class NSMapTable, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CKXProxyCache : NSObject

@property (retain, nonatomic) NSMapTable *cachedProxies; // ivar: _cachedProxies
@property (retain, nonatomic) NSMutableArray *scopedProxies; // ivar: _scopedProxies
@property (nonatomic) NSInteger totalProxiesCreated; // ivar: _totalProxiesCreated
@property (nonatomic) NSInteger totalProxiesReclaimed; // ivar: _totalProxiesReclaimed


-(id)debugDescription;
-(id)init;
-(id)proxyForClass:(Class)arg0 withScope:(NSInteger)arg1 ;
-(void)_putBackProxyWithoutCheckingScope:(id)arg0 ;
-(void)putBackAllProxiesWithScope:(NSInteger)arg0 ;


@end


#endif