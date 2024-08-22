// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTVCARDWRITINGADAPTER_H
#define CNCONTACTVCARDWRITINGADAPTER_H

@class NSDictionary, NSDateComponents, NSArray, NSString, NSData;
@protocol CNVCardPerson;

#import <Foundation/Foundation.h>

#import "CNContact.h"

@interface CNContactVCardWritingAdapter : NSObject <CNVCardPerson>

 {
    CNContact *_contact;
}


@property (readonly) NSDictionary *activityAlerts;
@property (readonly) NSDateComponents *alternateBirthdayComponents;
@property (readonly) NSDateComponents *birthdayComponents;
@property (readonly) NSArray *calendarURIs;
@property (readonly) NSString *cardDAVUID;
@property (readonly) NSString *companyName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *department;
@property (readonly, copy) NSString *description;
@property (readonly) int downtimeWhitelistAuthorization;
@property (readonly) NSArray *emailAddresses;
@property (readonly) NSString *firstName;
@property (readonly) NSUInteger hash;
@property (readonly) NSDictionary *imageCropRects;
@property (readonly) NSData *imageData;
@property (readonly) NSData *imageHash;
@property (readonly) NSArray *imageReferences;
@property (readonly) NSString *imageType;
@property (readonly) NSArray *instantMessagingAddresses;
@property (readonly) BOOL isCompany;
@property (readonly) BOOL isMe;
@property (readonly) NSString *jobTitle;
@property (readonly) NSDictionary *largeImageCropRects;
@property (readonly) NSData *largeImageData;
@property (readonly) NSString *lastName;
@property (readonly) NSString *maidenName;
@property (readonly) NSData *memojiMetadata;
@property (readonly) NSString *middleName;
@property (readonly) int nameOrder;
@property (readonly) NSArray *namesOfParentGroups;
@property (readonly) NSString *nickname;
@property (readonly) NSString *note;
@property (readonly) NSString *organization;
@property (readonly) NSArray *otherDateComponents;
@property (readonly) NSArray *phoneNumbers;
@property (readonly) NSString *phonemeData;
@property (readonly) NSString *phoneticFirstName;
@property (readonly) NSString *phoneticLastName;
@property (readonly) NSString *phoneticMiddleName;
@property (readonly) NSString *phoneticOrganization;
@property (readonly) NSArray *postalAddresses;
@property (readonly) NSString *preferredApplePersonaIdentifier;
@property (readonly) NSString *preferredLikenessSource;
@property (readonly) NSString *pronunciationFirstName;
@property (readonly) NSString *pronunciationLastName;
@property (readonly) NSArray *relatedNames;
@property (readonly) NSArray *socialProfiles;
@property (readonly) NSString *suffix;
@property (readonly) Class superclass;
@property (readonly) NSString *title;
@property (readonly) NSString *uid;
@property (readonly) NSArray *unknownProperties;
@property (readonly) NSArray *urls;


+(id)adapterWithContact:(id)arg0 ;
+(id)descriptorForAllSupportedKeys;
-(id)initWithContact:(id)arg0 ;
-(id)largeImageHashOfType:(id)arg0 ;
-(id)vCardPropertyItemsForProperty:(id)arg0 ;
-(id)vCardPropertyItemsForProperty:(id)arg0 valueTransform:(id)arg1 ;


@end


#endif