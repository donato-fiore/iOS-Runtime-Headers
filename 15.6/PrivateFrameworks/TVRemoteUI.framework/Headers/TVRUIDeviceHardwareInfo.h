// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRUIDEVICEHARDWAREINFO_H
#define TVRUIDEVICEHARDWAREINFO_H


#import <Foundation/Foundation.h>


@interface TVRUIDeviceHardwareInfo : NSObject

@property (readonly, nonatomic) CGFloat totalHeight;
@property (readonly, nonatomic) unsigned int userIntentButtonEdge;
@property (nonatomic) CGRect userIntentButtonRect; // ivar: _userIntentButtonRect
@property (readonly, nonatomic) CGPoint volumeButtonsCenterPoint;
@property (readonly, nonatomic) unsigned int volumeButtonsEdge;
@property (nonatomic) CGRect volumeDownButtonRect; // ivar: _volumeDownButtonRect
@property (nonatomic) CGFloat volumeTotalHeight; // ivar: _volumeTotalHeight
@property (nonatomic) CGRect volumeUpButtonRect; // ivar: _volumeUpButtonRect


-(id)description;
-(id)initWithUserIntentButton:(struct CGRect )arg0 volumeUpButton:(struct CGRect )arg1 volumeDownButton:(struct CGRect )arg2 volumeTotalHeight:(CGFloat)arg3 ;


@end


#endif