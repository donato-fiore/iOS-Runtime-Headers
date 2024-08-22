// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUCONTACTSDATAPROVIDERFETCHREQUEST_H
#define TUCONTACTSDATAPROVIDERFETCHREQUEST_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface TUContactsDataProviderFetchRequest : NSObject

@property (copy, nonatomic) NSArray *auxiliaryKeysToFetch; // ivar: _auxiliaryKeysToFetch
@property (readonly, nonatomic, getter=isBlocked) BOOL blocked; // ivar: _blocked
@property (readonly, copy, nonatomic) NSString *callerNameFromNetwork; // ivar: _callerNameFromNetwork
@property (copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, nonatomic, getter=isConversation) BOOL conversation; // ivar: _conversation
@property (readonly, nonatomic, getter=isEmergency) BOOL emergency; // ivar: _emergency
@property (readonly, copy, nonatomic) NSArray *handles; // ivar: _handles
@property (readonly, nonatomic, getter=isIncoming) BOOL incoming; // ivar: _incoming
@property (readonly, copy, nonatomic) NSString *isoCountryCode; // ivar: _isoCountryCode
@property (copy, nonatomic) NSString *phoneNumberPrefixHint; // ivar: _phoneNumberPrefixHint
@property (nonatomic) BOOL useNetworkCountryCode; // ivar: _useNetworkCountryCode
@property (readonly, nonatomic, getter=isVerified) BOOL verified; // ivar: _verified
@property (readonly, nonatomic, getter=isVoicemail) BOOL voicemail; // ivar: _voicemail


-(id)description;
-(id)init;
-(id)initWithCall:(id)arg0 ;
-(id)initWithHandle:(id)arg0 ;
-(id)initWithHandles:(id)arg0 ;


@end


#endif