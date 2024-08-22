// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ATXAPPLAUNCHSEQUENCEAWDTRACKER_H
#define _ATXAPPLAUNCHSEQUENCEAWDTRACKER_H


#import <Foundation/Foundation.h>

#import "_ATXDuetHelper.h"

@interface _ATXAppLaunchSequenceAWDTracker : NSObject {
    _ATXDuetHelper *_duetHelper;
    CGFloat _sessionGapSeconds;
    CGFloat _sameLaunchGapSeconds;
}


@property (readonly, nonatomic) NSUInteger maxLength; // ivar: _maxLength


+(id)_defaultLaunchSequenceTimestampPath;
+(id)_randomlyClipSequence:(id)arg0 maxLength:(NSUInteger)arg1 ;
-(id)_queryStartTime;
-(id)_readTimestamp;
-(id)init;
-(id)initWithMaxLength:(NSUInteger)arg0 sessionGapSeconds:(CGFloat)arg1 sameLaunchGapSeconds:(CGFloat)arg2 duetHelper:(id)arg3 ;
-(void)_addBundleId:(id)arg0 buffer:(id)arg1 ;
-(void)_emitAndResetLaunchSequenceBuffer:(id)arg0 ;
-(void)_writeTimestamp:(id)arg0 ;
-(void)logSampledLaunchSequences;
-(void)postLaunchSequence:(id)arg0 ;


@end


#endif