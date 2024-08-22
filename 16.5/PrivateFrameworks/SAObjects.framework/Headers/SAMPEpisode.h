// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMPEPISODE_H
#define SAMPEPISODE_H

@class NSString;


#import "SAMPMediaItem.h"

@interface SAMPEpisode : SAMPMediaItem

@property (nonatomic) NSInteger episodeNumber;
@property (nonatomic) NSInteger seasonNumber;
@property (nonatomic) NSInteger showEpisodesCount;
@property (copy, nonatomic) NSString *showName;


+(id)episode;
+(id)episodeWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif