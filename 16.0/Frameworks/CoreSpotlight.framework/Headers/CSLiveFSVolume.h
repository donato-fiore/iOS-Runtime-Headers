// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSLIVEFSVOLUME_H
#define CSLIVEFSVOLUME_H

@class NSString, NSURL;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSLiveFSVolume : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *delayedObject; // ivar: _delayedObject
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSString *volumeName; // ivar: _volumeName
@property (readonly, nonatomic) char * volumeNameCString; // ivar: _volumeNameCString
@property (readonly, nonatomic) NSUInteger volumeNameCStringLength; // ivar: _volumeNameCStringLength
@property (readonly, nonatomic) NSURL *volumeURL; // ivar: _volumeURL


+(id)sharedInstance;
-(BOOL)isInterestingPath:(char *)arg0 ;
-(id)init;
-(id)initWithVolumeName:(id)arg0 ;
-(id)initWithVolumeURL:(id)arg0 ;
-(int)sendCSLiveFSEvent:(struct CSLiveEventInfo *)arg0 ;
-(void)_handleDelayedEvent;
-(void)dealloc;
-(void)sendDeleteEventForPID:(int)arg0 path:(char *)arg1 pathLength:(NSUInteger)arg2 ;
-(void)sendEventOfType:(int)arg0 pid:(int)arg1 path:(char *)arg2 pathLength:(NSUInteger)arg3 attributes:(id)arg4 ;
-(void)sendPairedEventOfType:(int)arg0 pid:(int)arg1 fromPath:(char *)arg2 fromPathLength:(NSUInteger)arg3 fromAttributes:(id)arg4 toPath:(char *)arg5 toPathLength:(NSUInteger)arg6 toAttributes:(id)arg7 ;
-(void)sendXattrModifiedEventForPID:(int)arg0 path:(char *)arg1 pathLength:(NSUInteger)arg2 xAttrName:(id)arg3 xAttrValue:(id)arg4 attributes:(id)arg5 ;
-(void)sendXattrRemovedEventForPID:(int)arg0 path:(char *)arg1 pathLength:(NSUInteger)arg2 xAttrName:(id)arg3 attributes:(id)arg4 ;


@end


#endif