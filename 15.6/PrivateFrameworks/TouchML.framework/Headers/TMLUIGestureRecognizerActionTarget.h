// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TMLUIGESTURERECOGNIZERACTIONTARGET_H
#define TMLUIGESTURERECOGNIZERACTIONTARGET_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TMLUIGestureRecognizerActionTarget : NSObject {
    NSString *_signalName;
    NSInteger _state;
}




-(id)initWithSignal:(id)arg0 state:(NSInteger)arg1 ;
-(void)handleGesture:(id)arg0 ;


@end


#endif