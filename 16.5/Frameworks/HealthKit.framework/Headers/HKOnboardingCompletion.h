// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKONBOARDINGCOMPLETION_H
#define HKONBOARDINGCOMPLETION_H

@class NSUUID, NSDate, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKOnboardingCompletion : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSDate *completionDate; // ivar: _completionDate
@property (readonly, copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, nonatomic) NSInteger countryCodeProvenance; // ivar: _countryCodeProvenance
@property (readonly, copy, nonatomic) NSString *featureIdentifier; // ivar: _featureIdentifier
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeatureIdentifier:(id)arg0 version:(NSInteger)arg1 completionDate:(id)arg2 countryCode:(id)arg3 countryCodeProvenance:(NSInteger)arg4 ;
-(id)initWithFeatureIdentifier:(id)arg0 version:(NSInteger)arg1 completionDate:(id)arg2 countryCode:(id)arg3 countryCodeProvenance:(NSInteger)arg4 UUID:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif