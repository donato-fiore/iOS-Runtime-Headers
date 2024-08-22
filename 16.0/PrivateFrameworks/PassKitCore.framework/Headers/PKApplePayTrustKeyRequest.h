// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLEPAYTRUSTKEYREQUEST_H
#define PKAPPLEPAYTRUSTKEYREQUEST_H

@class NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKApplePayTrustKeyRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *keyIdentifier; // ivar: _keyIdentifier
@property (readonly, nonatomic) NSData *subjectIdentifier; // ivar: _subjectIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyIdentifier:(id)arg0 subjectIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif