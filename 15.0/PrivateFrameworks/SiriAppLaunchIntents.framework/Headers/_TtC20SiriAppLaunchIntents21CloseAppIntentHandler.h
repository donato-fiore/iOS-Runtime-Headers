// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC20SIRIAPPLAUNCHINTENTS21CLOSEAPPINTENTHANDLER_H
#define _TTC20SIRIAPPLAUNCHINTENTS21CLOSEAPPINTENTHANDLER_H

@protocol CloseAppIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC20SiriAppLaunchIntents21CloseAppIntentHandler : NSObject <CloseAppIntentHandling>

 {
    ? aceHelper;
    ? appsSearcher;
}




-(id)init;
-(void)confirmCloseApp:(id)arg0 completion:(id)arg1 ;
-(void)handleCloseApp:(id)arg0 completion:(id)arg1 ;
-(void)resolveApplicationForCloseApp:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif