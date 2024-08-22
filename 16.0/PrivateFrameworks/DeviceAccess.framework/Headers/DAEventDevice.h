// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAEVENTDEVICE_H
#define DAEVENTDEVICE_H



#import "DAEvent.h"
#import "DADevice.h"

@interface DAEventDevice : DAEvent

@property (readonly, nonatomic) DADevice *device; // ivar: _device


+(BOOL)supportsSecureCoding;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventType:(NSInteger)arg0 device:(id)arg1 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif