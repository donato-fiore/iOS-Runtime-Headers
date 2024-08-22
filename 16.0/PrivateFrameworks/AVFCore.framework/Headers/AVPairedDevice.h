// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPAIREDDEVICE_H
#define AVPAIREDDEVICE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AVPairedDeviceInternal.h"

@interface AVPairedDevice : NSObject {
    AVPairedDeviceInternal *_ivars;
}


@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *pairedDeviceID;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic) NSString *productName;


+(id)pairedDevicesConnectedToOutputDevice:(id)arg0 ;
-(id)ID;
-(id)initWithName:(id)arg0 ID:(id)arg1 modelID:(id)arg2 playing:(BOOL)arg3 productName:(id)arg4 ;
-(void)dealloc;


@end


#endif