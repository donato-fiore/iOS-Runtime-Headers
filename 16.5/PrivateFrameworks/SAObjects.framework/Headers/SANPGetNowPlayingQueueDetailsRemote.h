// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SANPGETNOWPLAYINGQUEUEDETAILSREMOTE_H
#define SANPGETNOWPLAYINGQUEUEDETAILSREMOTE_H

@class NSArray;


#import "SABaseClientBoundCommand.h"
#import "SANPGetNowPlayingQueueDetails.h"

@interface SANPGetNowPlayingQueueDetailsRemote : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (retain, nonatomic) SANPGetNowPlayingQueueDetails *queueDetails;
@property (nonatomic) CGFloat routeTimeout;


+(id)getNowPlayingQueueDetailsRemote;
+(id)getNowPlayingQueueDetailsRemoteWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif