// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAEVENTDEVICESPRESENT_H
#define DAEVENTDEVICESPRESENT_H



#import "DAEvent.h"

@interface DAEventDevicesPresent : DAEvent

@property (readonly, nonatomic) BOOL devicesPresent; // ivar: _devicesPresent


-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithPresent:(BOOL)arg0 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif