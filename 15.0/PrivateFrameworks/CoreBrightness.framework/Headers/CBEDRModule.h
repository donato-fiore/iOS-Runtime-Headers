// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBEDRMODULE_H
#define CBEDRMODULE_H

@class CADisplay, CBDisplayModuleHID, NSMutableArray, NSString;
@protocol CBContainerModuleProtocol, CBHIDServiceProtocol;


#import "CBModule.h"
#import "CBColorModuleiOS.h"

@interface CBEDRModule : CBModule <CBContainerModuleProtocol, CBHIDServiceProtocol>

 {
    float _currentLux;
    float _currentNits;
    float _maxNits;
    float _Ycomp;
    float _prevLux;
    float _prevNits;
    float _prevMaxNits;
    float _prevYcomp;
    CADisplay *_cadisplay;
    CBDisplayModuleHID *_displayModule;
    CBColorModuleiOS *_colorModule;
    NSMutableArray *_filters;
    NSMutableArray *_alsNodes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)addHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)handleHIDEvent:(struct __IOHIDEvent *)arg0 from:(struct __IOHIDServiceClient *)arg1 ;
-(BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)copyPropertyForKey:(id)arg0 withParameter:(id)arg1 ;
-(id)initWithQueue:(id)arg0 display:(id)arg1 colorModule:(id)arg2 andDisplayModule:(id)arg3 ;
-(void)dealloc;
-(void)handleALSEvent:(id)arg0 ;
-(void)handleBrightnessUpdate:(id)arg0 ;
-(void)handleHIDEventInternal:(struct __IOHIDEvent *)arg0 from:(struct __IOHIDServiceClient *)arg1 ;
-(void)handleNotificationForKey:(id)arg0 withProperty:(id)arg1 ;
-(void)handleTargetWhitepointUpdate:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)updateEDRState;


@end


#endif