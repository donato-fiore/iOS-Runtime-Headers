// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSQRPARTICIPANTSTREAMS_H
#define IDSQRPARTICIPANTSTREAMS_H

@class NSNumber, NSMutableArray;

#import <Foundation/Foundation.h>


@interface IDSQRParticipantStreams : NSObject

@property (readonly, nonatomic) BOOL anyParticipant; // ivar: _anyParticipant
@property (readonly, nonatomic) BOOL anyStream; // ivar: _anyStream
@property (readonly) NSNumber *participantID; // ivar: _participantID
@property (readonly) NSMutableArray *streamArray; // ivar: _streamArray


+(id)streamWithParticipantID:(id)arg0 streamArray:(id)arg1 anyParticipant:(BOOL)arg2 anyStream:(BOOL)arg3 ;
-(id)description;
-(id)initWithParticipantID:(id)arg0 streamArray:(id)arg1 anyParticipant:(BOOL)arg2 anyStream:(BOOL)arg3 ;


@end


#endif