// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18PODCASTSFOUNDATION15FEEDURLCOMPOSER_H
#define _TTC18PODCASTSFOUNDATION15FEEDURLCOMPOSER_H


#import <Foundation/Foundation.h>


@interface _TtC18PodcastsFoundation15FeedURLComposer : NSObject



+(NSInteger)errorCannotGenerateInternalURL;
+(NSInteger)errorURLDoesNotExist;
+(NSInteger)errorURLInvalid;
-(id)feedURLForOptionalURL:(id)arg0 adamID:(NSInteger)arg1 error:(*id)arg2 ;
-(id)init;


@end


#endif