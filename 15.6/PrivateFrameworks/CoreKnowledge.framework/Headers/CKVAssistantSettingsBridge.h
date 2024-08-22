// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVASSISTANTSETTINGSBRIDGE_H
#define CKVASSISTANTSETTINGSBRIDGE_H


#import <Foundation/Foundation.h>


@interface CKVAssistantSettingsBridge : NSObject



+(BOOL)isCustomerInstall;
+(BOOL)isSiriUODEnabled;
+(id)currentSiriLanguageCode;
-(id)init;


@end


#endif