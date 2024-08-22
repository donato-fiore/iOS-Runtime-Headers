// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMPPODCASTCOLLECTION_H
#define SAMPPODCASTCOLLECTION_H

@class NSString, NSArray, NSNumber;


#import "SAMPCollection.h"

@interface SAMPPodcastCollection : SAMPCollection

@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSArray *preferredPlayOrder;
@property (copy, nonatomic) NSString *sortArtist;
@property (copy, nonatomic) NSNumber *subscribed;


+(id)podcastCollection;
+(id)podcastCollectionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif