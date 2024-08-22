// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKMOTIONMANAGER_H
#define PKMOTIONMANAGER_H

@class CMMotionManager, NSHashTable, CMDeviceMotion;

#import <Foundation/Foundation.h>


@interface PKMotionManager : NSObject {
    CMMotionManager *_motionManager;
    NSHashTable *_clients;
}


@property (readonly, nonatomic, getter=isMonitoring) BOOL monitoring; // ivar: _monitoring
@property (readonly, nonatomic) CMDeviceMotion *motion; // ivar: _motion


+(id)sharedManager;
-(id)_init;
-(id)init;
-(void)dealloc;
-(void)registerClient:(id)arg0 ;
-(void)unregisterClient:(id)arg0 ;
-(void)updateWithMotion:(id)arg0 ;


@end


#endif