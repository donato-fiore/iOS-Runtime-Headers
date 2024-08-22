// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCLIENTCODESIGNINFOCACHE_H
#define MCMCLIENTCODESIGNINFOCACHE_H

@class NSString;
@protocol MCMClientCodeSignInfoCache, MCMCache;

#import <Foundation/Foundation.h>


@interface MCMClientCodeSignInfoCache : NSObject <MCMClientCodeSignInfoCache>



@property (readonly, nonatomic) NSObject<MCMCache> *cache; // ivar: _cache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)codeSignInfoForCDHash:(id)arg0 identifier:(id)arg1 error:(*id)arg2 generator:(id)arg3 ;
-(id)init;
-(void)flush;


@end


#endif