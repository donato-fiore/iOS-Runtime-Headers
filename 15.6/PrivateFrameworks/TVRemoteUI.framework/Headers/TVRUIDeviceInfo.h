// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRUIDEVICEINFO_H
#define TVRUIDEVICEINFO_H


#import <Foundation/Foundation.h>


@interface TVRUIDeviceInfo : NSObject

@property (readonly, nonatomic, getter=hasHomeButton) BOOL homeButton;
@property (readonly, nonatomic, getter=isPad) BOOL pad;
@property (nonatomic) CGFloat volumeButtonHeight; // ivar: _volumeButtonHeight
@property (nonatomic) CGRect volumeButtonsRect; // ivar: _volumeButtonsRect


+(id)currentDeviceInfo;
-(CGFloat)_volumeButtonsX;
-(id)_volumeButtonsDictionaryForSpecificHardaware;
-(id)description;
-(id)hardwareInfoForOrientation:(NSInteger)arg0 ;
-(id)init;
-(struct CGRect )_userIntentButtonRect;
-(struct CGRect )_volumeDownButtonRect;
-(struct CGRect )_volumeUpButtonRect;
-(void)_readPlistForParametersIfNeeded;


@end


#endif