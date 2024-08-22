// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NVICONTEXT_H
#define NVICONTEXT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface NviContext : NSObject

@property (nonatomic) NSUInteger reqStartAudioSampleId; // ivar: _reqStartAudioSampleId
@property (nonatomic) NSUInteger reqStartMachAbsTime; // ivar: _reqStartMachAbsTime
@property (nonatomic) BOOL requestHistoricalAudio; // ivar: _requestHistoricalAudio
@property (retain, nonatomic) NSString *rootLogDir; // ivar: _rootLogDir
@property (nonatomic) BOOL shouldLogRawSensorData; // ivar: _shouldLogRawSensorData
@property (retain, nonatomic) NSDictionary *voiceTriggerInfo; // ivar: _voiceTriggerInfo


-(id)description;


@end


#endif