// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSPODCASTREFERENCEOBJECT_H
#define NMSPODCASTREFERENCEOBJECT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NMSPodcastReferenceObject : NSObject

@property (readonly, nonatomic) NSUInteger downloadOrder; // ivar: _downloadOrder
@property (nonatomic) NSUInteger episodeLimit; // ivar: _episodeLimit
@property (readonly, nonatomic) NSString *feedURL; // ivar: _feedURL


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithFeedURL:(id)arg0 downloadOrder:(NSUInteger)arg1 ;
-(id)initWithFeedURL:(id)arg0 episodeLimit:(NSUInteger)arg1 downloadOrder:(NSUInteger)arg2 ;
-(id)predicatesForFeedURL;


@end


#endif