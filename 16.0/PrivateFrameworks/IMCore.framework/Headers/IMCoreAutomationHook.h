// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCOREAUTOMATIONHOOK_H
#define IMCOREAUTOMATIONHOOK_H


#import <Foundation/Foundation.h>

#import "IMAccount.h"

@interface IMCoreAutomationHook : NSObject {
    IMAccount *_imessageAccount;
}


@property (readonly) IMAccount *bestiMessageAccount;


+(id)stringFromAutomationErrorCode:(NSInteger)arg0 ;
-(id)chatForHandles:(id)arg0 error:(*id)arg1 results:(id)arg2 ;
-(id)existingChatForGroupID:(id)arg0 error:(*id)arg1 results:(id)arg2 ;
-(id)handlesFromStrings:(id)arg0 error:(*id)arg1 results:(id)arg2 ;


@end


#endif