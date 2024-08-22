// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENTEXTMESSAGE_H
#define ENTEXTMESSAGE_H

@class NSArray, NSURL, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ENRegion.h"

@interface ENTextMessage : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *embeddedURLs; // ivar: _embeddedURLs
@property (copy, nonatomic) NSURL *ensTestVerificationURL; // ivar: _ensTestVerificationURL
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *testVerificationCode; // ivar: _testVerificationCode
@property (copy, nonatomic) ENRegion *testVerificationRegion; // ivar: _testVerificationRegion
@property (readonly, copy, nonatomic) NSString *verificationString;


+(BOOL)supportsSecureCoding;
+(id)textMessageWithMessage:(id)arg0 embeddedURLs:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessage:(id)arg0 embeddedURLs:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif