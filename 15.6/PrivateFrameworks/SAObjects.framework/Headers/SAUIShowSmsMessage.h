// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUISHOWSMSMESSAGE_H
#define SAUISHOWSMSMESSAGE_H



#import "SAUISnippet.h"
#import "SASmsSms.h"

@interface SAUIShowSmsMessage : SAUISnippet

@property (nonatomic) BOOL showAsDraft;
@property (retain, nonatomic) SASmsSms *sms;


+(id)showSmsMessage;
+(id)showSmsMessageWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif