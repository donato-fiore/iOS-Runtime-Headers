// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSBRIGHTNESSCONTROLLER_H
#define PSBRIGHTNESSCONTROLLER_H


#import <Foundation/Foundation.h>


@interface PSBrightnessController : NSObject

@property (copy, nonatomic) id *brightnessChangedExternally; // ivar: _brightnessChangedExternally
@property (copy, nonatomic) id *isTracking; // ivar: _isTracking


+(id)sharedController;


@end


#endif