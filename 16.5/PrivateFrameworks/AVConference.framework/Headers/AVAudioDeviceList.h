// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIODEVICELIST_H
#define AVAUDIODEVICELIST_H


#import <Foundation/Foundation.h>

#import "AVInternalDeviceList.h"

@interface AVAudioDeviceList : NSObject {
    AVInternalDeviceList *_internalList;
}


@property (copy, nonatomic) id *changeListener;


+(BOOL)setInputDevice:(id)arg0 ;
+(id)currentInputDevice;
+(id)defaultInputDevice;
+(id)defaultOutputDevice;
+(id)deviceForDeviceID:(unsigned int)arg0 ;
+(id)deviceForUID:(id)arg0 ;
-(id)devices;
-(id)init;
-(id)inputDevices;
-(id)outputDevices;
-(void)dealloc;


@end


#endif