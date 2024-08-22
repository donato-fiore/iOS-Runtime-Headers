// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCPLAYERREQUEST_H
#define MPCPLAYERREQUEST_H

@class MPRequest, NSString, MPPropertySet;
@protocol MPCMediaRemoteMiddlewareMetadataOperationConfiguration;


#import "MPCPlayerPath.h"

@interface MPCPlayerRequest : MPRequest <MPCMediaRemoteMiddlewareMetadataOperationConfiguration>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disablePlaybackRateValidation; // ivar: _disablePlaybackRateValidation
@property (nonatomic) BOOL disablePlaybackStateValidation; // ivar: _disablePlaybackStateValidation
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MPCPlayerPath *playerPath; // ivar: _playerPath
@property (copy, nonatomic) MPPropertySet *playingItemProperties; // ivar: _playingItemProperties
@property (copy, nonatomic) NSString *preferredFallbackItemRelationship; // ivar: _preferredFallbackItemRelationship
@property (copy, nonatomic) MPPropertySet *queueItemProperties; // ivar: _queueItemProperties
@property (copy, nonatomic) MPPropertySet *queueSectionProperties; // ivar: _queueSectionProperties
@property (readonly) Class superclass;
@property (nonatomic) ? tracklistRange; // ivar: _tracklistRange


+(Class)responseClass;
-(id)_stateDumpObject;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)middlewareClasses;


@end


#endif