// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VOSSETTINGSITEM_H
#define VOSSETTINGSITEM_H

@class NSString, AXSBQuickSettingsData;

#import <Foundation/Foundation.h>


@interface VOSSettingsItem : NSObject

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger itemType; // ivar: _itemType
@property (readonly, nonatomic) NSString *localizedName;
@property (retain, nonatomic) AXSBQuickSettingsData *settingsData; // ivar: _settingsData


+(id)Activities;
+(id)AudioDucking;
+(id)BrailleAlerts;
+(id)BrailleAutoAdvanceDuration;
+(id)BrailleInput;
+(id)BrailleOutput;
+(id)BrailleTables;
+(id)CaptionPanel;
+(id)DirectTouch;
+(id)GestureDirection;
+(id)HardwareTypingFeedback;
+(id)Hints;
+(id)ImageDescriptions;
+(id)Language;
+(id)LargeCursor;
+(id)MediaDescriptions;
+(id)NavigateImages;
+(id)NavigationStyle;
+(id)PhoneticFeedback;
+(id)Pitch;
+(id)Punctuation;
+(id)RotorActionConfirmation;
+(id)ScreenRecognition;
+(id)SendToHDMI;
+(id)SlideToType;
+(id)SoftwareTypingFeedback;
+(id)Sounds;
+(id)SpeakNotifications;
+(id)SpeakingRate;
+(id)TypingStyle;
+(id)Volume;
+(id)allSettingsItems;
+(id)settingsIDtoItemMap:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithIdentifier:(id)arg0 itemType:(NSInteger)arg1 ;
-(id)description;


@end


#endif