// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAPPLEIDVALIDATIONRECORD_H
#define SFAPPLEIDVALIDATIONRECORD_H

@class NSString, NSData, NSDate, NSArray, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFAppleIDValidationRecord : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isInvalid;
@property (readonly, nonatomic) BOOL needsUpdate;
@property (retain, nonatomic) NSDate *nextCheckDate; // ivar: _nextCheckDate
@property (nonatomic) NSUInteger suggestedValidDuration; // ivar: _suggestedValidDuration
@property (retain, nonatomic) NSDate *validStartDate; // ivar: _validStartDate
@property (retain, nonatomic) NSArray *validatedEmailHashes; // ivar: _validatedEmailHashes
@property (retain, nonatomic) NSArray *validatedPhoneHashes; // ivar: _validatedPhoneHashes
@property (retain, nonatomic) NSNumber *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToValidationRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)expirationDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif