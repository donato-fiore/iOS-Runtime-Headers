// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMSYSTEMPROXYSETTINGSFETCHER_H
#define IMSYSTEMPROXYSETTINGSFETCHER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IMSystemProxySettingsFetcher : NSObject

@property (copy, nonatomic) NSString *_host; // ivar: _host
@property (nonatomic) unsigned short _port; // ivar: _port
@property (copy, nonatomic) NSString *_proxyAccount; // ivar: _proxyAccount
@property (copy, nonatomic) NSString *_proxyHost; // ivar: _proxyHost
@property (copy, nonatomic) NSString *_proxyPassword; // ivar: _proxyPassword
@property (nonatomic) unsigned short _proxyPort; // ivar: _proxyPort
@property (nonatomic) NSInteger _proxyProtocol; // ivar: _proxyProtocol
@property id *delegate; // ivar: _delegate


-(id)initWithHost:(id)arg0 port:(unsigned short)arg1 delegate:(id)arg2 ;
-(id)initWithProxyProtocol:(NSInteger)arg0 proxyHost:(id)arg1 proxyPort:(unsigned short)arg2 delegate:(id)arg3 ;
-(void)_callAccountSettingsDelegateMethod;
-(void)_callProxySettingsDelegateMethod;
-(void)_getProxyAccountAndPasswordFromKeychain;
-(void)_takeProxySettingsFromDictionary:(struct __CFDictionary *)arg0 ;
-(void)retrieveProxyAccountSettings;
-(void)retrieveProxySettings;


@end


#endif