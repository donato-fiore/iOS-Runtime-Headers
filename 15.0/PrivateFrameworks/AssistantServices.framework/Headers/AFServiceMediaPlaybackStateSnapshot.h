// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFSERVICEMEDIAPLAYBACKSTATESNAPSHOT_H
#define AFSERVICEMEDIAPLAYBACKSTATESNAPSHOT_H

@class NSString, NSDate;


#import "AFServiceContextSnapshot.h"

@interface AFServiceMediaPlaybackStateSnapshot : AFServiceContextSnapshot

@property (readonly, copy, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (readonly, copy, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (readonly, copy, nonatomic) NSDate *nowPlayingTimestamp; // ivar: _nowPlayingTimestamp
@property (readonly, nonatomic) NSInteger playbackState; // ivar: _playbackState


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeliveryDate:(id)arg0 playbackState:(NSInteger)arg1 nowPlayingTimestamp:(id)arg2 mediaType:(id)arg3 groupIdentifier:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif