// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMPBASICPODCASTAPPSEARCH_H
#define SAMPBASICPODCASTAPPSEARCH_H

@class NSString;


#import "SADomainCommand.h"

@interface SAMPBasicPodcastAppSearch : SADomainCommand

@property (nonatomic) BOOL acceptPodcastCollections;
@property (nonatomic) BOOL acceptPodcastStations;
@property (nonatomic) NSInteger maxResults;
@property (copy, nonatomic) NSString *query;


+(id)basicPodcastAppSearch;
+(id)basicPodcastAppSearchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif