// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFPEERPAYMENTENROLLMENTREQUEST_H
#define NFPEERPAYMENTENROLLMENTREQUEST_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFPeerPaymentEnrollmentRequest : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *alternateDSID; // ivar: _alternateDSID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif