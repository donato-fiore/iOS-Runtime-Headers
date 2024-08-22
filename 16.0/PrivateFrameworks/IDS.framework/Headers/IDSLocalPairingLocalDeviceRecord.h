// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSLOCALPAIRINGLOCALDEVICERECORD_H
#define IDSLOCALPAIRINGLOCALDEVICERECORD_H

@protocol NSSecureCoding;


#import "IDSLocalPairingRecord.h"

@interface IDSLocalPairingLocalDeviceRecord : IDSLocalPairingRecord <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(id)_fullIdenityForDataProtectionClass:(unsigned int)arg0 error:(*id)arg1 ;
-(id)description;
-(id)fullIdentityClassA:(*id)arg0 ;
-(id)fullIdentityClassC:(*id)arg0 ;
-(id)fullIdentityClassD:(*id)arg0 ;
-(id)initWithWithFullIdentityDataClassA:(id)arg0 classC:(id)arg1 classD:(id)arg2 ;


@end


#endif