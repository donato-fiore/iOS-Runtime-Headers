// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXUNIFIEDACTIVITYBIOMESTREAM_H
#define ATXUNIFIEDACTIVITYBIOMESTREAM_H

@class NSString;
@protocol ATXUnifiedInferredActivityBiomeStreamProtocol;

#import <Foundation/Foundation.h>

#import "ATXTimeBasedInferredActivityBiomeStream.h"
#import "ATXAppLaunchBasedInferredActivityBiomeStream.h"
#import "ATXHeuristicInferredActivityBiomeStream.h"
#import "ATXUserFocusComputedActivityBiomeStream.h"

@interface ATXUnifiedActivityBiomeStream : NSObject <ATXUnifiedInferredActivityBiomeStreamProtocol>

 {
    ATXTimeBasedInferredActivityBiomeStream *_timeBasedInferredActivityStream;
    ATXAppLaunchBasedInferredActivityBiomeStream *_appLaunchInferredActivityStream;
    ATXHeuristicInferredActivityBiomeStream *_heuristicInferredActivityStream;
    ATXUserFocusComputedActivityBiomeStream *_userFocusComputedActivityStream;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_mergeTransitionPublisher:(id)arg0 withOthers:(id)arg1 ;
-(id)_mergeTransitionPublishers:(id)arg0 ;
-(id)efficientCurrentMode;
-(id)init;
-(id)initFromTimeBasedTransitionStream:(id)arg0 appLaunchBasedTransitionStream:(id)arg1 heuristicTransitionStream:(id)arg2 userFocusTransitionStream:(id)arg3 ;
-(id)sessionPublisherFromStartTime:(CGFloat)arg0 ;
-(id)transitionPublisherFromStartTime:(CGFloat)arg0 ;


@end


#endif