// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2SERVER_H
#define NEIKEV2SERVER_H

@class NSArray, NSString;
@protocol NSObject, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NEIKEv2AddressList.h"

@interface NEIKEv2Server : NSObject <NSObject>



@property (retain) NSArray *additionalIPv4ServerAddresses; // ivar: _additionalIPv4ServerAddresses
@property (retain) NSArray *additionalIPv6ServerAddresses; // ivar: _additionalIPv6ServerAddresses
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_dispatch_source> *redirectTimer; // ivar: _redirectTimer
@property (retain) NSString *redirectedFromAddress; // ivar: _redirectedFromAddress
@property unsigned int redirects; // ivar: _redirects
@property (retain) NEIKEv2AddressList *resolvedAddressList; // ivar: _resolvedAddressList
@property (retain) NSString *serverAddress; // ivar: _serverAddress
@property (readonly) Class superclass;


-(BOOL)checkRedirectCount;
-(BOOL)startRedirectTimer;
-(id)getNextViableServerAddressForPath:(id)arg0 ;
-(id)getViableServerAddressForPath:(id)arg0 ;
-(void)dealloc;
-(void)setServerResolvedAddress:(id)arg0 path:(id)arg1 ;
-(void)stopRedirectTimer;


@end


#endif