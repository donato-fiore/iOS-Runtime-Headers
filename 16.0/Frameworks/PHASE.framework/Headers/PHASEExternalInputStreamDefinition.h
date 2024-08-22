// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASEEXTERNALINPUTSTREAMDEFINITION_H
#define PHASEEXTERNALINPUTSTREAMDEFINITION_H

@class AVAudioFormat;

#import <Foundation/Foundation.h>


@interface PHASEExternalInputStreamDefinition : NSObject

@property (readonly, nonatomic) unsigned int audioSessionToken; // ivar: _audioSessionToken
@property (readonly, nonatomic) AVAudioFormat *format; // ivar: _format
@property (readonly, nonatomic) unsigned int maximumFrames; // ivar: _maximumFrames
@property (readonly, nonatomic) NSInteger streamType; // ivar: _streamType


+(id)new;
-(id)description;
-(id)init;
-(id)initWithStreamType:(NSInteger)arg0 format:(id)arg1 maximumFrames:(unsigned int)arg2 ;
-(id)initWithStreamType:(NSInteger)arg0 format:(id)arg1 maximumFrames:(unsigned int)arg2 audioSessionToken:(unsigned int)arg3 ;


@end


#endif