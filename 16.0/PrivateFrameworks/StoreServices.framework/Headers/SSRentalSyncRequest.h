// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSRENTALSYNCREQUEST_H
#define SSRENTALSYNCREQUEST_H

@class NSNumber, NSString, NSArray;
@protocol SSXPCCoding;


#import "SSRequest.h"

@interface SSRentalSyncRequest : SSRequest <SSXPCCoding>



@property (readonly) NSNumber *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSNumber *rentalKeyIdentifier; // ivar: _rentalKeyIdentifier
@property (readonly) NSArray *sinfs; // ivar: _sinfs
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithAccountIdentifier:(id)arg0 ;
-(id)initWithAccountIdentifier:(id)arg0 rentalKeyIdentifier:(id)arg1 ;
-(id)initWithSinfs:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithConnectionResponseBlock:(id)arg0 ;


@end


#endif