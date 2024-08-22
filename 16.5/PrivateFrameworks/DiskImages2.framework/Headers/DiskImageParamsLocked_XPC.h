// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DISKIMAGEPARAMSLOCKED_XPC_H
#define DISKIMAGEPARAMSLOCKED_XPC_H



#import "DiskImageParamsXPC.h"

@interface DiskImageParamsLocked_XPC : DiskImageParamsXPC



-(id)initWithBackendXPC:(id)arg0 ;
-(id)newWithPassphrase:(char *)arg0 error:(*id)arg1 ;


@end


#endif