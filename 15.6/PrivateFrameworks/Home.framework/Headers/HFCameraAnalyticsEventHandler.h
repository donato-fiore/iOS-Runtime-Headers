// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCAMERAANALYTICSEVENTHANDLER_H
#define HFCAMERAANALYTICSEVENTHANDLER_H


#import <Foundation/Foundation.h>


@interface HFCameraAnalyticsEventHandler : NSObject



+(id)decoratedPayloadFor:(id)arg0 ;
+(id)sendAssociatedAccessoriesDidLaunchEventWithCount:(id)arg0 ;
+(id)sendAssociatedAccessoriesDidModifyListEventWithPayload:(id)arg0 ;
+(id)sendCameraClipPlayerDidUpdateEventWithError:(id)arg0 ;
+(id)sendDonationEventWithCameraClipCount:(NSUInteger)arg0 processName:(id)arg1 error:(id)arg2 ;
+(void)sendEventNamed:(id)arg0 payload:(id)arg1 ;


@end


#endif