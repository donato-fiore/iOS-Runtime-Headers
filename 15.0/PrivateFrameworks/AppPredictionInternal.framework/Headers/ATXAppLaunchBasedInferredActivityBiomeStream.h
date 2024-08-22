// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXAPPLAUNCHBASEDINFERREDACTIVITYBIOMESTREAM_H
#define ATXAPPLAUNCHBASEDINFERREDACTIVITYBIOMESTREAM_H

@class NSString;
@protocol ATXUnifiedInferredActivityBiomeStreamProtocol;

#import <Foundation/Foundation.h>

#import "ATXAppLaunchInferredModeSessionBiomeStream.h"

@interface ATXAppLaunchBasedInferredActivityBiomeStream : NSObject <ATXUnifiedInferredActivityBiomeStreamProtocol>

 {
    ATXAppLaunchInferredModeSessionBiomeStream *_modeSessionStream;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithInferredModeSessionStream:(id)arg0 ;
-(id)sessionPublisherFromStartTime:(CGFloat)arg0 ;
-(id)transitionPublisherFromStartTime:(CGFloat)arg0 ;


@end


#endif