// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSETTINGSPROXY_H
#define WFSETTINGSPROXY_H

@class NSString, NSDictionary;
@protocol WFSettingsPersistable;

#import <Foundation/Foundation.h>


@interface WFSettingsProxy : NSObject <WFSettingsPersistable>



@property (nonatomic) BOOL authenticated; // ivar: _authenticated
@property (copy, nonatomic) NSString *autoConfigureURL; // ivar: _autoConfigureURL
@property (nonatomic) BOOL autoConfigured; // ivar: _autoConfigured
@property (nonatomic) BOOL autoDiscoveryEnabled; // ivar: _autoDiscoveryEnabled
@property (readonly, nonatomic, getter=isAutomatic) BOOL automatic;
@property (nonatomic) BOOL customProxy; // ivar: _customProxy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *items; // ivar: _items
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (copy, nonatomic) NSString *port; // ivar: _port
@property (copy, nonatomic) NSString *server; // ivar: _server
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *username; // ivar: _username


+(id)defaultProxyConfiguration;
+(id)offConfig;
-(id)initDefaultConfig;
-(id)initWithAutoConfigureURL:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithManualServer:(id)arg0 port:(id)arg1 username:(id)arg2 password:(id)arg3 ;
-(id)protocol;


@end


#endif