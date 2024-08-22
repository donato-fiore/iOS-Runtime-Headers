// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSRENTALINFORMATIONREQUEST_H
#define SSRENTALINFORMATIONREQUEST_H

@class NSNumber, NSString;
@protocol SSXPCCoding;


#import "SSRequest.h"

@interface SSRentalInformationRequest : SSRequest <SSXPCCoding>



@property (readonly) NSNumber *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSNumber *rentalKeyIdentifier; // ivar: _rentalKeyIdentifier
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithAccountIdentifier:(id)arg0 rentalKeyIdentifier:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithResponseBlock:(id)arg0 ;


@end


#endif