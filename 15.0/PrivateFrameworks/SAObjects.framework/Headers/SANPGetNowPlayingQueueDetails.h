// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SANPGETNOWPLAYINGQUEUEDETAILS_H
#define SANPGETNOWPLAYINGQUEUEDETAILS_H

@class NSArray, NSNumber;


#import "SABaseClientBoundCommand.h"

@interface SANPGetNowPlayingQueueDetails : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (nonatomic) NSInteger nextItemCount;
@property (copy, nonatomic) NSNumber *preemptiveNowPlayingQueueDetailsTimeOut;
@property (nonatomic) NSInteger previousItemCount;


+(id)getNowPlayingQueueDetails;
+(id)getNowPlayingQueueDetailsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif