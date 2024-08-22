// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMMAGICMOUNTMANAGER_H
#define CMMAGICMOUNTMANAGER_H


#import <Foundation/Foundation.h>


@interface CMMagicMountManager : NSObject {
    id *_internal;
}


@property (readonly, nonatomic) CMMagicMountStateStruct currentMagicMountState;


+(BOOL)isAvailable;
-(id)init;
-(id)initPrivate;
-(void)dealloc;
-(void)deallocPrivate;
-(void)feedMounted:(BOOL)arg0 apAwake:(BOOL)arg1 simulated:(BOOL)arg2 timestamp:(CGFloat)arg3 ;
-(void)onMagicMountData:(struct MagicMountState *)arg0 ;
-(void)sendMagicMountStateToClientPrivate;
-(void)setNextUnmountAPWakeAllowed:(BOOL)arg0 ;
-(void)setNextUnmountAPWakeAllowedPrivate:(BOOL)arg0 ;
-(void)startMagicMountUpdatesPrivateToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startMagicMountUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)stopMagicMountUpdates;
-(void)stopMagicMountUpdatesPrivate;


@end


#endif