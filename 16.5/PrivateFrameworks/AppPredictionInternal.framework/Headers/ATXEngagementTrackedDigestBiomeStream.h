// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXENGAGEMENTTRACKEDDIGESTBIOMESTREAM_H
#define ATXENGAGEMENTTRACKEDDIGESTBIOMESTREAM_H

@protocol ATXNotificationResolutionSourceProtocol;

#import <Foundation/Foundation.h>

#import "ATXCompletedDigestBiomeStream.h"

@interface ATXEngagementTrackedDigestBiomeStream : NSObject {
    ATXCompletedDigestBiomeStream *_completedDigestStream;
    id<ATXNotificationResolutionSourceProtocol> *_resolutionSource;
}




-(id)init;
-(id)initFromCompletedDigestBiomeStream:(id)arg0 ;
-(id)initFromCompletedDigestBiomeStream:(id)arg0 resolutionSource:(id)arg1 ;
-(id)publisherFromStartTime:(CGFloat)arg0 ;


@end


#endif