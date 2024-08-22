// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDACCOUNTLOOKUPRESPONSE_H
#define ASDACCOUNTLOOKUPRESPONSE_H

@class NSNumber, NSError;


#import "ASDRequestResponse.h"

@interface ASDAccountLookupResponse : ASDRequestResponse

@property (copy) NSNumber *accountID; // ivar: _accountID
@property BOOL askToBuyEnabled; // ivar: _askToBuyEnabled
@property (copy) NSError *error;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAccountID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif