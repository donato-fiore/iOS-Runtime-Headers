// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMPPODCAST_H
#define SAMPPODCAST_H

@class NSString;


#import "SAMPMediaItem.h"

@interface SAMPPodcast : SAMPMediaItem

@property (copy, nonatomic) NSString *seriesId;
@property (copy, nonatomic) NSString *seriesTitle;


+(id)podcast;
+(id)podcastWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif