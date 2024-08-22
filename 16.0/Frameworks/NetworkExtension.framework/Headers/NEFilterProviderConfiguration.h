// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEFILTERPROVIDERCONFIGURATION_H
#define NEFILTERPROVIDERCONFIGURATION_H

@class NSString, NSURL, NSData, NSDictionary;
@protocol NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEFilterProviderConfiguration : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

 {
    BOOL _controlProviderInitialized;
    NSString *_keychainAccessGroup;
}


@property (copy) NSString *dataProviderDesignatedRequirement; // ivar: _dataProviderDesignatedRequirement
@property (copy) NSURL *dataProviderURL; // ivar: _dataProviderURL
@property BOOL disableDefaultDrop; // ivar: _disableDefaultDrop
@property BOOL filterBrowsers; // ivar: _filterBrowsers
@property (copy) NSString *filterDataProviderBundleIdentifier; // ivar: _filterDataProviderBundleIdentifier
@property (copy) NSString *filterPacketProviderBundleIdentifier; // ivar: _filterPacketProviderBundleIdentifier
@property BOOL filterPackets; // ivar: _filterPackets
@property BOOL filterSockets; // ivar: _filterSockets
@property (copy) NSData *identityReference; // ivar: _identityReference
@property (copy) NSString *organization; // ivar: _organization
@property (copy) NSString *packetProviderDesignatedRequirement; // ivar: _packetProviderDesignatedRequirement
@property (copy) NSURL *packetProviderURL; // ivar: _packetProviderURL
@property (copy) NSData *passwordReference; // ivar: _passwordReference
@property (copy) NSString *pluginType; // ivar: _pluginType
@property BOOL preserveExistingConnections; // ivar: _preserveExistingConnections
@property (copy) NSString *serverAddress; // ivar: _serverAddress
@property (copy) NSString *username; // ivar: _username
@property (copy) NSDictionary *vendorConfiguration; // ivar: _vendorConfiguration


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif