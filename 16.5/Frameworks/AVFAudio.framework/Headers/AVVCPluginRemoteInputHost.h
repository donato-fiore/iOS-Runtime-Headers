// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVVCPLUGINREMOTEINPUTHOST_H
#define AVVCPLUGINREMOTEINPUTHOST_H

@class NSMutableArray<AVAudioRemoteInputPlugin>;
@protocol AVAudioRemoteInputPluginDelegate;

#import <Foundation/Foundation.h>

#import "AVVoiceController.h"

@interface AVVCPluginRemoteInputHost : NSObject <AVAudioRemoteInputPluginDelegate>

 {
    NSMutableArray<AVAudioRemoteInputPlugin> *mPlugins;
}


@property (weak, nonatomic) AVVoiceController *mMotherController; // ivar: _mMotherController


-(id)allBundles:(*id)arg0 ;
-(id)findDeviceWithIdentifier:(id)arg0 ;
-(id)findFirstBluetoothDevice;
-(id)init;
-(id)mockPluginEndpoint;
-(void)dealloc;
-(void)inputPlugin:(id)arg0 didPublishDevice:(id)arg1 ;
-(void)inputPlugin:(id)arg0 didUnpublishDevice:(id)arg1 ;
-(void)invalidatePlugins;
-(void)setParentVoiceController:(id)arg0 ;


@end


#endif