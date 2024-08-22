// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSQUICKRELAYFIXEDTOKENALLOCATOR_H
#define IDSQUICKRELAYFIXEDTOKENALLOCATOR_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface IDSQuickRelayFixedTokenAllocator : NSObject

@property (copy) NSData *appleID; // ivar: _appleID
@property (copy) NSNumber *relayCombinedSoftwareID; // ivar: _relayCombinedSoftwareID
@property (copy) NSData *relayIP; // ivar: _relayIP
@property (copy) NSData *relayIPv6; // ivar: _relayIPv6
@property (copy) NSNumber *relayPort; // ivar: _relayPort
@property (copy) NSData *relaySessionID; // ivar: _relaySessionID
@property (copy) NSData *relaySessionKey; // ivar: _relaySessionKey
@property (copy) NSData *relaySessionToken; // ivar: _relaySessionToken


-(BOOL)_isSessionInfoValid:(id)arg0 ;
-(id)_parseQuickRelayDefaults;
-(id)initWithDefaults;
-(id)initWithDictionary:(id)arg0 ;
-(void)_setAllValuesFromDictionary:(id)arg0 ;


@end


#endif