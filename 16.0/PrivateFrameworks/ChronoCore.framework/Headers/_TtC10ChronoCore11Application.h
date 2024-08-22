// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10CHRONOCORE11APPLICATION_H
#define _TTC10CHRONOCORE11APPLICATION_H

@class UIApplication;



@interface _TtC10ChronoCore11Application : UIApplication

@property (nonatomic, readonly) BOOL hostsSystemStatusBar;


-(BOOL)_isSpringBoard;
-(BOOL)_shouldAllowKeyboardArbiter;
-(BOOL)_supportsAlwaysOnDisplay;
-(id)init;


@end


#endif