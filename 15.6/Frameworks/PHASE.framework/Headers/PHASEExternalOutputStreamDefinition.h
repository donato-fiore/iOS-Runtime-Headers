// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASEEXTERNALOUTPUTSTREAMDEFINITION_H
#define PHASEEXTERNALOUTPUTSTREAMDEFINITION_H

@class AVAudioFormat;

#import <Foundation/Foundation.h>


@interface PHASEExternalOutputStreamDefinition : NSObject

@property (readonly, nonatomic) unsigned int audioSessionToken; // ivar: _audioSessionToken
@property (readonly, nonatomic) AVAudioFormat *format; // ivar: _format
@property (readonly, nonatomic) unsigned int maximumFramesToRender; // ivar: _maximumFramesToRender
@property (readonly, nonatomic) NSInteger streamType; // ivar: _streamType


+(id)new;
-(id)init;
-(id)initWithStreamType:(NSInteger)arg0 format:(id)arg1 maximumFramesToRender:(unsigned int)arg2 ;
-(id)initWithStreamType:(NSInteger)arg0 format:(id)arg1 maximumFramesToRender:(unsigned int)arg2 audioSessionToken:(unsigned int)arg3 ;


@end


#endif