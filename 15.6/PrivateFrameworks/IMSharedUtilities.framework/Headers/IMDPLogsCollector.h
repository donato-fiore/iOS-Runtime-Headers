// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDPLOGSCOLLECTOR_H
#define IMDPLOGSCOLLECTOR_H

@class _DPBitValueRecorder;

#import <Foundation/Foundation.h>


@interface IMDPLogsCollector : NSObject

@property (retain, nonatomic) _DPBitValueRecorder *privatizedImageReceivedRecorder; // ivar: _privatizedImageReceivedRecorder
@property (retain, nonatomic) _DPBitValueRecorder *privatizedImageSentRecorder; // ivar: _privatizedImageSentRecorder
@property (retain, nonatomic) _DPBitValueRecorder *privatizedUIInteractionRecorder; // ivar: _privatizedUIInteractionRecorder


+(id)_primaryAccountCountryCode;
+(id)sharedInstance;
-(BOOL)logPrivatizedImageReceivedEvent:(BOOL)arg0 ;
-(BOOL)logPrivatizedImageSentEvent:(BOOL)arg0 ;
-(BOOL)logPrivatizedUIInteractionEvent:(NSUInteger)arg0 ;
-(id)init;


@end


#endif