// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSLOCALPAIRINGPAIREDDEVICERECORD_H
#define IDSLOCALPAIRINGPAIREDDEVICERECORD_H

@class NSUUID;
@protocol NSSecureCoding;


#import "IDSLocalPairingRecord.h"

@interface IDSLocalPairingPairedDeviceRecord : IDSLocalPairingRecord <NSSecureCoding>



@property (readonly, nonatomic) NSUUID *cbuuid; // ivar: _cbuuid


+(BOOL)supportsSecureCoding;
-(id)_publicIdenityForDataProtectionClass:(unsigned int)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithCBUUID:(id)arg0 publicIdentityDataClassA:(id)arg1 classC:(id)arg2 classD:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)publicIdentityClassA:(*id)arg0 ;
-(id)publicIdentityClassC:(*id)arg0 ;
-(id)publicIdentityClassD:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif