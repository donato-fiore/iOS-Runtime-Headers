// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCAMERAANALYTICSEVENT_H
#define HFCAMERAANALYTICSEVENT_H

@class HMCameraClip, NSDate;

#import <Foundation/Foundation.h>


@interface HFCameraAnalyticsEvent : NSObject

@property (weak, nonatomic) HMCameraClip *cameraClip; // ivar: _cameraClip
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


+(id)errorCodeForError:(id)arg0 ;
-(id)init;
-(id)initWithCameraClip:(id)arg0 ;
-(id)sendEventForState:(NSUInteger)arg0 ;


@end


#endif