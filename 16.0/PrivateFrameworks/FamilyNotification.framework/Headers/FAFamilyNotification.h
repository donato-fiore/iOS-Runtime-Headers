// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAFAMILYNOTIFICATION_H
#define FAFAMILYNOTIFICATION_H

@class NSString, NSURL, NSDate, NSNumber, NSData, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FAFamilyNotification : NSObject <NSSecureCoding>



@property (copy) NSString *actionButtonLabel; // ivar: _actionButtonLabel
@property (copy) NSURL *activateActionURL; // ivar: _activateActionURL
@property (copy) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (copy) NSString *delegateMachServiceName; // ivar: _delegateMachServiceName
@property (copy) NSURL *dismissActionlURL; // ivar: _dismissActionlURL
@property NSUInteger displayStyle; // ivar: _displayStyle
@property (copy) NSDate *expiryDate; // ivar: _expiryDate
@property (copy) NSNumber *familyMemberDSID; // ivar: _familyMemberDSID
@property BOOL hasActionButton; // ivar: _hasActionButton
@property (copy) NSString *identifier; // ivar: _identifier
@property (copy) NSString *informativeText; // ivar: _informativeText
@property (copy) NSData *launchActionArguments; // ivar: _launchActionArguments
@property (copy) NSURL *launchActionURL; // ivar: _launchActionURL
@property (copy) NSString *otherButtonLabel; // ivar: _otherButtonLabel
@property (copy) NSDate *relevanceDate; // ivar: _relevanceDate
@property BOOL shouldPersistWhenActivated; // ivar: _shouldPersistWhenActivated
@property BOOL shouldPersistWhenDismissed; // ivar: _shouldPersistWhenDismissed
@property (copy) NSString *title; // ivar: _title
@property (copy) NSString *unlockActionLabel; // ivar: _unlockActionLabel
@property (copy) NSDictionary *userInfo; // ivar: _userInfo
@property (copy) NSString *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)cacheDictionaryRepresentation;
-(id)description;
-(id)init;
-(id)initWithCacheDictionaryRepresentation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif