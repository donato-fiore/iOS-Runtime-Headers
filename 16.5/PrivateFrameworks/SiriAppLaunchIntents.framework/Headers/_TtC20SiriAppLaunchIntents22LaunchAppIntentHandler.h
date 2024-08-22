// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC20SIRIAPPLAUNCHINTENTS22LAUNCHAPPINTENTHANDLER_H
#define _TTC20SIRIAPPLAUNCHINTENTS22LAUNCHAPPINTENTHANDLER_H

@protocol LaunchAppIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC20SiriAppLaunchIntents22LaunchAppIntentHandler : NSObject <LaunchAppIntentHandling>

 {
    ? appsSearcher;
    ? installedApps;
    ? carPlaySupportProvider;
}




-(?)confirmLaunchAppcompletion;
-(?)handleLaunchAppcompletion;
-(?)resolveApplicationForLaunchAppwithCompletion;
-(id)init;


@end


#endif