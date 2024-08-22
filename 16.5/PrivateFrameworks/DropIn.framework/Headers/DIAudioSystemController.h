// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIAUDIOSYSTEMCONTROLLER_H
#define DIAUDIOSYSTEMCONTROLLER_H

@class NSRecursiveLock;
@protocol DIAudioStatusDelegate, DIAudioSystemControllerDelegate;

#import <Foundation/Foundation.h>

#import "DIXPCConnectionManager.h"

@interface DIAudioSystemController : NSObject <DIAudioStatusDelegate>



@property (readonly, weak, nonatomic) DIXPCConnectionManager *connectionManager; // ivar: _connectionManager
@property (weak, nonatomic) NSObject<DIAudioSystemControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isDownlinkMuted) BOOL downlinkMuted; // ivar: _downlinkMuted
@property (readonly, nonatomic) NSRecursiveLock *lock; // ivar: _lock
@property (nonatomic) BOOL needsInitialDownlinkMuteStatus; // ivar: _needsInitialDownlinkMuteStatus
@property (nonatomic) BOOL needsInitialUplinkMuteStatus; // ivar: _needsInitialUplinkMuteStatus
@property (nonatomic, getter=isUplinkMuted) BOOL uplinkMuted; // ivar: _uplinkMuted


-(id)initWithConnectionManager:(id)arg0 ;
-(void)dealloc;
-(void)didUpdateDownlinkMuteStatus:(BOOL)arg0 ;
-(void)didUpdateUplinkMuteStatus:(BOOL)arg0 ;


@end


#endif