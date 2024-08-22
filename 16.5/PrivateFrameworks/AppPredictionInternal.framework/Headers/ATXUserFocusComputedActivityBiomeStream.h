// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUSERFOCUSCOMPUTEDACTIVITYBIOMESTREAM_H
#define ATXUSERFOCUSCOMPUTEDACTIVITYBIOMESTREAM_H

@class BMUserFocusComputedModeStream, NSString;
@protocol ATXUnifiedInferredActivityBiomeStreamProtocol;

#import <Foundation/Foundation.h>


@interface ATXUserFocusComputedActivityBiomeStream : NSObject <ATXUnifiedInferredActivityBiomeStreamProtocol>

 {
    BMUserFocusComputedModeStream *_computedModeStream;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_transitionPublisherFromComputedModeStreamPublisher:(id)arg0 ;
-(id)init;
-(id)initFromUserFocusComputedModeStream:(id)arg0 ;
-(id)sessionPublisherFromStartTime:(CGFloat)arg0 ;
-(id)transitionPublisherFromStartTime:(CGFloat)arg0 ;
-(id)transitionPublisherFromStartTime:(id)arg0 endTime:(id)arg1 maxEvents:(id)arg2 lastN:(id)arg3 reversed:(BOOL)arg4 ;


@end


#endif