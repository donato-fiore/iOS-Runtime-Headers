// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASAPLAYTHROUGH_H
#define ASAPLAYTHROUGH_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "ASAAudioDevice.h"

@interface ASAPlaythrough : NSObject {
    *unk _procID;
    ? _ioContext;
    NSArray *_channelMapping;
    unsigned int _aggregateID;
    NSString *_aggregateUID;
}


@property (retain) ASAAudioDevice *audioDevice; // ivar: _audioDevice
@property BOOL playing; // ivar: _playing


-(BOOL)start;
-(BOOL)stop;
-(id)initWithDevice:(id)arg0 usingChannelMapping:(id)arg1 ;
-(id)initWithDevices:(id)arg0 usingMainDevice:(id)arg1 andClockDevice:(id)arg2 withName:(id)arg3 isPrivate:(BOOL)arg4 usingChannelMapping:(id)arg5 ;
-(id)initWithDevices:(id)arg0 usingMainDevice:(id)arg1 andClockDeviceUID:(id)arg2 withName:(id)arg3 isPrivate:(BOOL)arg4 usingChannelMapping:(id)arg5 ;
-(id)initWithDevices:(id)arg0 usingMasterDevice:(id)arg1 andClockDevice:(id)arg2 withName:(id)arg3 isPrivate:(BOOL)arg4 usingChannelMapping:(id)arg5 ;
-(id)initWithDevices:(id)arg0 usingMasterDevice:(id)arg1 andClockDeviceUID:(id)arg2 withName:(id)arg3 isPrivate:(BOOL)arg4 usingChannelMapping:(id)arg5 ;
-(void)_createIOContext;
-(void)_destroyIOContext;
-(void)_freeIOContext:(struct ? *)arg0 ;
-(void)dealloc;


@end


#endif