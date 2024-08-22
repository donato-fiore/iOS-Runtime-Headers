// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEDIACONTROLSHOMEOBSERVER_H
#define MEDIACONTROLSHOMEOBSERVER_H

@class HMHomeManager, NSMutableSet, NSString;
@protocol HMHomeDelegate, HMHomeManagerDelegate, OS_dispatch_queue, MediaControlsHomeObserverDelegate;

#import <Foundation/Foundation.h>


@interface MediaControlsHomeObserver : NSObject <HMHomeDelegate, HMHomeManagerDelegate>

 {
    HMHomeManager *_homeManager;
    NSMutableSet *_knownUIDs;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_notifyQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MediaControlsHomeObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasAccessoryWithUID:(id)arg0 ;
-(id)init;
-(void)_notifyDelegate;
-(void)_updateUIDs;
-(void)beginObserving;
-(void)home:(id)arg0 didAddAccessory:(id)arg1 ;
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;
-(void)homeManager:(id)arg0 didAddHome:(id)arg1 ;
-(void)homeManager:(id)arg0 didRemoveHome:(id)arg1 ;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;
-(void)stopObserving;


@end


#endif