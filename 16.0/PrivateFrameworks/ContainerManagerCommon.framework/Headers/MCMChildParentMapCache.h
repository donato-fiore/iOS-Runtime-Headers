// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCHILDPARENTMAPCACHE_H
#define MCMCHILDPARENTMAPCACHE_H

@class NSMutableDictionary, NSString;
@protocol MCMSQLiteDBCodeSigningPeerageDelegate, MCMChildParentMapCache, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MCMSQLiteDB.h"

@interface MCMChildParentMapCache : NSObject <MCMSQLiteDBCodeSigningPeerageDelegate, MCMChildParentMapCache>



@property (readonly, nonatomic) NSMutableDictionary *cache; // ivar: _cache
@property (readonly, nonatomic) MCMSQLiteDB *db; // ivar: _db
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)childBundleIdentifiersForParentIdentifier:(id)arg0 ;
-(id)initWithDB:(id)arg0 queue:(id)arg1 ;
-(id)parentIdentifierForChildIdentifier:(id)arg0 ;
-(void)codeSigningDB:(id)arg0 addChildIdentifier:(id)arg1 forParentIdentifier:(id)arg2 ;
-(void)codeSigningDB:(id)arg0 removeParentIdentifier:(id)arg1 ;


@end


#endif