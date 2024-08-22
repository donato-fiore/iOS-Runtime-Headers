// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIMESSAGINGACTIONRUNNER_H
#define AMSUIMESSAGINGACTIONRUNNER_H


#import <Foundation/Foundation.h>


@interface AMSUIMessagingActionRunner : NSObject



+(BOOL)canRespondToDeeplink:(id)arg0 ;
+(BOOL)canRespondToIdentifier:(id)arg0 ;
+(id)performWithDeeplink:(id)arg0 context:(id)arg1 parameters:(id)arg2 ;
+(id)performWithIdentifier:(id)arg0 context:(id)arg1 parameters:(id)arg2 ;
-(id)init;


@end


#endif