// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DABLUETOOTHDEVICEACCESSINFO_H
#define DABLUETOOTHDEVICEACCESSINFO_H

@class NSArray, NSUUID;
@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface DABluetoothDeviceAccessInfo : NSObject <CUXPCCodable>



@property (copy, nonatomic) NSArray *bluetoothServices; // ivar: _bluetoothServices
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif