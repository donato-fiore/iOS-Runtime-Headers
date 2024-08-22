// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVAPSYNCCONTROLLERREMOTEOUTPUTDEVICEGROUPIMPL_H
#define AVAPSYNCCONTROLLERREMOTEOUTPUTDEVICEGROUPIMPL_H

@class NSString, NSArray;
@protocol AVOutputDeviceGroupImpl;

#import <Foundation/Foundation.h>

#import "AVOutputDevice.h"
#import "AVOutputDeviceGroup.h"

@interface AVAPSyncControllerRemoteOutputDeviceGroupImpl : NSObject <AVOutputDeviceGroupImpl>

 {
    *OpaqueAPSyncController _syncController;
    *__CFString _groupID;
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


-(id)_outputDeviceForID:(struct __CFString *)arg0 ;
-(id)_outputDevicesFromProperty:(struct __CFString *)arg0 withQualifier:(struct __CFString *)arg1 ;
-(id)initWithRemoteGroupID:(struct __CFString *)arg0 syncController:(struct OpaqueAPSyncController *)arg1 ;
-(void)_groupMembersChangedForGroupWithID:(struct __CFString *)arg0 ;
-(void)_volumeChangedForGroupWithID:(struct __CFString *)arg0 ;
-(void)_volumeControlTypeChangedForGroupWithID:(struct __CFString *)arg0 ;
-(void)addOutputDevice:(id)arg0 withOptions:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)removeOutputDevice:(id)arg0 withOptions:(id)arg1 completionhandler:(id)arg2 ;


@end


#endif