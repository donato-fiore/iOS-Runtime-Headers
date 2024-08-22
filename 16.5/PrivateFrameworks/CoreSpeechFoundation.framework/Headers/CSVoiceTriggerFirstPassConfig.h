// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSVOICETRIGGERFIRSTPASSCONFIG_H
#define CSVOICETRIGGERFIRSTPASSCONFIG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CSVoiceTriggerFirstPassConfig : NSObject

@property (readonly, nonatomic) NSString *configPathNDAPI; // ivar: _configPathNDAPI
@property (readonly, nonatomic) float delaySecondsForChannelSelection; // ivar: _delaySecondsForChannelSelection
@property (readonly, nonatomic) float masterChannelScoreBoost; // ivar: _masterChannelScoreBoost
@property (readonly, nonatomic) NSUInteger processingChannelsBitset; // ivar: _processingChannelsBitset
@property (readonly, nonatomic) float processingChunkSeconds; // ivar: _processingChunkSeconds
@property (readonly, nonatomic) float threshold; // ivar: _threshold


-(id)initWithConfigPathNDAPI:(id)arg0 threshold:(float)arg1 delaySecondsForChannelSelection:(float)arg2 masterChannelScoreBoost:(float)arg3 processingChunkSeconds:(float)arg4 processingChannelsBitset:(NSUInteger)arg5 ;


@end


#endif