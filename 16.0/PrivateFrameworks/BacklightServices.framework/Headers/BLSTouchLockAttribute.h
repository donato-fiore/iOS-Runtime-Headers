// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSTOUCHLOCKATTRIBUTE_H
#define BLSTOUCHLOCKATTRIBUTE_H



#import "BLSAttribute.h"

@interface BLSTouchLockAttribute : BLSAttribute



+(id)touchLock;
-(BOOL)checkEntitlementSourceForRequiredEntitlements:(id)arg0 error:(*id)arg1 ;


@end


#endif