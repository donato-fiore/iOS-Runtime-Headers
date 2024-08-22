// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19SIRISETTINGSINTENTS22SETBINARYINTENTHANDLER_H
#define _TTC19SIRISETTINGSINTENTS22SETBINARYINTENTHANDLER_H

@protocol INSetBinarySettingIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC19SiriSettingsIntents22SetBinaryIntentHandler : NSObject <INSetBinarySettingIntentHandling>

 {
    ? setHandlerProvider;
    ? confirmationConfigProvider;
    ? settingsFeatureFlags;
    ? deviceState;
}




-(id)init;
-(void)confirmSetBinarySetting:(id)arg0 completion:(id)arg1 ;
-(void)handleSetBinarySetting:(id)arg0 completion:(id)arg1 ;


@end


#endif