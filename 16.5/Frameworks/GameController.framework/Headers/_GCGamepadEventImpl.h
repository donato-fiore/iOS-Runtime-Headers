// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCGAMEPADEVENTIMPL_H
#define _GCGAMEPADEVENTIMPL_H

@class NSString;
@protocol _GCGamepadEvent;

#import <Foundation/Foundation.h>


@interface _GCGamepadEventImpl : NSObject <_GCGamepadEvent>

 {
    ? _data;
}


@property (nonatomic) float buttonAValue;
@property (nonatomic) float buttonBValue;
@property (nonatomic) float buttonHome;
@property (nonatomic) float buttonL4;
@property (nonatomic) float buttonL5;
@property (nonatomic) float buttonLeftShoulder;
@property (nonatomic) float buttonMenu;
@property (nonatomic) float buttonOptions;
@property (nonatomic) float buttonR4;
@property (nonatomic) float buttonR5;
@property (nonatomic) float buttonRightShoulder;
@property (nonatomic) float buttonSpecial0;
@property (nonatomic) float buttonSpecial1;
@property (nonatomic) float buttonSpecial10;
@property (nonatomic) float buttonSpecial11;
@property (nonatomic) float buttonSpecial12;
@property (nonatomic) float buttonSpecial13;
@property (nonatomic) float buttonSpecial14;
@property (nonatomic) float buttonSpecial15;
@property (nonatomic) float buttonSpecial2;
@property (nonatomic) float buttonSpecial3;
@property (nonatomic) float buttonSpecial4;
@property (nonatomic) float buttonSpecial5;
@property (nonatomic) float buttonSpecial6;
@property (nonatomic) float buttonSpecial7;
@property (nonatomic) float buttonSpecial8;
@property (nonatomic) float buttonSpecial9;
@property (nonatomic) float buttonXValue;
@property (nonatomic) float buttonYValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float dpadDownValue;
@property (nonatomic) float dpadLeftValue;
@property (nonatomic) float dpadRightValue;
@property (nonatomic) float dpadUpValue;
@property (readonly) NSUInteger hash;
@property (nonatomic) float leftThumbstickButton;
@property (nonatomic) float leftThumbstickDown;
@property (nonatomic) float leftThumbstickLeft;
@property (nonatomic) float leftThumbstickRight;
@property (nonatomic) float leftThumbstickUp;
@property (nonatomic) float leftTrigger;
@property (nonatomic) float rightThumbstickButton;
@property (nonatomic) float rightThumbstickDown;
@property (nonatomic) float rightThumbstickLeft;
@property (nonatomic) float rightThumbstickRight;
@property (nonatomic) float rightThumbstickUp;
@property (nonatomic) float rightTrigger;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)hasValidValueForElement:(NSInteger)arg0 ;
-(float)floatValueForElement:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithGamepadEvent:(id)arg0 ;
-(id)initWithTimeStamp:(NSUInteger)arg0 inputs:(float)arg1 validMask:(NSUInteger)arg2 ;


@end


#endif