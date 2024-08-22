// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSIRIBLUETOOTHMANAGER_H
#define CSSIRIBLUETOOTHMANAGER_H


#import <Foundation/Foundation.h>

#import "CSSiriMobileBluetoothDeviceDataSource.h"

@interface CSSiriBluetoothManager : NSObject {
    CSSiriMobileBluetoothDeviceDataSource *_dataSource;
}




+(id)sharedInstance;
-(id)_init;
-(id)deviceWithAddress:(id)arg0 ;
-(id)deviceWithUID:(id)arg0 ;
-(void)prewarmDeviceWithIdentifier:(id)arg0 ;


@end


#endif