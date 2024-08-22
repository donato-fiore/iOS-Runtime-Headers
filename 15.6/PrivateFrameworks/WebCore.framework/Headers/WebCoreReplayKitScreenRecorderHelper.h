// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBCOREREPLAYKITSCREENRECORDERHELPER_H
#define WEBCOREREPLAYKITSCREENRECORDERHELPER_H


#import <Foundation/Foundation.h>


@interface WebCoreReplayKitScreenRecorderHelper : NSObject {
    WeakPtr<WebCore::ReplayKitCaptureSource, WTF::EmptyCounter> _callback;
}




-(id)initWithCallback:(*void)arg0 ;
-(void)disconnect;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif