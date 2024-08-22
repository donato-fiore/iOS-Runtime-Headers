// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASEEXTERNALOUTPUTSTREAM_H
#define PHASEEXTERNALOUTPUTSTREAM_H



#import "PHASEExternalStream.h"
#import "PHASEExternalOutputStreamDefinition.h"

@interface PHASEExternalOutputStream : PHASEExternalStream {
    id *_renderBlock;
}


@property (readonly, nonatomic) PHASEExternalOutputStreamDefinition *definition; // ivar: _definition


+(id)new;
// +(void)streamWithEngine:(id)arg0 definition:(id)arg1 startsPaused:(BOOL)arg2 delegate:(id)arg3 renderBlock:(id)arg4 callback:(unk)arg5  ;
// +(void)streamWithEngine:(id)arg0 uuid:(id)arg1 definition:(id)arg2 startsPaused:(BOOL)arg3 delegate:(id)arg4 renderBlock:(id)arg5 callback:(unk)arg6  ;
-(id)init;
-(id)initWithGroupUUID:(id)arg0 streamUUID:(id)arg1 engine:(id)arg2 streamDefinition:(id)arg3 startsPaused:(BOOL)arg4 delegate:(id)arg5 renderBlock:(id)arg6 ;
-(void)dealloc;


@end


#endif