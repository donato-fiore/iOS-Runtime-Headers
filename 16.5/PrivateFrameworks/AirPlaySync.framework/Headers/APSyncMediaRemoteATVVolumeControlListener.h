// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APSYNCMEDIAREMOTEATVVOLUMECONTROLLISTENER_H
#define APSYNCMEDIAREMOTEATVVOLUMECONTROLLISTENER_H


#import <Foundation/Foundation.h>


@interface APSyncMediaRemoteATVVolumeControlListener : NSObject {
    *void _callbackContext;
    *unk _volumeControlTypeDidChange;
}




-(id)initWithContextAndCallback:(*unk)arg0 callbackContext:(*void)arg1 ;
-(void)_volumeControlTypeChanged:(struct __CFDictionary *)arg0 ;
-(void)dealloc;


@end


#endif