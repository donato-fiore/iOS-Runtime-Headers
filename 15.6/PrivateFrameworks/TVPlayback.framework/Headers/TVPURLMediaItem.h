// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVPURLMEDIAITEM_H
#define TVPURLMEDIAITEM_H

@class NSSet, NSURL;


#import "TVPBaseMediaItem.h"

@interface TVPURLMediaItem : TVPBaseMediaItem

@property (copy, nonatomic) NSSet *traits; // ivar: _traits
@property (copy, nonatomic) NSURL *url; // ivar: _url


-(BOOL)hasTrait:(id)arg0 ;
-(BOOL)isEqualToMediaItem:(id)arg0 ;
-(id)init;
-(id)initWithURL:(id)arg0 traits:(id)arg1 ;
-(id)mediaItemURL;


@end


#endif