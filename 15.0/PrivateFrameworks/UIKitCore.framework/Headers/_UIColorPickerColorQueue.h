// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLORPICKERCOLORQUEUE_H
#define _UICOLORPICKERCOLORQUEUE_H

@class CADisplayLink;
@protocol _UIColorPickerColorQueueDelegate;

#import <Foundation/Foundation.h>

#import "_UIColorPickerColorQueueContainer.h"

@interface _UIColorPickerColorQueue : NSObject

@property (weak, nonatomic) NSObject<_UIColorPickerColorQueueDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (retain, nonatomic) _UIColorPickerColorQueueContainer *latestObject; // ivar: _latestObject


-(id)init;
-(void)_forwardToDelegate:(id)arg0 ;
-(void)_pickerDidSelectColor:(id)arg0 colorspace:(id)arg1 isVolatile:(BOOL)arg2 ;


@end


#endif