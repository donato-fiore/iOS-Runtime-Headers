// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENREGIONUSERCONSENT_H
#define ENREGIONUSERCONSENT_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ENRegionUserConsent : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger consent; // ivar: _consent
@property (retain, nonatomic) NSString *consentText; // ivar: _consentText
@property (nonatomic) CGFloat consentTimestamp; // ivar: _consentTimestamp
@property (retain, nonatomic) NSString *consentVersion; // ivar: _consentVersion
@property (nonatomic) NSInteger differentialPrivacyConsent; // ivar: _differentialPrivacyConsent
@property (nonatomic) CGFloat differentialPrivacyConsentTimestamp; // ivar: _differentialPrivacyConsentTimestamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConsentVersion:(id)arg0 ;
-(id)updatedConsent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif