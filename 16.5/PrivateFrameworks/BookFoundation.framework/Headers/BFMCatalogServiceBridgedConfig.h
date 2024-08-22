// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BFMCATALOGSERVICEBRIDGEDCONFIG_H
#define BFMCATALOGSERVICEBRIDGEDCONFIG_H

@class ACAccount, NSString;

#import <Foundation/Foundation.h>


@interface BFMCatalogServiceBridgedConfig : NSObject

@property (readonly) ACAccount *account; // ivar: _account
@property (readonly) NSString *clientIdentifier; // ivar: _clientIdentifier


-(id)config;
-(id)initWithClientIdentifier:(id)arg0 account:(id)arg1 ;


@end


#endif