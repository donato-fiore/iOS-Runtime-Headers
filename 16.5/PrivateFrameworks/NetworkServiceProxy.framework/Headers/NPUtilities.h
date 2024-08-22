// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPUTILITIES_H
#define NPUTILITIES_H


#import <Foundation/Foundation.h>


@interface NPUtilities : NSObject



+(?)fillOutConnectionInfo:(?)arg0 withPath:(?)arg1 interface:(?)arg2 remoteEndpoint:(?)arg3 parametersoutputHandler;
+(BOOL)compareAddressEndpoints:(id)arg0 endpoint2:(id)arg1 addressOnly:(BOOL)arg2 ;
+(BOOL)hasPacketDrop:(id)arg0 ;
+(BOOL)printDictionaryAsJson:(id)arg0 debugName:(id)arg1 ;
+(BOOL)rollDiceWithSuccessRatio:(id)arg0 ;
+(NSInteger)certificateDateIsValid:(struct __SecCertificate *)arg0 ;
+(NSInteger)interfaceTypeOfInterface:(id)arg0 ;
+(NSInteger)interfaceTypeOfNWInterface:(id)arg0 ;
+(NSInteger)protocolTypeFromPath:(id)arg0 endpoint:(id)arg1 ;
+(NSUInteger)parseXRTT:(id)arg0 ;
+(NSUInteger)totalDataInKeychainWithIdentifier:(id)arg0 ;
+(id)connectionInfoToDict:(id)arg0 dictionary:(id)arg1 ;
+(id)copyBase64HeaderValueFromData:(id)arg0 ;
+(id)copyCurrentNetworkCharacteristicsForPath:(id)arg0 ;
+(id)copyDataFromKeychainWithIdentifier:(id)arg0 accountName:(id)arg1 ;
+(id)copyDataHexString:(id)arg0 ;
+(id)copyItemIdentifiersFromKeychainWithAccountName:(id)arg0 ;
+(id)copyNetworkDescription:(id)arg0 ;
+(id)copyTrueClientIPAddressFromPreferences;
+(id)createMaskedIPv4Address:(id)arg0 prefix:(NSUInteger)arg1 ;
+(id)createMaskedIPv6Address:(id)arg0 prefix:(NSUInteger)arg1 ;
+(id)endpointFromString:(id)arg0 defaultPortString:(id)arg1 ;
+(id)getHashForObject:(id)arg0 ;
+(id)getInterfaceName:(NSInteger)arg0 ;
+(id)getInterfaceTypeString:(NSInteger)arg0 ;
+(id)hexDumpBytes:(*void)arg0 length:(NSUInteger)arg1 ;
+(id)machoUUIDFromPID:(int)arg0 ;
+(id)parseXHost:(id)arg0 ;
+(id)sharedEmphemeralSession;
+(id)stringFromLinkQualityValue:(int)arg0 ;
+(id)stripWhitespace:(id)arg0 ;
+(id)timestampIdentifierToName:(NSUInteger)arg0 ;
+(int)pidFromAuditToken:(struct ? )arg0 ;
+(struct __SecKey *)copyKeyFromKeychainWithIdentifier:(id)arg0 ;
+(void)parseXTimeout:(id)arg0 hardTTLInSeconds:(*CGFloat)arg1 ;
+(void)postNotification:(id)arg0 value:(NSUInteger)arg1 ;
+(void)removeDataFromKeychainWithIdentifier:(id)arg0 ;
+(void)removeDataFromKeychainWithIdentifier:(id)arg0 accountName:(id)arg1 ;
+(void)removeKeyFromKeychainWithIdentifier:(id)arg0 ;
+(void)saveDataToKeychain:(id)arg0 withIdentifier:(id)arg1 accountName:(id)arg2 ;
+(void)saveKeyToKeychain:(struct __SecKey *)arg0 withIdentifier:(id)arg1 ;


@end


#endif