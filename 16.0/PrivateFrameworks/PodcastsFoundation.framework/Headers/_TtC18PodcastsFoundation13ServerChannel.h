// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18PODCASTSFOUNDATION13SERVERCHANNEL_H
#define _TTC18PODCASTSFOUNDATION13SERVERCHANNEL_H

@class NSString;
@protocol MTFeedChannel, _TtP18PodcastsFoundation11MediaObject_;

#import <Foundation/Foundation.h>


@interface _TtC18PodcastsFoundation13ServerChannel : NSObject <MTFeedChannel, _TtP18PodcastsFoundation11MediaObject_>

 {
    ? href;
    ? id;
    ? type;
    ? attributes;
    ? relationships;
}


@property (nonatomic, readonly) NSString *artworkURL;
@property (nonatomic, readonly) NSString *backgroundColor;
@property (nonatomic, readonly) NSString *displayType;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) float logoImageHeight;
@property (nonatomic, readonly) NSString *logoImageURL;
@property (nonatomic, readonly) float logoImageWidth;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSInteger showCount;
@property (nonatomic, readonly) NSString *storeId;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *uberBackgroundImageURL;
@property (nonatomic, readonly) NSString *uberBackgroundJoeColor;
@property (nonatomic, readonly) NSString *url;




@end


#endif