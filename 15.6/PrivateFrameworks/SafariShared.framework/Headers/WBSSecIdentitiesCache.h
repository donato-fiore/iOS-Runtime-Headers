// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSSECIDENTITIESCACHE_H
#define WBSSECIDENTITIESCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface WBSSecIdentitiesCache : NSObject {
    NSMutableDictionary *_domainsToIdentities;
}




-(id)init;
-(struct __SecIdentity *)secIdentityForDomain:(id)arg0 ;
-(void)setSecIdentity:(struct __SecIdentity *)arg0 forDomain:(id)arg1 ;


@end


#endif