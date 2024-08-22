// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FANETWORKSERVICE_H
#define FANETWORKSERVICE_H

@class ACAccount, AAURLSession;
@protocol FADeviceInfoProtocol, FAURLProvider;

#import <Foundation/Foundation.h>


@interface FANetworkService : NSObject

@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSObject<FADeviceInfoProtocol> *deviceInfo; // ivar: _deviceInfo
@property (readonly, nonatomic) NSObject<FAURLProvider> *urlProvider; // ivar: _urlProvider
@property (readonly, nonatomic) AAURLSession *urlSession; // ivar: _urlSession


-(id)dataWithRequest:(id)arg0 ;
-(id)ensureAccount;
-(id)ensureDeviceUnlockedSinceBoot;
-(id)initWithAccount:(id)arg0 deviceInfo:(id)arg1 urlProvider:(id)arg2 urlSession:(id)arg3 ;
-(id)plistWithRequest:(id)arg0 ;
-(id)plistWithResponse:(id)arg0 ;
-(id)signedRequestWithEndpoint:(id)arg0 ;
-(id)signedRequestWithEndpoint:(id)arg0 method:(id)arg1 headers:(id)arg2 plistBody:(id)arg3 ;
-(id)signedRequestWithURL:(id)arg0 ;
-(id)signedRequestWithURL:(id)arg0 method:(id)arg1 headers:(id)arg2 plistBody:(id)arg3 ;
-(id)standardPlistRequestWithEndpoint:(id)arg0 ;
-(id)standardPlistRequestWithEndpoint:(id)arg0 method:(id)arg1 plistBody:(id)arg2 ;


@end


#endif