// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18PODCASTSFOUNDATION22DOWNLOADABLEURLOPTIONS_H
#define _TTC18PODCASTSFOUNDATION22DOWNLOADABLEURLOPTIONS_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface _TtC18PodcastsFoundation22DownloadableURLOptions : NSObject {
    ? urlRawString;
}


@property (nonatomic) BOOL nonAppInitiated; // ivar: nonAppInitiated
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *urlRawString;


-(id)init;
-(id)init:(id)arg0 nonAppInitiated:(BOOL)arg1 ;
-(id)initWithUrl:(id)arg0 nonAppInitiated:(BOOL)arg1 ;


@end


#endif