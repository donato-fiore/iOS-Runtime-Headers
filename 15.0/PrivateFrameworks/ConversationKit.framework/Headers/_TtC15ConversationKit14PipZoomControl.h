// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15CONVERSATIONKIT14PIPZOOMCONTROL_H
#define _TTC15CONVERSATIONKIT14PIPZOOMCONTROL_H


#import <Foundation/Foundation.h>


@interface _TtC15ConversationKit14PipZoomControl : NSObject {
    ? zoomControl;
    ? pinchGestureRecognizer;
    ? CHIPID_IPHONE_31;
    ? CHIPID_IPHONE_8110;
    ? chipID;
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