// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFBLUETOOTHWIRELESSSPLITTERSESSIONINFOMUTATION_H
#define _AFBLUETOOTHWIRELESSSPLITTERSESSIONINFOMUTATION_H

@class NSArray, NSString;
@protocol AFBluetoothWirelessSplitterSessionInfoMutating;

#import <Foundation/Foundation.h>

#import "AFBluetoothWirelessSplitterSessionInfo.h"

@interface _AFBluetoothWirelessSplitterSessionInfoMutation : NSObject <AFBluetoothWirelessSplitterSessionInfoMutating>

 {
    AFBluetoothWirelessSplitterSessionInfo *_base;
    NSInteger _state;
    NSArray *_deviceAddresses;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(NSInteger)getState;
-(id)getDeviceAddresses;
-(id)initWithBase:(id)arg0 ;
-(void)setDeviceAddresses:(id)arg0 ;
-(void)setState:(NSInteger)arg0 ;


@end


#endif