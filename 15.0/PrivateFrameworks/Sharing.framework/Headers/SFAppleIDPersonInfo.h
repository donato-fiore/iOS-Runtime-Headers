// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAPPLEIDPERSONINFO_H
#define SFAPPLEIDPERSONINFO_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFAppleIDPersonInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, nonatomic) NSInteger certificateStatus; // ivar: _certificateStatus
@property (readonly, nonatomic) BOOL didMatchEmail; // ivar: _didMatchEmail
@property (readonly, nonatomic) BOOL didMatchPhone; // ivar: _didMatchPhone
@property (readonly, nonatomic) BOOL isStale;
@property (readonly, nonatomic) NSString *matchedValue; // ivar: _matchedValue
@property (readonly, nonatomic) NSDate *validUntilDate; // ivar: _validUntilDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPersonInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif