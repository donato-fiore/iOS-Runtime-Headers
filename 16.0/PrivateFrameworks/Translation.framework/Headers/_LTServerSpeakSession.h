// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTSERVERSPEAKSESSION_H
#define _LTSERVERSPEAKSESSION_H

@protocol _LTTranslationEngine, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_LTPlaybackService.h"

@interface _LTServerSpeakSession : NSObject {
    id<_LTTranslationEngine> *_engine;
    _LTPlaybackService *_player;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)_createTemporaryOutputFileWithURL:(id)arg0 ;
-(id)initWithEngine:(id)arg0 ;
// -(void)_playback:(id)arg0 context:(id)arg1 completion:(id)arg2 audioStartHandler:(unk)arg3  ;
-(void)cancel;
// -(void)speak:(id)arg0 context:(id)arg1 completion:(id)arg2 audioStartHandler:(unk)arg3  ;


@end


#endif