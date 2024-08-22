// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVOUTPUTCONTEXTLOCALOUTPUTDEVICEGROUPIMPL_H
#define AVOUTPUTCONTEXTLOCALOUTPUTDEVICEGROUPIMPL_H

@class NSString, NSArray;
@protocol AVOutputDeviceGroupImpl;

#import <Foundation/Foundation.h>

#import "AVOutputContext.h"
#import "AVOutputDevice.h"
#import "AVOutputDeviceGroup.h"

@interface AVOutputContextLocalOutputDeviceGroupImpl : NSObject <AVOutputDeviceGroupImpl>

 {
    AVOutputContext *_outputContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) AVOutputDevice *groupLeader;
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *outputDevices;
@property (weak) AVOutputDeviceGroup *parentOutputDeviceGroup; // ivar: _parentOutputDeviceGroup
@property (readonly) BOOL receivesLongFormAudioFromLocalDevice;
@property (readonly) Class superclass;
@property (readonly) float volume;


-(id)initWithOutputContext:(id)arg0 ;
-(void)_contextCanSetVolumeDidChange;
-(void)_contextOutputDevicesDidChange:(id)arg0 ;
-(void)_contextVolumeDidChange;
-(void)addOutputDevice:(id)arg0 withOptions:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)removeOutputDevice:(id)arg0 withOptions:(id)arg1 completionhandler:(id)arg2 ;


@end


#endif