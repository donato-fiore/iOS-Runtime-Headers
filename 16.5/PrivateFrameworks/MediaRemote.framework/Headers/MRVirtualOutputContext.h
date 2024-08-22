// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRVIRTUALOUTPUTCONTEXT_H
#define MRVIRTUALOUTPUTCONTEXT_H

@class NSString, NSMutableArray;


#import "MRAVOutputContext.h"

@interface MRVirtualOutputContext : MRAVOutputContext {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
}




-(BOOL)isVolumeControlAvailable;
-(BOOL)supportsMultipleBluetoothOutputDevices;
-(BOOL)supportsVolumeControl;
-(float)volume;
-(id)contextID;
-(id)initWithUID:(id)arg0 ;
-(id)outputDevices;
-(id)predictedOutputDevice;
-(id)uniqueIdentifier;
-(unsigned int)type;
-(void)addOutputDevices:(id)arg0 initiator:(id)arg1 withCallbackQueue:(id)arg2 block:(id)arg3 ;
-(void)removeAllOutputDevicesWithCallbackQueue:(id)arg0 block:(id)arg1 ;
-(void)removeOutputDevices:(id)arg0 initiator:(id)arg1 withCallbackQueue:(id)arg2 block:(id)arg3 ;
-(void)resetPredictedOutputDevice;
-(void)setOutputDevices:(id)arg0 initiator:(id)arg1 withCallbackQueue:(id)arg2 block:(id)arg3 ;
-(void)setOutputDevices:(id)arg0 withPassword:(id)arg1 withCallbackQueue:(id)arg2 block:(id)arg3 ;
-(void)setVolume:(float)arg0 ;


@end


#endif