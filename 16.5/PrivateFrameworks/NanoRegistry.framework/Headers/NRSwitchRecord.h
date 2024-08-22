// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRSWITCHRECORD_H
#define NRSWITCHRECORD_H

@protocol NSSecureCoding;


#import "NRPBSwitchRecord.h"

@interface NRSwitchRecord : NRPBSwitchRecord <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(id)initWithDeviceID:(id)arg0 date:(id)arg1 switchIndex:(unsigned int)arg2 ;


@end


#endif