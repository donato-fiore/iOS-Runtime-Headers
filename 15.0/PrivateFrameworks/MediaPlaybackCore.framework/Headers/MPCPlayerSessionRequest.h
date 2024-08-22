// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCPLAYERSESSIONREQUEST_H
#define MPCPLAYERSESSIONREQUEST_H

@class MPRequest, NSString, MPPropertySet;
@protocol MPCMediaRemoteMiddlewareMetadataOperationConfiguration;


#import "MPCPlayerPath.h"

@interface MPCPlayerSessionRequest : MPRequest <MPCMediaRemoteMiddlewareMetadataOperationConfiguration>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MPCPlayerPath *playerPath; // ivar: _playerPath
@property (readonly, nonatomic) MPPropertySet *playingItemProperties;
@property (readonly, nonatomic) NSString *preferredFallbackItemRelationship;
@property (readonly, nonatomic) MPPropertySet *queueItemProperties;
@property (readonly, nonatomic) MPPropertySet *queueSectionProperties;
@property (copy, nonatomic) MPPropertySet *sessionProperties; // ivar: _sessionProperties
@property (readonly) Class superclass;
@property (readonly) ? tracklistRange;


+(Class)responseClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)middlewareClasses;


@end


#endif