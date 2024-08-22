// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRITTSOSPREYSTREAMINGPARTIALRESPONSE_H
#define SIRITTSOSPREYSTREAMINGPARTIALRESPONSE_H

@class NSData, NSArray;

#import <Foundation/Foundation.h>


@interface SiriTTSOspreyStreamingPartialResponse : NSObject

@property (nonatomic) AudioStreamBasicDescription asbd; // ivar: _asbd
@property (readonly, nonatomic) NSData *audioData; // ivar: _audioData
@property (readonly, nonatomic) NSArray *timingInfos; // ivar: _timingInfos


+(void)processServerLogs:(id)arg0 ;
-(id)initWithOspreyPartialResponse:(id)arg0 ;


@end


#endif