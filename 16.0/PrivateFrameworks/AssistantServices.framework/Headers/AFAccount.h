// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFACCOUNT_H
#define AFACCOUNT_H

@class NSString, NSDictionary, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFAccount : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *aceHost; // ivar: _aceHost
@property (copy, nonatomic) NSString *assistantIdentifier; // ivar: _assistantIdentifier
@property (copy, nonatomic) NSDictionary *connectionPolicy; // ivar: _connectionPolicy
@property (copy, nonatomic) NSDate *connectionPolicyDate; // ivar: _connectionPolicyDate
@property (copy, nonatomic) NSDate *connectionPolicyFirstFailureDate; // ivar: _connectionPolicyFirstFailureDate
@property (copy, nonatomic) NSString *connectionPolicyHostname; // ivar: _connectionPolicyHostname
@property (copy, nonatomic) NSString *group; // ivar: _group
@property (copy, nonatomic) NSString *hostname; // ivar: _hostname
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSDictionary *lastSyncDates; // ivar: _lastSyncDates
@property (copy, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (copy, nonatomic) NSString *loggingAssistantIdentifier; // ivar: _loggingAssistantIdentifier
@property (copy, nonatomic) NSString *peerAssistantIdentifier; // ivar: _peerAssistantIdentifier
@property (copy, nonatomic) NSString *peerHostname; // ivar: _peerHostname
@property (copy, nonatomic) NSString *peerLanguageCode; // ivar: _peerLanguageCode
@property (copy, nonatomic) NSString *peerLoggingAssistantIdentifier; // ivar: _peerLoggingAssistantIdentifier
@property (nonatomic) BOOL peerSiriEnabled; // ivar: _peerSiriEnabled
@property (copy, nonatomic) NSString *peerSpeechIdentifier; // ivar: _peerSpeechIdentifier
@property (copy, nonatomic) NSString *peerUserAgentString; // ivar: _peerUserAgentString
@property (copy, nonatomic) NSString *predefinedServer; // ivar: _predefinedServer
@property (copy, nonatomic) NSString *speechIdentifier; // ivar: _speechIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessageDictionary:(id)arg0 ;
-(id)messageDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif