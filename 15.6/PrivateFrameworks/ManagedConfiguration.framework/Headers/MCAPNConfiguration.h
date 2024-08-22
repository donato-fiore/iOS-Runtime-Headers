// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCAPNCONFIGURATION_H
#define MCAPNCONFIGURATION_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface MCAPNConfiguration : NSObject

@property (retain, nonatomic) NSNumber *allowedProtocolMask; // ivar: _allowedProtocolMask
@property (retain, nonatomic) NSNumber *allowedProtocolMaskInDomesticRoaming; // ivar: _allowedProtocolMaskInDomesticRoaming
@property (retain, nonatomic) NSNumber *allowedProtocolMaskInRoaming; // ivar: _allowedProtocolMaskInRoaming
@property (retain, nonatomic) NSString *authenticationType; // ivar: _authenticationType
@property (retain, nonatomic) NSNumber *defaultProtocolMask; // ivar: _defaultProtocolMask
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) NSNumber *proxyPort; // ivar: _proxyPort
@property (retain, nonatomic) NSString *proxyServer; // ivar: _proxyServer
@property (retain, nonatomic) NSString *username; // ivar: _username


-(id)description;
-(id)initWithDictionary:(id)arg0 outError:(*id)arg1 ;
-(id)localizedAuthenticationType;
-(id)stubDictionary;


@end


#endif