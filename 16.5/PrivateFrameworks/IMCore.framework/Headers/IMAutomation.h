// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMAUTOMATION_H
#define IMAUTOMATION_H


#import <Foundation/Foundation.h>


@interface IMAutomation : NSObject



-(BOOL)checkArgumentValidity:(id)arg0 forExpectedNumberOfArguments:(int)arg1 ;
-(id)IMCoreAutomationPerformOperationWithDictionary:(id)arg0 ;
-(id)callIMCoreMethodWithDictionary:(id)arg0 ;
-(id)startConversationFrom:(id)arg0 andReceiveAt:(id)arg1 ;


@end


#endif