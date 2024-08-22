// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEPROXYSETTINGS_H
#define NEPROXYSETTINGS_H

@class NSArray, NSString, NSURL;
@protocol NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NEProxyServer.h"

@interface NEProxySettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>

 {
    NEProxyServer *_HTTPServer;
    NEProxyServer *_HTTPSServer;
}


@property BOOL FTPEnabled; // ivar: _FTPEnabled
@property (copy) NEProxyServer *FTPServer; // ivar: _FTPServer
@property BOOL HTTPEnabled; // ivar: _HTTPEnabled
@property BOOL HTTPSEnabled; // ivar: _HTTPSEnabled
@property (copy) NEProxyServer *HTTPSServer;
@property (copy) NEProxyServer *HTTPServer;
@property BOOL RTSPEnabled; // ivar: _RTSPEnabled
@property (copy) NEProxyServer *RTSPServer; // ivar: _RTSPServer
@property BOOL SOCKSEnabled; // ivar: _SOCKSEnabled
@property (copy) NEProxyServer *SOCKSServer; // ivar: _SOCKSServer
@property BOOL autoProxyConfigurationEnabled; // ivar: _autoProxyConfigurationEnabled
@property BOOL autoProxyDiscovery; // ivar: _autoProxyDiscovery
@property (readonly) BOOL enabled;
@property (copy) NSArray *exceptionList; // ivar: _exceptionList
@property BOOL excludeSimpleHostnames; // ivar: _excludeSimpleHostnames
@property BOOL gopherEnabled; // ivar: _gopherEnabled
@property (copy) NEProxyServer *gopherServer; // ivar: _gopherServer
@property (copy) NSArray *matchDomains;
@property (copy) NSString *proxyAutoConfigJavaScript; // ivar: _proxyAutoConfigJavaScript
@property (copy) NSURL *proxyAutoConfigURL; // ivar: _proxyAutoConfigURL
@property (copy) NSString *proxyAutoConfigurationJavaScript;
@property (copy) NSURL *proxyAutoConfigurationURL;
@property (copy) NSArray *supplementalMatchDomains; // ivar: _supplementalMatchDomains
@property (copy) NSArray *supplementalMatchOrders; // ivar: _supplementalMatchOrders
@property (readonly, nonatomic) BOOL useForAllDomains;
@property BOOL usePassiveFTP; // ivar: _usePassiveFTP


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)needToUpdateKeychain;
-(id)copyLegacyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initFromLegacyDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)copyPasswordsFromKeychain;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeKeychainItems;
-(void)syncWithKeychain;


@end


#endif