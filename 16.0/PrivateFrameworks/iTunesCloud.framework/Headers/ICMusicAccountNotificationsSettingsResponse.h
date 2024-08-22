// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMUSICACCOUNTNOTIFICATIONSSETTINGSRESPONSE_H
#define ICMUSICACCOUNTNOTIFICATIONSSETTINGSRESPONSE_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface ICMusicAccountNotificationsSettingsResponse : NSObject {
    NSDictionary *_responseDictionary;
}


@property (readonly, nonatomic) NSArray *settingsSwitches;
@property (readonly, nonatomic) BOOL wasSuccessful; // ivar: _wasSuccessful


+(id)createResponseBodyWithSwitches:(id)arg0 ;
-(id)initWithResponseDictionary:(id)arg0 ;


@end


#endif