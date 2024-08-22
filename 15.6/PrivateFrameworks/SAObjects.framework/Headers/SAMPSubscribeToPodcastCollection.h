// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMPSUBSCRIBETOPODCASTCOLLECTION_H
#define SAMPSUBSCRIBETOPODCASTCOLLECTION_H

@class NSString;


#import "SADomainCommand.h"
#import "SAMPPodcastCollection.h"

@interface SAMPSubscribeToPodcastCollection : SADomainCommand

@property (copy, nonatomic) NSString *assetInfo;
@property (copy, nonatomic) NSString *hashedRouteUID;
@property (retain, nonatomic) SAMPPodcastCollection *podcastCollection;


+(id)subscribeToPodcastCollection;
+(id)subscribeToPodcastCollectionWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif