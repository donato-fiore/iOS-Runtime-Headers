// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TMLUICONTROLACTIONTARGET_H
#define TMLUICONTROLACTIONTARGET_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TMLUIControlActionTarget : NSObject {
    NSString *_signalName;
    NSUInteger _controlEvent;
}




-(id)initWithSignal:(id)arg0 controlEvent:(NSUInteger)arg1 ;
-(void)controlAction:(id)arg0 forEvent:(id)arg1 ;


@end


#endif