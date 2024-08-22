// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2SERVER_H
#define NEIKEV2SERVER_H

@class NSString, NSArray;
@protocol NSObject, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NEIKEv2AddressList.h"

@interface NEIKEv2Server : NSObject <NSObject>

 {
    unsigned int _redirects;
    NSString *_serverAddress;
    NEIKEv2AddressList *_resolvedAddressList;
    NSString *_redirectedFromAddress;
    NSArray *_additionalIPv4ServerAddresses;
    NSArray *_additionalIPv6ServerAddresses;
    NSObject<OS_dispatch_source> *_redirectTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif