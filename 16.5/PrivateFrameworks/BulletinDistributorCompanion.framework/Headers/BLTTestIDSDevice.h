// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTTESTIDSDEVICE_H
#define BLTTESTIDSDEVICE_H

@class NSString;
@protocol BLTAbstractIDSDevice;

#import <Foundation/Foundation.h>


@interface BLTTestIDSDevice : NSObject <BLTAbstractIDSDevice>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCloudReachable; // ivar: _isCloudReachable
@property (nonatomic) BOOL isConnected; // ivar: _isConnected
@property (nonatomic) BOOL isDefaultPairedDevice; // ivar: _isDefaultPairedDevice
@property (nonatomic) BOOL isNearby; // ivar: _isNearby
@property (readonly) Class superclass;




@end


#endif