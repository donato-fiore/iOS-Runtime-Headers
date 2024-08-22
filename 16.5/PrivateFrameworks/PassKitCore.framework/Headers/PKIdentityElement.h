// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKIDENTITYELEMENT_H
#define PKIDENTITYELEMENT_H

@class DIIdentityElement;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKIdentityElement : NSObject <NSCopying>



@property (retain, nonatomic) DIIdentityElement *wrapped; // ivar: _wrapped


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
-(id)asDIIdentityElement;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDIIdentityElement:(id)arg0 ;


@end


#endif