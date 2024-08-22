// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLFMESSAGESSETTINGS_H
#define CLFMESSAGESSETTINGS_H

@class NSString;


#import "CLFBaseSettings.h"

@interface CLFMessagesSettings : CLFBaseSettings

@property (retain, nonatomic) NSString *communicationLimit;
@property (nonatomic) BOOL conversationDetailsEnabled;


+(id)allPreferenceSelectorsAsStrings;
+(id)domainName;
+(id)sharedInstance;
-(id)init;


@end


#endif