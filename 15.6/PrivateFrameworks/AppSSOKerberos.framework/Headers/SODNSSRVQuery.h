// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SODNSSRVQUERY_H
#define SODNSSRVQUERY_H


#import <Foundation/Foundation.h>


@interface SODNSSRVQuery : NSObject



-(id)init;
-(id)lookupSRVWithQuery:(id)arg0 bundleIdentifier:(id)arg1 auditTokenData:(id)arg2 ;
-(void)lookupHost:(id)arg0 port:(id)arg1 bundleIdentifier:(id)arg2 auditTokenData:(id)arg3 completion:(id)arg4 ;
-(void)lookupSRVWithQuery:(id)arg0 bundleIdentifier:(id)arg1 auditTokenData:(id)arg2 completion:(id)arg3 ;


@end


#endif