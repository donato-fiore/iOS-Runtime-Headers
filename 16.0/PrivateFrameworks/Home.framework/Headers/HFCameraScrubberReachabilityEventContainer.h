// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCAMERASCRUBBERREACHABILITYEVENTCONTAINER_H
#define HFCAMERASCRUBBERREACHABILITYEVENTCONTAINER_H

@class NSDate, NSString, NSUUID;
@protocol HFCameraRecordingEvent;

#import <Foundation/Foundation.h>


@interface HFCameraScrubberReachabilityEventContainer : NSObject <HFCameraRecordingEvent>



@property (readonly, nonatomic) NSUInteger containerType;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayDescription;
@property (retain, nonatomic) NSObject<HFCameraRecordingEvent> *endEvent; // ivar: _endEvent
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFCameraRecordingEvent> *startEvent; // ivar: _startEvent
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uniqueIdentifier;


-(BOOL)canAskForUserFeedback;
-(BOOL)hf_isPlayable;
-(BOOL)isComplete;
-(CGFloat)duration;
-(CGFloat)hf_duration;
-(CGFloat)targetFragmentDuration;
-(id)encryptionKey;
-(id)hf_dateInterval;
-(id)hf_endDate;
-(id)initWithStartEvent:(id)arg0 ;
-(id)videoAssetRequiredHTTPHeaders;


@end


#endif