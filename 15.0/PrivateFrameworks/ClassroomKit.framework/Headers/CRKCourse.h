// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCOURSE_H
#define CRKCOURSE_H

@class NSDate, NSString, DMFControlGroupIdentifier, NSDictionary, NSSet;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CRKUser.h"

@interface CRKCourse : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) BOOL allowsUnenroll;
@property (retain, nonatomic) NSDate *automaticRemovalDate; // ivar: _automaticRemovalDate
@property (nonatomic) NSUInteger courseColorType; // ivar: _courseColorType
@property (copy, nonatomic) NSString *courseDescription; // ivar: _courseDescription
@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // ivar: _courseIdentifier
@property (nonatomic) NSUInteger courseMascotType; // ivar: _courseMascotType
@property (copy, nonatomic) NSString *courseName; // ivar: _courseName
@property (retain, nonatomic) CRKUser *courseUser; // ivar: _courseUser
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (copy, nonatomic) NSDictionary *instructorsByIdentifier; // ivar: _instructorsByIdentifier
@property (readonly, nonatomic, getter=isManaged) BOOL managed;
@property (nonatomic) BOOL mustRequestUnenroll; // ivar: _mustRequestUnenroll
@property (nonatomic, getter=isRequestingUnenroll) BOOL requestingUnenroll; // ivar: _requestingUnenroll
@property (nonatomic) BOOL studentCredentialsAreValid; // ivar: _studentCredentialsAreValid
@property (retain, nonatomic) NSSet *trustedCertificatePersistentIds; // ivar: _trustedCertificatePersistentIds
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) NSSet *validTrustedCertificatePersistentIds; // ivar: _validTrustedCertificatePersistentIds


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingExpired;
+(id)new;
+(id)stringForType:(NSUInteger)arg0 ;
-(BOOL)isDeeplyEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCourse:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 managed:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg0 type:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif