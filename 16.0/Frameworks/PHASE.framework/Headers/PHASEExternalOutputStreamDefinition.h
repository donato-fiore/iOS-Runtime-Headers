// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASEEXTERNALOUTPUTSTREAMDEFINITION_H
#define PHASEEXTERNALOUTPUTSTREAMDEFINITION_H

@class AVAudioFormat;

#import <Foundation/Foundation.h>

#import "PHASEExternalStreamCollection.h"

@interface PHASEExternalOutputStreamDefinition : NSObject

@property (readonly, nonatomic) unsigned int audioSessionToken; // ivar: _audioSessionToken
@property (readonly, nonatomic) AVAudioFormat *format; // ivar: _format
@property (readonly, nonatomic) unsigned int maximumFramesToRender; // ivar: _maximumFramesToRender
@property (readonly, nonatomic) PHASEExternalStreamCollection *streamCollection; // ivar: _streamCollection
@property (readonly, nonatomic) NSUInteger streamIndex; // ivar: _streamIndex
@property (readonly, nonatomic) NSInteger streamType; // ivar: _streamType


+(id)new;
-(id)description;
-(id)init;
-(id)initWithStreamCollection:(id)arg0 index:(NSUInteger)arg1 format:(id)arg2 maximumFramesToRender:(unsigned int)arg3 audioSessionToken:(unsigned int)arg4 ;
-(id)initWithStreamType:(NSInteger)arg0 format:(id)arg1 maximumFramesToRender:(unsigned int)arg2 ;
-(id)initWithStreamType:(NSInteger)arg0 format:(id)arg1 maximumFramesToRender:(unsigned int)arg2 audioSessionToken:(unsigned int)arg3 ;


@end


#endif