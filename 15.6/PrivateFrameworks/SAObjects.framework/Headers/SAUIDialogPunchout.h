// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUIDIALOGPUNCHOUT_H
#define SAUIDIALOGPUNCHOUT_H



#import "SAAceView.h"
#import "SAUIButton.h"
#import "SAUIAssistantUtteranceView.h"

@interface SAUIDialogPunchout : SAAceView

@property (retain, nonatomic) SAUIButton *buttonView;
@property (retain, nonatomic) SAUIAssistantUtteranceView *utteranceView;


+(id)dialogPunchout;
+(id)dialogPunchoutWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif