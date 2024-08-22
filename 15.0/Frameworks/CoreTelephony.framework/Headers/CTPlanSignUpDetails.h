// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTPLANSIGNUPDETAILS_H
#define CTPLANSIGNUPDETAILS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTPlanSignUpDetails : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *signUpUrl; // ivar: _signUpUrl
@property (retain, nonatomic) NSString *signUpUrlType; // ivar: _signUpUrlType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSignUpUrl:(id)arg0 signUpUrlType:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif