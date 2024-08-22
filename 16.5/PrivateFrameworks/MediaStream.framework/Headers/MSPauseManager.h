// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPAUSEMANAGER_H
#define MSPAUSEMANAGER_H

@class NSMutableDictionary;
@protocol MSPauseManagerDelegate;

#import <Foundation/Foundation.h>


@interface MSPauseManager : NSObject {
    NSMutableDictionary *_UUIDToTimerMap;
}


@property (weak, nonatomic) NSObject<MSPauseManagerDelegate> *delegate; // ivar: _delegate


+(id)sharedManager;
-(BOOL)isPaused;
-(id)init;
-(void)_addPauseUUID:(id)arg0 ;
-(void)_removeTimerUUID:(id)arg0 ;
-(void)_timerDidFire:(id)arg0 ;
-(void)dealloc;
-(void)pingPauseUUID:(id)arg0 ;
-(void)unpauseUUID:(id)arg0 ;


@end


#endif