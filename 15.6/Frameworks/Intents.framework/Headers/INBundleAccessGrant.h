// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INBUNDLEACCESSGRANT_H
#define INBUNDLEACCESSGRANT_H

@class NSSet, NSDictionary;

#import <Foundation/Foundation.h>


@interface INBundleAccessGrant : NSObject {
    NSInteger _acquireCount;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSSet *bundleIdentifiers;
@property (readonly, nonatomic) NSDictionary *securityScopedURLs; // ivar: _securityScopedURLs


-(id)initWithSecurityScopedURLs:(id)arg0 ;
-(void)acquire;
-(void)dealloc;
-(void)relinquish;


@end


#endif