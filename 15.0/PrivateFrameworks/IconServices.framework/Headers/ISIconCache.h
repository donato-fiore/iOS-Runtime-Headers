// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISICONCACHE_H
#define ISICONCACHE_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>

#import "ISStore.h"
#import "ISStoreIndex.h"

@interface ISIconCache : NSObject

@property (readonly) NSString *cachePath;
@property (readonly) NSURL *cacheURL; // ivar: _cacheURL
@property (readonly) NSUInteger sandboxToken; // ivar: _sandboxToken
@property (readonly) ISStore *store; // ivar: _store
@property (readonly) ISStoreIndex *storeIndex; // ivar: _storeIndex


+(id)defaultIconCache;
-(BOOL)findStoreUnitForIcon:(id)arg0 descriptor:(id)arg1 UUID:(*id)arg2 validationToken:(*id)arg3 ;
-(id)description;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithURL:(id)arg0 storeIndex:(id)arg1 sandboxExtensionToken:(NSUInteger)arg2 ;
-(id)storeUnitForUUID:(id)arg0 ;
-(void)clear;
-(void)dealloc;


@end


#endif