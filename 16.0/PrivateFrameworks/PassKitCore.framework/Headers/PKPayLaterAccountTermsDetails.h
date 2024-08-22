// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERACCOUNTTERMSDETAILS_H
#define PKPAYLATERACCOUNTTERMSDETAILS_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterAccountTermsDetails : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL termsAcceptanceRequired; // ivar: _termsAcceptanceRequired
@property (copy, nonatomic) NSString *termsIdentifier; // ivar: _termsIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif