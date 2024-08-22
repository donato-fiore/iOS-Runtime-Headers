// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCOMPLETEDDIGESTBIOMESTREAM_H
#define ATXCOMPLETEDDIGESTBIOMESTREAM_H

@class ATXUserNotificationDigestBiomeStream;

#import <Foundation/Foundation.h>


@interface ATXCompletedDigestBiomeStream : NSObject {
    ATXUserNotificationDigestBiomeStream *_rawDigestEventStream;
}




-(id)init;
-(id)initFromDigestEventBiomeStream:(id)arg0 ;
-(id)publisherFromStartTime:(CGFloat)arg0 ;


@end


#endif