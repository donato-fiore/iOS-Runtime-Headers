// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KTLOGGABLEDATA_H
#define KTLOGGABLEDATA_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KTLoggableData : NSObject <NSSecureCoding>



@property (retain) NSData *clientData; // ivar: _clientData
@property (retain) NSData *clientDataHash; // ivar: _clientDataHash
@property (copy) NSData *deviceID; // ivar: _deviceID
@property (retain) NSData *deviceIdHash; // ivar: _deviceIdHash
@property BOOL ktCapable; // ivar: _ktCapable
@property BOOL marked; // ivar: _marked
@property BOOL notInSyncedData; // ivar: _notInSyncedData
@property (copy) NSData *signature; // ivar: _signature
@property BOOL successfulSync; // ivar: _successfulSync


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)verifySignatureWithAccountKey:(id)arg0 error:(*id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)initWithClientData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)computeHashesForSalt:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif