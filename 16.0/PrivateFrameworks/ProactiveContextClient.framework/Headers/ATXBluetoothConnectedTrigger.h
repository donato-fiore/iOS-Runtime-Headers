// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXBLUETOOTHCONNECTEDTRIGGER_H
#define ATXBLUETOOTHCONNECTEDTRIGGER_H

@class NSString;
@protocol ATXTrigger;

#import <Foundation/Foundation.h>


@interface ATXBluetoothConnectedTrigger : NSObject <ATXTrigger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceIdentifier:(id)arg0 deviceName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif