// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCHIDUSERDEVICESNAPSHOT_H
#define GCHIDUSERDEVICESNAPSHOT_H

@class NSArray;


#import "GCHIDDeviceSnapshot.h"

@interface GCHIDUserDeviceSnapshot : GCHIDDeviceSnapshot

@property (readonly) NSArray *elements; // ivar: _elements


+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHIDDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif