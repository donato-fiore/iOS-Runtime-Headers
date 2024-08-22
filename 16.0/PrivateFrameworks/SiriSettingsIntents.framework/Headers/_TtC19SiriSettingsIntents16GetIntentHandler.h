// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19SIRISETTINGSINTENTS16GETINTENTHANDLER_H
#define _TTC19SIRISETTINGSINTENTS16GETINTENTHANDLER_H

@protocol INGetSettingIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC19SiriSettingsIntents16GetIntentHandler : NSObject <INGetSettingIntentHandling>

 {
    ? settingIdentifierHandlers;
}




-(id)init;
-(void)handleGetSetting:(id)arg0 completion:(id)arg1 ;


@end


#endif