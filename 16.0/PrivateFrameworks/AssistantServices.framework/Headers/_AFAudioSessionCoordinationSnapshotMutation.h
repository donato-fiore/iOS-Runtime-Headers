// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFAUDIOSESSIONCOORDINATIONSNAPSHOTMUTATION_H
#define _AFAUDIOSESSIONCOORDINATIONSNAPSHOTMUTATION_H

@class NSDateInterval, NSArray, NSString;
@protocol AFAudioSessionCoordinationSnapshotMutating;

#import <Foundation/Foundation.h>

#import "AFAudioSessionCoordinationSnapshot.h"
#import "AFAudioSessionCoordinationDeviceInfo.h"

@interface _AFAudioSessionCoordinationSnapshotMutation : NSObject <AFAudioSessionCoordinationSnapshotMutating>

 {
    AFAudioSessionCoordinationSnapshot *_base;
    NSDateInterval *_currentOrUpNextDateInterval;
    BOOL _isAudioSessionActive;
    NSArray *_localActiveAssertionContexts;
    NSArray *_localPendingAssertionContexts;
    NSArray *_remoteActiveAssertionContexts;
    NSArray *_remotePendingAssertionContexts;
    AFAudioSessionCoordinationDeviceInfo *_localDevice;
    NSArray *_remoteQualifiedInRangeDevices;
    NSArray *_remoteQualifiedOutOfRangeDevices;
    NSArray *_remoteDisqualifiedDevices;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getIsAudioSessionActive;
-(BOOL)isDirty;
-(id)getCurrentOrUpNextDateInterval;
-(id)getLocalActiveAssertionContexts;
-(id)getLocalDevice;
-(id)getLocalPendingAssertionContexts;
-(id)getRemoteActiveAssertionContexts;
-(id)getRemoteDisqualifiedDevices;
-(id)getRemotePendingAssertionContexts;
-(id)getRemoteQualifiedInRangeDevices;
-(id)getRemoteQualifiedOutOfRangeDevices;
-(id)initWithBase:(id)arg0 ;
-(void)setCurrentOrUpNextDateInterval:(id)arg0 ;
-(void)setIsAudioSessionActive:(BOOL)arg0 ;
-(void)setLocalActiveAssertionContexts:(id)arg0 ;
-(void)setLocalDevice:(id)arg0 ;
-(void)setLocalPendingAssertionContexts:(id)arg0 ;
-(void)setRemoteActiveAssertionContexts:(id)arg0 ;
-(void)setRemoteDisqualifiedDevices:(id)arg0 ;
-(void)setRemotePendingAssertionContexts:(id)arg0 ;
-(void)setRemoteQualifiedInRangeDevices:(id)arg0 ;
-(void)setRemoteQualifiedOutOfRangeDevices:(id)arg0 ;


@end


#endif