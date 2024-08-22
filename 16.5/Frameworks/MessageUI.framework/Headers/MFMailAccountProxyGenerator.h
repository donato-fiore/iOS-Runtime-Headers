// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMAILACCOUNTPROXYGENERATOR_H
#define MFMAILACCOUNTPROXYGENERATOR_H

@class NSString;
@protocol MFMailAccountProxyGenerator;

#import <Foundation/Foundation.h>

#import "_MFMailAccountProxySource.h"

@interface MFMailAccountProxyGenerator : NSObject <MFMailAccountProxyGenerator>

 {
    _MFMailAccountProxySource *_proxySource;
    BOOL _allowsRestrictedAccounts;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)accountProxyContainingEmailAddress:(id)arg0 includingInactive:(BOOL)arg1 ;
-(id)accountProxyContainingEmailAddress:(id)arg0 includingInactive:(BOOL)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 ;
-(id)activeAccountProxiesOriginatingBundleID:(id)arg0 sourceAccountManagement:(int)arg1 ;
-(id)allAccountProxies;
-(id)defaultMailAccountProxyForDeliveryOriginatingBundleID:(id)arg0 sourceAccountManagement:(int)arg1 ;
-(id)init;
-(id)initWithAllowsRestrictedAccounts:(BOOL)arg0 ;


@end


#endif