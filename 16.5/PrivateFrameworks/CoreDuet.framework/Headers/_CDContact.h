// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDCONTACT_H
#define _CDCONTACT_H

@class NSString, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_CDContactStatistics.h"

@interface _CDContact : NSObject <NSCopying, NSSecureCoding>



@property (retain) NSString *customIdentifier; // ivar: _customIdentifier
@property (retain) NSURL *displayImageURL; // ivar: _displayImageURL
@property (retain) NSString *displayName; // ivar: _displayName
@property NSUInteger displayType; // ivar: _displayType
@property (readonly) NSString *handle;
@property (retain) NSString *identifier; // ivar: _identifier
@property (retain) NSString *identifierType;
@property NSInteger participantStatus; // ivar: _participantStatus
@property (retain) NSString *personId; // ivar: _personId
@property NSUInteger personIdType; // ivar: _personIdType
@property (retain) _CDContactStatistics *statistics; // ivar: _statistics
@property NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(NSUInteger)typeFromString:(id)arg0 ;
+(id)_CDValueForContactProperty:(id)arg0 ;
+(id)_contactPropertiesForContacts:(id)arg0 mechanismHints:(id)arg1 ;
+(id)contactPropertiesForContacts:(id)arg0 ;
+(id)contactPropertiesForContacts:(id)arg0 mechanismHints:(id)arg1 ;
+(id)contactWithIdentifier:(id)arg0 identifierType:(id)arg1 ;
+(id)contactWithIdentifier:(id)arg0 identifierType:(id)arg1 displayName:(id)arg2 personId:(id)arg3 personIdType:(NSUInteger)arg4 ;
+(id)contactWithIdentifier:(id)arg0 identifierType:(id)arg1 personId:(id)arg2 personIdType:(NSUInteger)arg3 ;
+(id)contactWithIdentifier:(id)arg0 type:(NSUInteger)arg1 displayName:(id)arg2 personId:(id)arg3 personIdType:(NSUInteger)arg4 ;
+(id)normalizedStringKey:(id)arg0 ;
+(id)predicateForContact:(id)arg0 ;
+(id)predicateForContactWithDisplayName:(id)arg0 ;
+(id)predicateForContactWithIdentifier:(id)arg0 ;
+(id)predicateForContactWithPersonId:(id)arg0 personIdType:(NSUInteger)arg1 ;
+(id)predicateForContactWithType:(NSUInteger)arg0 ;
+(id)typeAsCNContactPropertyKey:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mayContainPrefix:(id)arg0 ;
-(BOOL)mayRepresentSamePersonAs:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)contactProperty;
-(id)contactPropertyWithMechanismHint:(NSInteger)arg0 ;
-(id)contactPropertyWithOptionalMechanismHint:(*NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContactProperty:(id)arg0 ;
-(id)initWithINPerson:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 type:(NSUInteger)arg1 customIdentifier:(id)arg2 displayName:(id)arg3 displayType:(NSUInteger)arg4 personId:(id)arg5 personIdType:(NSUInteger)arg6 ;
-(id)initWithIdentifier:(id)arg0 type:(NSUInteger)arg1 customIdentifier:(id)arg2 displayName:(id)arg3 displayType:(NSUInteger)arg4 personId:(id)arg5 personIdType:(NSUInteger)arg6 displayImageURL:(id)arg7 ;
-(id)initWithIdentifier:(id)arg0 type:(NSUInteger)arg1 displayName:(id)arg2 personId:(id)arg3 personIdType:(NSUInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithContact:(id)arg0 ;


@end


#endif