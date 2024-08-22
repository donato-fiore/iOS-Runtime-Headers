// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCONTACT_H
#define ASCONTACT_H

@class NSString, NSDate, NSArray;
@protocol ESDataElement;


#import "ASChangedCollectionLeaf.h"

@interface ASContact : ASChangedCollectionLeaf <ESDataElement>



@property (nonatomic, setter=setABRecord:) *void abRecord; // ivar: _abRecord
@property (retain, nonatomic) NSString *accountName; // ivar: _accountName
@property (retain, nonatomic) NSDate *anniversary; // ivar: _anniversary
@property (retain, nonatomic) NSString *assistantName; // ivar: _assistantName
@property (retain, nonatomic) NSString *assistantTelephoneNumber; // ivar: _assistantTelephoneNumber
@property (retain, nonatomic) NSDate *birthday; // ivar: _birthday
@property (retain, nonatomic) NSString *body; // ivar: _body
@property (nonatomic) int bodySize; // ivar: _bodySize
@property (nonatomic) BOOL bodyTruncated; // ivar: _bodyTruncated
@property (retain, nonatomic) NSString *business2TelephoneNumber; // ivar: _business2TelephoneNumber
@property (retain, nonatomic) NSString *businessAddressCity; // ivar: _businessAddressCity
@property (retain, nonatomic) NSString *businessAddressCountry; // ivar: _businessAddressCountry
@property (retain, nonatomic) NSString *businessAddressPostalCode; // ivar: _businessAddressPostalCode
@property (retain, nonatomic) NSString *businessAddressState; // ivar: _businessAddressState
@property (retain, nonatomic) NSString *businessAddressStreet; // ivar: _businessAddressStreet
@property (retain, nonatomic) NSString *businessFaxNumber; // ivar: _businessFaxNumber
@property (retain, nonatomic) NSString *businessTelephoneNumber; // ivar: _businessTelephoneNumber
@property (retain, nonatomic) NSString *carTelephoneNumber; // ivar: _carTelephoneNumber
@property (retain, nonatomic) NSArray *categories; // ivar: _categories
@property (retain, nonatomic) NSArray *children; // ivar: _children
@property (retain, nonatomic) NSString *companyMainPhone; // ivar: _companyMainPhone
@property (retain, nonatomic) NSString *companyName; // ivar: _companyName
@property (retain, nonatomic) NSString *customerID; // ivar: _customerID
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *department; // ivar: _department
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *email1Address; // ivar: _email1Address
@property (retain, nonatomic) NSString *email2Address; // ivar: _email2Address
@property (retain, nonatomic) NSString *email3Address; // ivar: _email3Address
@property (retain, nonatomic) NSString *fileAs; // ivar: _fileAs
@property (nonatomic) NSInteger fileAsAutoConstruction; // ivar: _fileAsAutoConstruction
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (retain, nonatomic) NSString *governmentID; // ivar: _governmentID
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *home2TelephoneNumber; // ivar: _home2TelephoneNumber
@property (retain, nonatomic) NSString *homeAddressCity; // ivar: _homeAddressCity
@property (retain, nonatomic) NSString *homeAddressCountry; // ivar: _homeAddressCountry
@property (retain, nonatomic) NSString *homeAddressPostalCode; // ivar: _homeAddressPostalCode
@property (retain, nonatomic) NSString *homeAddressState; // ivar: _homeAddressState
@property (retain, nonatomic) NSString *homeAddressStreet; // ivar: _homeAddressStreet
@property (retain, nonatomic) NSString *homeFaxNumber; // ivar: _homeFaxNumber
@property (retain, nonatomic) NSString *homeTelephoneNumber; // ivar: _homeTelephoneNumber
@property (retain, nonatomic) NSString *im1Address; // ivar: _im1Address
@property (retain, nonatomic) NSString *im2Address; // ivar: _im2Address
@property (retain, nonatomic) NSString *im3Address; // ivar: _im3Address
@property (retain, nonatomic) NSString *jobTitle; // ivar: _jobTitle
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) NSString *managerName; // ivar: _managerName
@property (retain, nonatomic) NSString *middleName; // ivar: _middleName
@property (retain, nonatomic) NSString *mms; // ivar: _mms
@property (retain, nonatomic) NSString *mobileTelephoneNumber; // ivar: _mobileTelephoneNumber
@property (retain, nonatomic) NSString *nickName; // ivar: _nickName
@property (retain, nonatomic) NSString *officeLocation; // ivar: _officeLocation
@property (retain, nonatomic) NSString *otherAddressCity; // ivar: _otherAddressCity
@property (retain, nonatomic) NSString *otherAddressCountry; // ivar: _otherAddressCountry
@property (retain, nonatomic) NSString *otherAddressPostalCode; // ivar: _otherAddressPostalCode
@property (retain, nonatomic) NSString *otherAddressState; // ivar: _otherAddressState
@property (retain, nonatomic) NSString *otherAddressStreet; // ivar: _otherAddressStreet
@property (retain, nonatomic) NSString *pagerNumber; // ivar: _pagerNumber
@property (retain, nonatomic) NSString *picture; // ivar: _picture
@property (retain, nonatomic) NSString *radioTelephoneNumber; // ivar: _radioTelephoneNumber
@property (retain, nonatomic) NSString *spouse; // ivar: _spouse
@property (retain, nonatomic) NSString *suffix; // ivar: _suffix
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *webpage; // ivar: _webpage
@property (retain, nonatomic) NSString *yomiCompanyName; // ivar: _yomiCompanyName
@property (retain, nonatomic) NSString *yomiFirstName; // ivar: _yomiFirstName
@property (retain, nonatomic) NSString *yomiLastName; // ivar: _yomiLastName


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
+(id)contactWithABRecord:(*void)arg0 serverID:(id)arg1 ;
+(id)externalRepClasses;
+(void)_setSystemTimeZoneForUnitTests:(id)arg0 ;
-(BOOL)_saveDatesToAddressBookWithExistingRecord:(*void)arg0 shouldMergeProperties:(BOOL)arg1 ;
-(BOOL)_saveEmailsToAddressBookWithExistingRecord:(*void)arg0 shouldMergeProperties:(BOOL)arg1 ;
-(BOOL)_saveExternalRepToAddressBookWithExistingRecord:(*void)arg0 shouldMergeProperties:(BOOL)arg1 storeExternalRep:(BOOL)arg2 ;
-(BOOL)_saveIMsToAddressBookWithExistingRecord:(*void)arg0 shouldMergeProperties:(BOOL)arg1 ;
-(BOOL)_savePhoneNumbersToAddressBookWithExistingRecord:(*void)arg0 shouldMergeProperties:(BOOL)arg1 ;
-(BOOL)_saveRelatedNamesToAddressBookWithExistingRecord:(*void)arg0 shouldMergeProperties:(BOOL)arg1 ;
-(BOOL)_saveStreetAddressesToAddressBookWithExistingRecord:(*void)arg0 shouldMergeProperties:(BOOL)arg1 ;
-(BOOL)_saveURLsToAddressBookWithExistingRecord:(*void)arg0 shouldMergeProperties:(BOOL)arg1 ;
-(BOOL)_setDatesWithExistingRecord:(*void)arg0 ;
-(BOOL)_setEmailsWithExistingRecord:(*void)arg0 ;
-(BOOL)_setExternalRepWithExistingRecord:(*void)arg0 ;
-(BOOL)_setIMsWithExistingRecord:(*void)arg0 ;
-(BOOL)_setPhoneNumbersWithExistingRecord:(*void)arg0 ;
-(BOOL)_setRelatedNamesWithExistingRecord:(*void)arg0 ;
-(BOOL)_setStreetAddressesWithExistingRecord:(*void)arg0 ;
-(BOOL)_setURLsWithExistingRecord:(*void)arg0 ;
-(BOOL)deleteFromAddressBook;
-(BOOL)deleteFromContainer:(*void)arg0 ;
-(BOOL)loadABRecord;
-(BOOL)loadLocalItemWithAccount:(id)arg0 ;
-(BOOL)saveServerIDToContact;
-(BOOL)saveServerIDToExistingItem;
-(BOOL)saveToAddressBookWithExistingRecord:(*void)arg0 inSource:(*void)arg1 shouldMergeProperties:(BOOL)arg2 outMergeDidChooseLocalProperties:(*BOOL)arg3 storeExternalRep:(BOOL)arg4 ;
-(BOOL)saveWithLocalObject:(*void)arg0 toContainer:(*void)arg1 shouldMergeProperties:(BOOL)arg2 outMergeDidChooseLocalProperties:(*BOOL)arg3 account:(id)arg4 ;
-(NSInteger)dataclass;
-(id)_transformedDateForABFramework:(id)arg0 ;
-(id)_transformedDateForActiveSync:(id)arg0 ;
-(id)bestEmailFromAppData:(int)arg0 ;
-(id)initWithABRecord:(*void)arg0 serverID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_detectFileAsAutoConstruction;
-(void)_loadAttributesFromABRecord:(*void)arg0 ;
-(void)_reconstructFileAsField;
-(void)_setImageOnContactFromPerson:(*void)arg0 ;
-(void)appendActiveSyncDataForTask:(id)arg0 toWBXMLData:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadClientIDs;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;
-(void)postProcessApplicationData;
-(void)setLocalItem:(*void)arg0 ;


@end


#endif