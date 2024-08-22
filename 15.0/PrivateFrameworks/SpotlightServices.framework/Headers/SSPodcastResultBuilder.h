// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSPODCASTRESULTBUILDER_H
#define SSPODCASTRESULTBUILDER_H

@class NSURL, NSDate, NSString;


#import "SSResultBuilder.h"

@interface SSPodcastResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (retain, nonatomic) NSDate *lastViewedDate; // ivar: _lastViewedDate
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *podcastDescription; // ivar: _podcastDescription


+(BOOL)isCoreSpotlightResult;
+(BOOL)supportsResult:(id)arg0 ;
+(id)bundleId;
-(id)buildCompactCardSection;
-(id)buildInlineCardSection;
-(id)buildLastViewedString;
-(id)initWithResult:(id)arg0 ;


@end


#endif