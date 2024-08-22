// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18PODCASTSFOUNDATION29PODCASTFEEDDOWNLOADERRESPONSE_H
#define _TTC18PODCASTSFOUNDATION29PODCASTFEEDDOWNLOADERRESPONSE_H

@class NSError, NSString;

#import <Foundation/Foundation.h>


@interface _TtC18PodcastsFoundation29PodcastFeedDownloaderResponse : NSObject {
    ? etag;
    ? error;
}


@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *etag;
@property (nonatomic, readonly) NSInteger statusCode; // ivar: statusCode


-(id)init;


@end


#endif