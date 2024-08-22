// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSCONTACTRESULTBUILDER_H
#define SSCONTACTRESULTBUILDER_H

@class NSArray, NSDateComponents, CNContact, NSString;


#import "SSResultBuilder.h"

@interface SSContactResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSArray *addresses; // ivar: _addresses
@property (retain, nonatomic) NSArray *alternateNames; // ivar: _alternateNames
@property (retain, nonatomic) NSDateComponents *birthdayComponents; // ivar: _birthdayComponents
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (retain, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *personIdentifier; // ivar: _personIdentifier
@property (retain, nonatomic) NSString *personQueryIdentifier; // ivar: _personQueryIdentifier
@property (retain, nonatomic) NSArray *phoneNumbers; // ivar: _phoneNumbers
@property (retain, nonatomic) NSArray *rawPhoneNumbers; // ivar: _rawPhoneNumbers
@property (nonatomic) BOOL scopesSearchOnEngagement; // ivar: _scopesSearchOnEngagement


+(BOOL)isCoreSpotlightResult;
+(BOOL)supportsResult:(id)arg0 ;
+(id)bundleId;
+(id)infoTupleWithKeyTitle:(id)arg0 values:(id)arg1 ;
+(id)nextUpcomingDateForDateComponents:(id)arg0 ;
+(id)nextUpcomingDateForDateComponents:(id)arg0 fromDate:(id)arg1 ;
+(id)punchoutCommandWithScheme:(id)arg0 path:(id)arg1 queryItems:(id)arg2 ;
+(id)valueWithTitle:(id)arg0 copyString:(id)arg1 command:(id)arg2 previewSymbolName:(id)arg3 ;
-(id)buildAction;
-(id)buildCommand;
-(id)buildCompactCardSection;
-(id)buildDetailedRowCardSection;
-(id)buildFooterResultForEntity;
-(id)buildHeaderResultForEntity;
-(id)buildResult;
-(id)buildSocialMediaResultForEntity;
-(id)buildThumbnail;
-(id)buildTitle;
-(id)infoTupleForPhoneNumbers;
-(id)initWithContact:(id)arg0 ;
-(id)initWithContactEntity:(id)arg0 ;
-(id)initWithResult:(id)arg0 ;
-(id)rowsForKey:(id)arg0 withValues:(id)arg1 symbolName:(id)arg2 commandForString:(id)arg3 ;


@end


#endif