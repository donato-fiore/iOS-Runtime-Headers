// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKFACESUPPORTUNLOCKATTEMPTEVENTRECORDER_H
#define NTKFACESUPPORTUNLOCKATTEMPTEVENTRECORDER_H

@class NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKFaceSupportUnlockAttemptEventRecorder : NSObject

@property (readonly, nonatomic) NSMapTable *lookup; // ivar: _lookup
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)eventRecorder;
+(id)sharedRecorder;
-(id)_init;
-(id)_validateIdentifier:(id)arg0 ;
-(void)_queue_beginRecordingForIdentifier:(id)arg0 method:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_queue_endRecordingForIdentifier:(id)arg0 status:(NSUInteger)arg1 errorCode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)beginRecordingForIdentifier:(id)arg0 method:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)endRecordingForIdentifier:(id)arg0 status:(NSUInteger)arg1 errorCode:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif