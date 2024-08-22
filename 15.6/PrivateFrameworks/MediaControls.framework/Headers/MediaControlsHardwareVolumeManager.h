// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MEDIACONTROLSHARDWAREVOLUMEMANAGER_H
#define MEDIACONTROLSHARDWAREVOLUMEMANAGER_H

@class NSMapTable, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MediaControlsHardwareVolumeManager : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (retain, nonatomic) NSMapTable *assertions; // ivar: _assertions
@property (retain, nonatomic) NSArray *volumeButtonConsumerInvalidators; // ivar: _volumeButtonConsumerInvalidators


+(id)sharedInstance;
-(id)init;
-(id)requestVolumeControlsForRoute:(id)arg0 reason:(id)arg1 ;
-(void)_relinquishHardwareVolumeButtons;
-(void)_requestHardwareVolumeButtons;
-(void)_updateVolumeControlsForRoute:(id)arg0 ;
-(void)registerClient:(id)arg0 forRoute:(id)arg1 ;
-(void)unregisterClient:(id)arg0 ;


@end


#endif