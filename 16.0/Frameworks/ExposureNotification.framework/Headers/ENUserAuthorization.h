// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENUSERAUTHORIZATION_H
#define ENUSERAUTHORIZATION_H

@class NSNumber, NSDate, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ENUserAuthorization : NSObject <NSSecureCoding, NSCopying>

 {
    NSInteger _authorization;
}


@property (copy, nonatomic) NSNumber *didUserTravel; // ivar: _didUserTravel
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) NSInteger expirationStatus;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSNumber *isUserVaccinated; // ivar: _isUserVaccinated
@property (readonly, nonatomic) CGFloat lastUpdatedTimestamp; // ivar: _lastUpdatedTimestamp
@property (nonatomic) unsigned int reportType; // ivar: _reportType
@property (copy, nonatomic) NSDate *symptomOnsetDate; // ivar: _symptomOnsetDate
@property (retain, nonatomic) NSDate *testDateToday; // ivar: _testDateToday
@property (nonatomic) NSInteger userAuthorization;
@property (copy, nonatomic) NSString *verificationCode; // ivar: _verificationCode


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif