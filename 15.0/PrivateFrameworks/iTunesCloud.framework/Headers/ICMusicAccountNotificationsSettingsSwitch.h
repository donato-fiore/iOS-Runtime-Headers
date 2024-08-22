// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMUSICACCOUNTNOTIFICATIONSSETTINGSSWITCH_H
#define ICMUSICACCOUNTNOTIFICATIONSSETTINGSSWITCH_H

@class NSMutableDictionary, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface ICMusicAccountNotificationsSettingsSwitch : NSObject {
    NSMutableDictionary *_valueDictionary;
    BOOL _isToggled;
    BOOL _hasBeenPreviouslyToggled;
}


@property (readonly, nonatomic) BOOL hasBeenPreviouslyToggled;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isToggled;
@property (readonly, copy, nonatomic) NSDictionary *itemResponseDictionary; // ivar: _itemResponseDictionary


-(id)initWithItemResponseDictionary:(id)arg0 ;
-(id)initWithToggleState:(BOOL)arg0 hasBeenToggled:(BOOL)arg1 identifier:(id)arg2 ;


@end


#endif