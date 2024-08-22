// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKFACESUPPORTNOTIFICATIONPRESENTATIONEVENTRECORDER_H
#define NTKFACESUPPORTNOTIFICATIONPRESENTATIONEVENTRECORDER_H

@class NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKFaceSupportNotificationPresentationEventRecorder : NSObject

@property (readonly, nonatomic) NSMapTable *lookup; // ivar: _lookup
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)eventRecorder;
+(id)sharedRecorder;
-(id)_init;
-(id)_validateIdentifier:(id)arg0 ;
-(void)_queue_beginPresentationForIdentifier:(id)arg0 pushDate:(id)arg1 completion:(id)arg2 ;
-(void)_queue_endPresentationForIdentifier:(id)arg0 status:(NSInteger)arg1 artworkUsed:(NSInteger)arg2 errorCode:(NSInteger)arg3 optOutStatus:(NSInteger)arg4 completion:(id)arg5 ;
-(void)beginPresentationForIdentifier:(id)arg0 pushDate:(id)arg1 completion:(id)arg2 ;
-(void)endPresentationForIdentifier:(id)arg0 status:(NSInteger)arg1 artworkUsed:(NSInteger)arg2 errorCode:(NSInteger)arg3 optOutStatus:(NSInteger)arg4 completion:(id)arg5 ;


@end


#endif