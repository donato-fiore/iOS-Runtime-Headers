// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKAIRPLAYROUTEPICKER_H
#define WKAIRPLAYROUTEPICKER_H


#import <Foundation/Foundation.h>


@interface WKAirPlayRoutePicker : NSObject {
    RetainPtr<MPMediaControlsViewController> _actionSheet;
}




-(void)dealloc;
-(void)showFromView:(id)arg0 routeSharingPolicy:(unsigned char)arg1 routingContextUID:(id)arg2 hasVideo:(BOOL)arg3 ;


@end


#endif