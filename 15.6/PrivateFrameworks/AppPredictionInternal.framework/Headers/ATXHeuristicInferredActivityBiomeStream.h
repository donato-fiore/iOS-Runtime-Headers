// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHEURISTICINFERREDACTIVITYBIOMESTREAM_H
#define ATXHEURISTICINFERREDACTIVITYBIOMESTREAM_H

@class BMInferredModeStream, NSString;
@protocol ATXUnifiedInferredActivityBiomeStreamProtocol;

#import <Foundation/Foundation.h>


@interface ATXHeuristicInferredActivityBiomeStream : NSObject <ATXUnifiedInferredActivityBiomeStreamProtocol>

 {
    BMInferredModeStream *_heuristicEventBiomeStream;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_transitionPublisherFromInferredModePublisher:(id)arg0 ;
-(id)init;
-(id)initFromInferredModeStream:(id)arg0 ;
-(id)sessionPublisherFromStartTime:(CGFloat)arg0 ;
-(id)transitionPublisherFromStartTime:(CGFloat)arg0 ;
-(id)transitionPublisherFromStartTime:(id)arg0 endTime:(id)arg1 maxEvents:(id)arg2 lastN:(id)arg3 reversed:(BOOL)arg4 ;


@end


#endif