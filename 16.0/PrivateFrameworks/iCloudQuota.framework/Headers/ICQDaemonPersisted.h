// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQDAEMONPERSISTED_H
#define ICQDAEMONPERSISTED_H

@class NSNumber, NSMutableDictionary, NSDictionary, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface ICQDaemonPersisted : NSObject

@property (readonly, nonatomic) NSNumber *_cachedQuotaAvailable;
@property (readonly, nonatomic) NSMutableDictionary *_mutablePersistenceDictionary;
@property (readonly, nonatomic) NSDictionary *_persistenceDictionary;
@property (copy, nonatomic) NSString *accountAltDSID; // ivar: _accountAltDSID
@property (nonatomic) CGFloat callbackInterval; // ivar: _callbackInterval
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (nonatomic) BOOL failedToFetchFromServer; // ivar: _failedToFetchFromServer
@property (retain, nonatomic) NSDictionary *failureDetails; // ivar: _failureDetails
@property (retain, nonatomic) NSDate *retrievalDate; // ivar: _retrievalDate
@property (retain, nonatomic) NSDictionary *serverDictionary; // ivar: _serverDictionary


+(CGFloat)defaultCallbackInterval;
+(id)_mutablePlaceholderPersistanceDictionary;
+(id)_placeholderObject;
+(id)_placeholderPersistenceDictionary;
+(id)persistedObject;
+(id)persistenceDomain;
+(id)persistenceKey;
+(id)userDefaults;
+(void)clearPersistedObject;
-(BOOL)isValidForAccount:(id)arg0 ;
-(CGFloat)_callbackIntervalFromServerObject:(id)arg0 ;
-(id)_initWithAccount:(id)arg0 error:(id)arg1 ;
-(id)_initWithAccount:(id)arg0 serverDictionary:(id)arg1 ;
-(id)_initWithAccountAltDSID:(id)arg0 error:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)persistObject;


@end


#endif