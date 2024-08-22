// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNVCARDPERSON_H
#define CNVCARDPERSON_H

@class NSDictionary, NSDateComponents, NSArray, NSString, NSData;
@protocol CNVCardPerson;

#import <Foundation/Foundation.h>


@interface CNVCardPerson : NSObject <CNVCardPerson>



@property (retain) NSDictionary *activityAlerts; // ivar: _activityAlerts
@property (retain) NSDateComponents *alternateBirthdayComponents; // ivar: _alternateBirthdayComponents
@property (retain) NSDateComponents *birthdayComponents; // ivar: _birthdayComponents
@property (retain) NSArray *calendarURIs; // ivar: _calendarURIs
@property (retain) NSString *cardDAVUID; // ivar: _cardDAVUID
@property (readonly) NSString *companyName;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSString *department; // ivar: _department
@property (readonly, copy) NSString *description;
@property int downtimeWhitelistAuthorization; // ivar: _downtimeWhitelistAuthorization
@property (retain) NSArray *emailAddresses; // ivar: _emailAddresses
@property (retain) NSString *firstName; // ivar: _firstName
@property (readonly) NSUInteger hash;
@property (retain) NSDictionary *imageCropRects; // ivar: _imageCropRects
@property (retain) NSData *imageData; // ivar: _imageData
@property (retain) NSData *imageHash; // ivar: _imageHash
@property (retain) NSArray *imageReferences; // ivar: _imageReferences
@property (retain) NSString *imageType; // ivar: _imageType
@property (retain) NSArray *instantMessagingAddresses; // ivar: _instantMessagingAddresses
@property BOOL isCompany; // ivar: _isCompany
@property BOOL isMe; // ivar: _isMe
@property (retain) NSString *jobTitle; // ivar: _jobTitle
@property (retain) NSDictionary *largeImageCropRects; // ivar: _largeImageCropRects
@property (retain) NSData *largeImageData; // ivar: _largeImageData
@property (retain) NSString *lastName; // ivar: _lastName
@property (retain) NSString *maidenName; // ivar: _maidenName
@property (retain) NSData *memojiMetadata; // ivar: _memojiMetadata
@property (retain) NSString *middleName; // ivar: _middleName
@property int nameOrder; // ivar: _nameOrder
@property (retain) NSArray *namesOfParentGroups; // ivar: _namesOfParentGroups
@property (retain) NSString *nickname; // ivar: _nickname
@property (retain) NSString *note; // ivar: _note
@property (retain) NSString *organization; // ivar: _organization
@property (retain) NSArray *otherDateComponents; // ivar: _otherDateComponents
@property (retain) NSArray *phoneNumbers; // ivar: _phoneNumbers
@property (retain) NSString *phonemeData; // ivar: _phonemeData
@property (retain) NSString *phoneticFirstName; // ivar: _phoneticFirstName
@property (retain) NSString *phoneticLastName; // ivar: _phoneticLastName
@property (retain) NSString *phoneticMiddleName; // ivar: _phoneticMiddleName
@property (retain) NSString *phoneticOrganization; // ivar: _phoneticOrganization
@property (retain) NSArray *postalAddresses; // ivar: _postalAddresses
@property (retain) NSString *preferredApplePersonaIdentifier; // ivar: _preferredApplePersonaIdentifier
@property (retain) NSString *preferredLikenessSource; // ivar: _preferredLikenessSource
@property (retain) NSString *pronunciationFirstName; // ivar: _pronunciationFirstName
@property (retain) NSString *pronunciationLastName; // ivar: _pronunciationLastName
@property (retain) NSArray *relatedNames; // ivar: _relatedNames
@property (retain) NSArray *socialProfiles; // ivar: _socialProfiles
@property (retain) NSString *suffix; // ivar: _suffix
@property (readonly) Class superclass;
@property (retain) NSString *title; // ivar: _title
@property (retain) NSString *uid; // ivar: _uid
@property (retain) NSArray *unknownProperties; // ivar: _unknownProperties
@property (retain) NSArray *urls; // ivar: _urls


-(id)largeImageHashOfType:(id)arg0 ;


@end


#endif