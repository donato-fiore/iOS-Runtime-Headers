// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTTRANSFERSCHEDULEDETAILS_H
#define PKACCOUNTTRANSFERSCHEDULEDETAILS_H

@class NSTimeZone, NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAccountTransferScheduleDetails : NSObject <NSSecureCoding>

 {
    NSTimeZone *_productTimeZone;
}


@property (nonatomic) NSUInteger frequency; // ivar: _frequency
@property (copy, nonatomic) NSDate *scheduledDate; // ivar: _scheduledDate
@property (nonatomic) NSInteger scheduledDay; // ivar: _scheduledDay
@property (copy, nonatomic) NSString *transferTermsIdentifier; // ivar: _transferTermsIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)hashString;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 productTimeZone:(id)arg1 ;
-(id)jsonDictionaryRepresentation;
-(id)jsonString;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setScheduleTimeZone:(id)arg0 ;


@end


#endif