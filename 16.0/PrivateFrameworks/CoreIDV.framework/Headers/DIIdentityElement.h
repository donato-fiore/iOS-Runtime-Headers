// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIIDENTITYELEMENT_H
#define DIIDENTITYELEMENT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface DIIdentityElement : NSObject <NSCopying>



@property (readonly, retain) NSString *identifier; // ivar: _identifier


+(id)addressElement;
+(id)ageElement;
+(id)ageThresholdElementWithAge:(NSInteger)arg0 ;
+(id)dateOfBirthElement;
+(id)documentExpirationDateElement;
+(id)documentIssueDateElement;
+(id)documentNumberElement;
+(id)drivingPrivilegesElement;
+(id)familyNameElement;
+(id)givenNameElement;
+(id)issuingAuthorityElement;
+(id)portraitElement;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif