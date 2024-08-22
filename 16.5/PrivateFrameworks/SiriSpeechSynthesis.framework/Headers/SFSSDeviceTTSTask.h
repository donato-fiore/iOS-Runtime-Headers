// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSSDEVICETTSTASK_H
#define SFSSDEVICETTSTASK_H



#import "SFSpeechSynthesisTask.h"
#import "SFSSTTSEngine.h"

@interface SFSSDeviceTTSTask : SFSpeechSynthesisTask

@property (weak, nonatomic) SFSSTTSEngine *ttsEngine; // ivar: _ttsEngine


-(id)initWithRequest:(id)arg0 ;
-(void)cancelTask;
-(void)startTask:(id)arg0 ;


@end


#endif