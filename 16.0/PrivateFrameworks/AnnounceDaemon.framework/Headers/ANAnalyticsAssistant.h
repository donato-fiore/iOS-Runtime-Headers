// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANANALYTICSASSISTANT_H
#define ANANALYTICSASSISTANT_H

@protocol ANAnalyticsAssistantProtocol;

#import <Foundation/Foundation.h>


@interface ANAnalyticsAssistant : NSObject <ANAnalyticsAssistantProtocol>





-(NSInteger)boundGroupCount:(NSInteger)arg0 ;
-(NSInteger)bucketFromDuration:(CGFloat)arg0 ;
-(NSInteger)bucketFromReceiveTime:(CGFloat)arg0 ;
-(NSInteger)bucketFromSize:(NSInteger)arg0 ;
-(id)_playerForAnnouncement:(id)arg0 ;
-(int)_linearBucketAtInterval:(CGFloat)arg0 value:(CGFloat)arg1 max:(CGFloat)arg2 ;
-(struct ANAnalyticsAssistantAudioData )audioDataForAnnouncement:(id)arg0 ;
-(struct ANAnalyticsAssistantSenderData )senderDataForAnnouncement:(id)arg0 ;


@end


#endif