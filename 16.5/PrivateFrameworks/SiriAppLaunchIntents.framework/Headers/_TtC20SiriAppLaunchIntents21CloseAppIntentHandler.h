// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC20SIRIAPPLAUNCHINTENTS21CLOSEAPPINTENTHANDLER_H
#define _TTC20SIRIAPPLAUNCHINTENTS21CLOSEAPPINTENTHANDLER_H

@protocol CloseAppIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC20SiriAppLaunchIntents21CloseAppIntentHandler : NSObject <CloseAppIntentHandling>

 {
    ? aceHelper;
    ? appsSearcher;
}




-(?)confirmCloseAppcompletion;
-(?)handleCloseAppcompletion;
-(?)resolveApplicationForCloseAppwithCompletion;
-(id)init;


@end


#endif