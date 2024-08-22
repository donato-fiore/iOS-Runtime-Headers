// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UARPACCESSORYHARDWAREHDS_H
#define UARPACCESSORYHARDWAREHDS_H

@class NSUUID;


#import "UARPAccessoryHardwareID.h"

@interface UARPAccessoryHardwareHDS : UARPAccessoryHardwareID

@property (readonly) NSUUID *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithUUID:(id)arg0 ;


@end


#endif