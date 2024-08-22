// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC19SIRISETTINGSINTENTS23SETNUMERICINTENTHANDLER_H
#define _TTC19SIRISETTINGSINTENTS23SETNUMERICINTENTHANDLER_H

@protocol INSetNumericSettingIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC19SiriSettingsIntents23SetNumericIntentHandler : NSObject <INSetNumericSettingIntentHandling>

 {
    ? setHandlerProvider;
    ? confirmationConfigProvider;
}




-(id)init;
-(void)confirmSetNumericSetting:(id)arg0 completion:(id)arg1 ;
-(void)handleSetNumericSetting:(id)arg0 completion:(id)arg1 ;


@end


#endif