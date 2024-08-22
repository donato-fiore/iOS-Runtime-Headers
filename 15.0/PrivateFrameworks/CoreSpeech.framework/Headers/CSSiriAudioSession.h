// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSIRIAUDIOSESSION_H
#define CSSIRIAUDIOSESSION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSSiriAudioRoute.h"

@interface CSSiriAudioSession : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    CSSiriAudioRoute *_inputRoute;
    CSSiriAudioRoute *_outputRoute;
}




+(id)currentInputDeviceUIDArray;
+(id)sharedSession;
-(id)currentInputRoute;
-(id)currentOutputRoute;
-(id)init;


@end


#endif