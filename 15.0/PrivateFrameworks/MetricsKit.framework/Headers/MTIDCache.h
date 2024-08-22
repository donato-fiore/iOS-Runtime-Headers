// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTIDCACHE_H
#define MTIDCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MTIDCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache; // ivar: _cache


+(BOOL)idInfo:(id)arg0 isValidForDate:(id)arg1 ;
-(id)IDInfoForScheme:(id)arg0 dsId:(id)arg1 date:(id)arg2 ;
-(id)init;
-(void)addIDInfo:(id)arg0 ;
-(void)removeAllNamespaces;
-(void)removeNamespace:(id)arg0 ;
-(void)removeNamespaces:(id)arg0 ;
-(void)removeUnsyncedNamespaces;


@end


#endif