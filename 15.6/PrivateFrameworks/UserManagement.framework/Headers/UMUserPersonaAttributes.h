// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UMUSERPERSONAATTRIBUTES_H
#define UMUSERPERSONAATTRIBUTES_H

@class NSDate, NSURL, NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UMUserPersonaAttributes : NSObject <NSCopying>



@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (nonatomic) BOOL isDataSeparatedPersona; // ivar: _isDataSeparatedPersona
@property (nonatomic) BOOL isDefaultPersona; // ivar: _isDefaultPersona
@property (nonatomic) BOOL isDisabled; // ivar: _isDisabled
@property (nonatomic) BOOL isEnterprisePersona; // ivar: _isEnterprisePersona
@property (nonatomic) BOOL isGuestPersona; // ivar: _isGuestPersona
@property (nonatomic) BOOL isPersonalPersona; // ivar: _isPersonalPersona
@property (nonatomic) BOOL isSystemPersona; // ivar: _isSystemPersona
@property (nonatomic) BOOL isUniversalPersona; // ivar: _isUniversalPersona
@property (copy, nonatomic) NSDate *lastDisableDate; // ivar: _lastDisableDate
@property (copy, nonatomic) NSDate *lastEnableDate; // ivar: _lastEnableDate
@property (copy, nonatomic) NSDate *lastLoginDate; // ivar: _lastLoginDate
@property (copy, nonatomic) NSURL *personaLayoutPathURL; // ivar: _personaLayoutPathURL
@property (copy, nonatomic) NSArray *userPersonaBundleIDList; // ivar: _userPersonaBundleIDList
@property (copy, nonatomic) NSString *userPersonaDisplayName; // ivar: _userPersonaDisplayName
@property (nonatomic) NSUInteger userPersonaType; // ivar: _userPersonaType
@property (copy, nonatomic) NSString *userPersonaUniqueString; // ivar: _userPersonaUniqueString
@property (nonatomic) unsigned int userPersona_id; // ivar: _userPersona_id


+(id)currentContextIdentifier;
+(id)personaAttributes;
+(id)personaAttributesForIdentifier:(id)arg0 ;
+(id)personaAttributesForPersonaType:(NSUInteger)arg0 ;
+(id)personaAttributesForPersonaType:(NSUInteger)arg0 withError:(*id)arg1 ;
+(id)personaAttributesForPersonaUniqueString:(id)arg0 ;
+(id)personaAttributesForPersonaUniqueString:(id)arg0 withError:(*id)arg1 ;
+(id)setUpPersonaAttributesWithDictionary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)sandboxExtensionForPersonaLayoutPath;
-(void)setPropertiesFromUserPersona:(id)arg0 ;


@end


#endif