// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPGENERICTRACKLISTPLAYBACKQUEUE_H
#define MPGENERICTRACKLISTPLAYBACKQUEUE_H

@class NSString, NSArray;


#import "MPRemotePlaybackQueue.h"
#import "MPIdentifierSet.h"

@interface MPGenericTracklistPlaybackQueue : MPRemotePlaybackQueue

@property (readonly, nonatomic) MPIdentifierSet *collectionIdentifierSet; // ivar: _collectionIdentifierSet
@property (readonly, nonatomic) NSString *firstTrackIdentifier; // ivar: _firstTrackIdentifier
@property (readonly, nonatomic) NSInteger repeatType; // ivar: _repeatType
@property (readonly, nonatomic) NSInteger shuffleType; // ivar: _shuffleType
@property (readonly, nonatomic) NSArray *trackIdentifiers; // ivar: _trackIdentifiers


+(BOOL)supportsSecureCoding;
-(BOOL)verifyWithError:(*id)arg0 ;
-(id)description;
-(id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg0 options:(id)arg1 ;


@end


#endif