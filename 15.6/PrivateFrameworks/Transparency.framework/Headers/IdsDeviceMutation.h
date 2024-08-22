// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSDEVICEMUTATION_H
#define IDSDEVICEMUTATION_H

@class NSData;
@protocol TLSMessage;


#import "TLSMessage.h"
#import "IdsMutation.h"

@interface IdsDeviceMutation : TLSMessage <TLSMessage>



@property (retain) NSData *accountKeyHash; // ivar: _accountKeyHash
@property BOOL accountMismatch; // ivar: _accountMismatch
@property NSUInteger appVersion; // ivar: _appVersion
@property (retain) NSData *clientDataHash; // ivar: _clientDataHash
@property (retain) NSData *deviceIdHash; // ivar: _deviceIdHash
@property NSUInteger expiryMs; // ivar: _expiryMs
@property (weak) IdsMutation *idsMutation; // ivar: _idsMutation
@property NSUInteger parsedLength; // ivar: _parsedLength


+(id)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)data;
-(id)debugDescription;
-(id)description;
-(id)init;


@end


#endif