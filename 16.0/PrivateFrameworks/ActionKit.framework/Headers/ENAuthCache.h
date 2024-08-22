// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENAUTHCACHE_H
#define ENAUTHCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "ENAuthCacheEntry.h"

@interface ENAuthCache : NSObject

@property (retain, nonatomic) ENAuthCacheEntry *businessCache; // ivar: _businessCache
@property (retain, nonatomic) NSMutableDictionary *linkedCache; // ivar: _linkedCache


-(id)authenticationResultForBusiness;
-(id)authenticationResultForLinkedNotebookGuid:(id)arg0 ;
-(id)init;
-(void)setAuthenticationResult:(id)arg0 forLinkedNotebookGuid:(id)arg1 ;
-(void)setAuthenticationResultForBusiness:(id)arg0 ;


@end


#endif