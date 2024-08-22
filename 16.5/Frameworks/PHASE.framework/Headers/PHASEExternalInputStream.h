// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASEEXTERNALINPUTSTREAM_H
#define PHASEEXTERNALINPUTSTREAM_H



#import "PHASEExternalStream.h"
#import "PHASEExternalInputStreamDefinition.h"

@interface PHASEExternalInputStream : PHASEExternalStream {
    id *_receiverBlock;
}


@property (readonly, nonatomic) PHASEExternalInputStreamDefinition *definition; // ivar: _definition
@property (nonatomic, getter=isMuted) BOOL mute; // ivar: _mute


+(id)new;
// +(void)streamWithEngine:(id)arg0 definition:(id)arg1 startsPaused:(BOOL)arg2 delegate:(id)arg3 receiverBlock:(id)arg4 callback:(unk)arg5  ;
// +(void)streamWithEngine:(id)arg0 uuid:(id)arg1 definition:(id)arg2 startsPaused:(BOOL)arg3 delegate:(id)arg4 receiverBlock:(id)arg5 callback:(unk)arg6  ;
-(id)init;
-(id)initWithStreamGroupUUID:(id)arg0 streamUUID:(id)arg1 engine:(id)arg2 streamDefinition:(id)arg3 startsPaused:(BOOL)arg4 delegate:(id)arg5 receiverBlock:(id)arg6 ;
-(void)dealloc;


@end


#endif