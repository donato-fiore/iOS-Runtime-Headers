// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSTOPRECORDINGOPTIONS_H
#define CSSTOPRECORDINGOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CSStopRecordingOptions : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger expectedStopHostTime; // ivar: _expectedStopHostTime
@property (readonly, nonatomic) NSUInteger stopRecordingReason; // ivar: _stopRecordingReason
@property (readonly, nonatomic) CGFloat trailingSilenceDurationAtEndpoint; // ivar: _trailingSilenceDurationAtEndpoint


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithStopRecordingReason:(NSUInteger)arg0 expectedStopHostTime:(NSUInteger)arg1 trailingSilenceDurationAtEndpoint:(CGFloat)arg2 ;


@end


#endif