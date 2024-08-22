// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPERIPHERALHOSTSTATE_H
#define UIPERIPHERALHOSTSTATE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface UIPeripheralHostState : NSObject

@property (nonatomic) UIPeripheralAnimationGeometry geometry; // ivar: _geometry
@property (nonatomic) BOOL inPositionIsDestination; // ivar: _inPositionIsDestination
@property (retain, nonatomic) NSDictionary *screenGeometry; // ivar: _screenGeometry


+(id)stateWithGeometry:(struct UIPeripheralAnimationGeometry )arg0 inPositionIsDestination:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif