// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC20SIRIIDENTITYINTERNAL26SWITCHPROFILEINTENTHANDLER_H
#define _TTC20SIRIIDENTITYINTERNAL26SWITCHPROFILEINTENTHANDLER_H

@protocol SwitchProfileIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC20SiriIdentityInternal26SwitchProfileIntentHandler : NSObject <SwitchProfileIntentHandling>

 {
    ? pbAccess;
    ? assistantServices;
    ? siriKitEventSender;
}




-(?)confirmSwitchProfilecompletion;
-(?)handleSwitchProfilecompletion;
-(?)resolveAccountForSwitchProfilewithCompletion;
-(id)init;


@end


#endif