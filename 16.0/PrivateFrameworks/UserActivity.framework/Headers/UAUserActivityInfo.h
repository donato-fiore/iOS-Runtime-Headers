// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UAUSERACTIVITYINFO_H
#define UAUSERACTIVITYINFO_H

@class NSMutableDictionary, NSString, NSError, NSDictionary, NSDate, NSSet, SFPeerDevice, NSURL, NSUUID, UAUserActivityAnalyticsInfo;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UAUserActivityInfo : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_payloads;
}


@property BOOL active; // ivar: _active
@property (copy) NSString *activityType; // ivar: _activityType
@property (copy) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy) NSString *contentUserAction; // ivar: _contentUserAction
@property (readonly, getter=isDirty) BOOL dirty; // ivar: _dirty
@property (copy) NSString *dynamicActivityType; // ivar: _dynamicActivityType
@property BOOL eligibleForHandoff; // ivar: _eligibleForHandoff
@property BOOL eligibleForPrediction; // ivar: _eligibleForPrediction
@property BOOL eligibleForPublicIndexing; // ivar: _eligibleForPublicIndexing
@property BOOL eligibleForReminders; // ivar: _eligibleForReminders
@property BOOL eligibleForSearch; // ivar: _eligibleForSearch
@property (readonly) BOOL eligibleToAdvertise; // ivar: _eligibleToAdvertise
@property (readonly) BOOL eligibleToAlwaysAdvertise; // ivar: _eligibleToAlwaysAdvertise
@property (copy) NSError *encodedUserInfoError; // ivar: _encodedUserInfoError
@property (copy) NSDictionary *encodingOptions; // ivar: _encodingOptions
@property (copy) NSError *error; // ivar: _error
@property (copy) NSDate *expirationDate; // ivar: _expirationDate
@property (copy) NSSet *keywords; // ivar: _keywords
@property (copy) NSDate *lastInterestingTime; // ivar: _lastInterestingTime
@property (copy) NSDictionary *options; // ivar: _options
@property (getter=isPayloadAvailable) BOOL payloadAvailable; // ivar: _payloadAvailable
@property (getter=isPayloadRequested) BOOL payloadRequested; // ivar: _payloadRequested
@property (copy) NSDictionary *payloads;
@property (retain) SFPeerDevice *peerDevice; // ivar: _peerDevice
@property (copy) NSString *peerDeviceType; // ivar: _peerDeviceType
@property (copy) NSString *persistentIdentifier; // ivar: _persistentIdentifier
@property (copy) NSURL *referrerURL; // ivar: _referrerURL
@property (copy) NSSet *requiredUserInfoKeys; // ivar: _requiredUserInfoKeys
@property (copy) NSString *targetContentIdentifier; // ivar: _targetContentIdentifier
@property (copy) NSString *teamIdentifier; // ivar: _teamIdentifier
@property (copy) NSString *title; // ivar: _title
@property NSUInteger type; // ivar: _type
@property (getter=isUniversalLink) BOOL universalLink; // ivar: _universalLink
@property (copy) NSUUID *uuid; // ivar: _uuid
@property (retain) UAUserActivityAnalyticsInfo *wasContinuedInfo; // ivar: _wasContinuedInfo
@property (copy) NSURL *webpageURL; // ivar: _webpageURL
@property (copy) NSDate *when; // ivar: _when


+(BOOL)supportsSecureCoding;
+(id)encodedInfoToOldEncodedInfo:(id)arg0 ;
-(BOOL)requestPayloadWithCompletionHandler:(id)arg0 ;
-(BOOL)requestPayloadWithCompletionHandlerEvenIfClean:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(BOOL)setPayload:(id)arg0 identifier:(id)arg1 ;
-(BOOL)wasResumedOnAnotherDeviceWithCompletionHandler:(id)arg0 ;
-(id)archiveUserActivityInfo;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithArchivedUserActivityInfo:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 type:(NSUInteger)arg1 options:(id)arg2 ;
-(id)initWithUserActivityInfo:(id)arg0 ;
-(id)logString;
-(id)optionalUserActivityData;
-(id)payloadForIdentifier:(id)arg0 ;
-(id)payloadIdentifiers;
-(id)secondaryUserActivityString;
-(id)statusString;
-(id)userActivityString;
-(void)_createUserActivityStrings:(id)arg0 secondaryString:(id)arg1 optionalData:(id)arg2 ;
-(void)clearPayload;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchAllNearbyAppSuggestions:(id)arg0 ;


@end


#endif