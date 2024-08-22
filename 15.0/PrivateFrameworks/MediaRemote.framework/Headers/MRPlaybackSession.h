// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRPLAYBACKSESSION_H
#define MRPLAYBACKSESSION_H

@class NSData, NSString;

#import <Foundation/Foundation.h>

#import "_MRPlaybackSessionProtobuf.h"

@interface MRPlaybackSession : NSObject

@property (readonly, copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSData *metadata; // ivar: _metadata
@property (copy, nonatomic) NSData *playbackSessionData; // ivar: _playbackSessionData
@property (readonly, nonatomic) _MRPlaybackSessionProtobuf *protobuf;
@property (readonly, copy, nonatomic) NSString *revision; // ivar: _revision
@property (copy, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithData:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 type:(id)arg1 playbackSessionData:(id)arg2 revision:(id)arg3 metadata:(id)arg4 ;
-(id)initWithProtobuf:(id)arg0 ;


@end


#endif