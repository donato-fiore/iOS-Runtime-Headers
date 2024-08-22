// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBCOREAUDIOCAPTURESOURCEIOSLISTENER_H
#define WEBCOREAUDIOCAPTURESOURCEIOSLISTENER_H


#import <Foundation/Foundation.h>


@interface WebCoreAudioCaptureSourceIOSListener : NSObject {
    *void _callback;
}




-(id)initWithCallback:(*void)arg0 ;
-(void)invalidate;
-(void)sessionMediaServicesWereReset:(id)arg0 ;


@end


#endif