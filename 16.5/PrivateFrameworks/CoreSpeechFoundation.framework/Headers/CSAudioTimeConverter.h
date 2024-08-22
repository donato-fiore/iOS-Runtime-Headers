// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSAUDIOTIMECONVERTER_H
#define CSAUDIOTIMECONVERTER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSAudioTimeConverter : NSObject

@property (nonatomic) NSUInteger anchorHostTime; // ivar: _anchorHostTime
@property (nonatomic) NSUInteger anchorSampleCount; // ivar: _anchorSampleCount
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(NSUInteger)hostTimeFromSampleCount:(NSUInteger)arg0 ;
-(NSUInteger)sampleCountFromHostTime:(NSUInteger)arg0 ;
-(id)init;
-(void)processSampleCount:(NSUInteger)arg0 hostTime:(NSUInteger)arg1 ;


@end


#endif