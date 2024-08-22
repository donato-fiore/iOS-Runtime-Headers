// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15CONVERSATIONKIT14PIPZOOMCONTROL_H
#define _TTC15CONVERSATIONKIT14PIPZOOMCONTROL_H


#import <Foundation/Foundation.h>


@interface _TtC15ConversationKit14PipZoomControl : NSObject {
    ? zoomControl;
    ? pinchGestureRecognizer;
    ? minimumZoomFactor;
    ? zoomCameraSwitchFactor;
    ? zoomControlOffset;
    ? maximumZoomFactor;
    ? currentZoomFactor;
    ? initialZoomFactor;
}




+(BOOL)isZoomSupported;
-(id)init;
-(void)handlePinchWithSender:(id)arg0 ;


@end


#endif