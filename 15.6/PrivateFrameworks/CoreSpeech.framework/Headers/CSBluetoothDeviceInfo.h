// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSBLUETOOTHDEVICEINFO_H
#define CSBLUETOOTHDEVICEINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CSBluetoothDeviceInfo : NSObject

@property (copy, nonatomic) NSString *address; // ivar: _address
@property (nonatomic) BOOL isTemporaryPairedNotInContacts; // ivar: _isTemporaryPairedNotInContacts
@property (nonatomic) BOOL supportDoAP; // ivar: _supportDoAP




@end


#endif