// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSRENTALCHECKINREQUEST_H
#define SSRENTALCHECKINREQUEST_H

@class NSNumber, NSArray;


#import "SSRequest.h"

@interface SSRentalCheckinRequest : SSRequest {
    NSNumber *_accountIdentifier;
    NSNumber *_rentalKeyIdentifier;
    NSArray *_sinfs;
}


@property (readonly) NSNumber *accountIdentifier;
@property (readonly) NSNumber *rentalKeyIdentifier;
@property (readonly) NSArray *sinfs;


-(id)copyXPCEncoding;
-(id)init;
-(id)initWithAccountIdentifier:(id)arg0 rentalKeyIdentifier:(id)arg1 ;
-(id)initWithSinfs:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;
-(void)startWithCompletionBlock:(id)arg0 ;
-(void)startWithConnectionResponseBlock:(id)arg0 ;


@end


#endif