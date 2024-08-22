// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTACT_H
#define WFCONTACT_H

@class NSArray, NSDate, NSString, NSData;
@protocol WFNaming, NSCopying, NSSecureCoding, WFSerializableContent;

#import <Foundation/Foundation.h>

#import "WFContactLabeledValue.h"
#import "WFFileRepresentation.h"

@interface WFContact : NSObject <WFNaming, NSCopying, NSSecureCoding, WFSerializableContent>



@property (readonly, nonatomic) NSArray *URLs;
@property (readonly, nonatomic) WFContactLabeledValue *birthday;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSArray *dates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *formattedName;
@property (readonly, nonatomic) WFFileRepresentation *fullDataVCardRepresentation; // ivar: _fullDataVCardRepresentation
@property (readonly, nonatomic) BOOL hasImageData; // ivar: _hasImageData
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) NSArray *instantMessageAddresses;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *middleName;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) NSInteger multivalueIndex; // ivar: _multivalueIndex
@property (readonly, nonatomic) NSString *namePrefix;
@property (readonly, nonatomic) NSString *nameSuffix;
@property (readonly, nonatomic) NSString *nickname; // ivar: _nickname
@property (readonly, nonatomic) NSString *organization;
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) int propertyID; // ivar: _propertyID
@property (readonly, nonatomic) NSArray *socialProfiles; // ivar: _socialProfiles
@property (readonly, nonatomic) NSArray *streetAddresses;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSData *thumbnailImageData;
@property (readonly, nonatomic) WFFileRepresentation *vCardRepresentation; // ivar: _vCardRepresentation
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
+(Class)preferredConcreteSubclass;
+(NSInteger)predictedTypeForHandleValue:(id)arg0 ;
+(NSInteger)predictedTypeForHandleValue:(id)arg0 allowsCustomHandles:(BOOL)arg1 ;
+(id)addContactsChangeObserver:(id)arg0 ;
+(id)allContactsWithSortOrder:(NSInteger)arg0 ;
+(id)allContactsWithSortOrder:(NSInteger)arg0 passingTest:(id)arg1 ;
+(id)cnContactWithINPerson:(id)arg0 ;
+(id)contactWithVCardData:(id)arg0 propertyID:(int)arg1 multivalueIndex:(NSInteger)arg2 ;
+(id)contactsWithName:(id)arg0 ;
+(id)contactsWithVCardData:(id)arg0 ;
+(id)firstContactWithEmailAddress:(id)arg0 ;
+(id)firstContactWithPhoneNumber:(id)arg0 ;
+(id)labelFromINPersonHandleLabel:(id)arg0 ;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
+(void)removeContactsChangeObserver:(id)arg0 ;
-(BOOL)hasValueForPropertyID:(int)arg0 ;
-(id)INPersonRepresentation;
-(id)contactIdentifierForINPerson;
-(id)contactWithPropertyID:(int)arg0 multivalueIndex:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)vCardRepresentationWithFullData:(BOOL)arg0 ;
-(id)valueForPropertyID:(int)arg0 ;
-(id)wfSerializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif