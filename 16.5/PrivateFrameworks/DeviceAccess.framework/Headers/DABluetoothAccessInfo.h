// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DABLUETOOTHACCESSINFO_H
#define DABLUETOOTHACCESSINFO_H

@class NSArray;
@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface DABluetoothAccessInfo : NSObject <CUXPCCodable>



@property (copy, nonatomic) NSArray *bluetoothDevices; // ivar: _bluetoothDevices
@property (readonly, copy, nonatomic) NSArray *bluetoothScanCompanyIdentifiers; // ivar: _bluetoothScanCompanyIdentifiers
@property (copy, nonatomic) NSArray *bluetoothScanServices; // ivar: _bluetoothScanServices


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif