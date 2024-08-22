// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHOMEHARDWAREBUTTONGESTURERECOGNIZERCONFIGURATION_H
#define SBHOMEHARDWAREBUTTONGESTURERECOGNIZERCONFIGURATION_H

@class UIHBClickGestureRecognizer, UIHBLongClickGestureRecognizer;

#import <Foundation/Foundation.h>

#import "SBSystemGestureManager.h"

@interface SBHomeHardwareButtonGestureRecognizerConfiguration : NSObject

@property (retain, nonatomic) UIHBClickGestureRecognizer *acceleratedSinglePressUpGestureRecognizer; // ivar: _acceleratedSinglePressUpGestureRecognizer
@property (retain, nonatomic) UIHBClickGestureRecognizer *doublePressDownGestureRecognizer; // ivar: _doublePressDownGestureRecognizer
@property (retain, nonatomic) UIHBClickGestureRecognizer *doublePressUpGestureRecognizer; // ivar: _doublePressUpGestureRecognizer
@property (retain, nonatomic) UIHBClickGestureRecognizer *doubleTapUpGestureRecognizer; // ivar: _doubleTapUpGestureRecognizer
@property (retain, nonatomic) UIHBClickGestureRecognizer *initialButtonDownGestureRecognizer; // ivar: _initialButtonDownGestureRecognizer
@property (retain, nonatomic) UIHBClickGestureRecognizer *initialButtonUpGestureRecognizer; // ivar: _initialButtonUpGestureRecognizer
@property (retain, nonatomic) UIHBLongClickGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (readonly, nonatomic) BOOL shouldConfigureDependencies;
@property (retain, nonatomic) UIHBClickGestureRecognizer *singlePressUpGestureRecognizer; // ivar: _singlePressUpGestureRecognizer
@property (retain, nonatomic) SBSystemGestureManager *systemGestureManager; // ivar: _systemGestureManager
@property (retain, nonatomic) UIHBClickGestureRecognizer *triplePressUpGestureRecognizer; // ivar: _triplePressUpGestureRecognizer




@end


#endif