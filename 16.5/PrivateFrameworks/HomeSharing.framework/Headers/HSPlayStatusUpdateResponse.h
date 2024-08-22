// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HSPLAYSTATUSUPDATERESPONSE_H
#define HSPLAYSTATUSUPDATERESPONSE_H

@class NSDictionary;


#import "HSResponse.h"

@interface HSPlayStatusUpdateResponse : HSResponse

@property (nonatomic) unsigned int nextRevisionID; // ivar: _nextRevisionID
@property (nonatomic) NSUInteger nowPlayingContainerID; // ivar: _nowPlayingContainerID
@property (nonatomic) NSUInteger nowPlayingContainerItemID; // ivar: _nowPlayingContainerItemID
@property (nonatomic) NSUInteger nowPlayingDatabaseID; // ivar: _nowPlayingDatabaseID
@property (nonatomic) NSUInteger nowPlayingItemID; // ivar: _nowPlayingItemID
@property (copy, nonatomic) NSDictionary *playStatusInformation; // ivar: _playStatusInformation


-(id)description;


@end


#endif