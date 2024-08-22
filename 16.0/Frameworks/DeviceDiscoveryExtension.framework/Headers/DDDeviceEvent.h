// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDDEVICEEVENT_H
#define DDDEVICEEVENT_H

@class NSError;
@protocol CUXPCCodable, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DDDevice.h"

@interface DDDeviceEvent : NSObject <CUXPCCodable, NSSecureCoding>



@property (readonly, nonatomic) DDDevice *device; // ivar: _device
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSInteger eventType; // ivar: _eventType


+(BOOL)supportsSecureCoding;
+(id)allocInitWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(id)createDADeviceEvent;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventType:(NSInteger)arg0 device:(id)arg1 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif