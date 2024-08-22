// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISCREENEDGEPANRECOGNIZERSETTINGS_H
#define _UISCREENEDGEPANRECOGNIZERSETTINGS_H

@class UISettings, NSString;


#import "_UIScreenEdgePanRecognizerCornerSettings.h"
#import "_UIScreenEdgePanRecognizerDwellSettings.h"
#import "_UIScreenEdgePanRecognizerEdgeSettings.h"

@interface _UIScreenEdgePanRecognizerSettings : UISettings

@property (retain, nonatomic) _UIScreenEdgePanRecognizerCornerSettings *cornerSettings; // ivar: _cornerSettings
@property (retain, nonatomic) _UIScreenEdgePanRecognizerDwellSettings *dwellSettings; // ivar: _dwellSettings
@property (retain, nonatomic) _UIScreenEdgePanRecognizerEdgeSettings *edgeSettings; // ivar: _edgeSettings
@property (copy, nonatomic) NSString *multitaskingGestureMode; // ivar: _multitaskingGestureMode
@property (copy, nonatomic) NSString *navigationGestureMode; // ivar: _navigationGestureMode


+(id)settingsControllerModule;


@end


#endif