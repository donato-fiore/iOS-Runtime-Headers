// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASEEXTERNALOUTPUTSTREAMNODEDEFINITION_H
#define PHASEEXTERNALOUTPUTSTREAMNODEDEFINITION_H

@class NSUUID;


#import "PHASEGeneratorNodeDefinition.h"

@interface PHASEExternalOutputStreamNodeDefinition : PHASEGeneratorNodeDefinition

@property (readonly, nonatomic) unsigned int channelLayoutTag; // ivar: _channelLayoutTag
@property (nonatomic) BOOL normalize; // ivar: _normalize
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)new;
-(id)init;
-(id)initWithExternalOutputStreamUUID:(id)arg0 mixerDefinition:(id)arg1 channelLayoutTag:(unsigned int)arg2 uid:(id)arg3 ;


@end


#endif