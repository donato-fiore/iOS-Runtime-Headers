// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCSESSIONPARTICIPANTMEDIASTREAMINFO_H
#define VCSESSIONPARTICIPANTMEDIASTREAMINFO_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "VCMediaStream.h"

@interface VCSessionParticipantMediaStreamInfo : NSObject

@property (retain, nonatomic) VCMediaStream *stream; // ivar: _stream
@property (readonly, nonatomic) NSArray *streamConfigs; // ivar: _streamConfigs


-(id)init;
-(void)addStreamConfig:(id)arg0 ;
-(void)dealloc;


@end


#endif