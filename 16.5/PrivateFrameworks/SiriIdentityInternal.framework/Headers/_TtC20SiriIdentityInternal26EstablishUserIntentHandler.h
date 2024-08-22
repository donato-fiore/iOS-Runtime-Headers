// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC20SIRIIDENTITYINTERNAL26ESTABLISHUSERINTENTHANDLER_H
#define _TTC20SIRIIDENTITYINTERNAL26ESTABLISHUSERINTENTHANDLER_H

@protocol UserIdentifyIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC20SiriIdentityInternal26EstablishUserIntentHandler : NSObject <UserIdentifyIntentHandling>

 {
    ? userIdentity;
    ? currentRequest;
    ? currentDevice;
}




-(?)confirmUserIdentifycompletion;
-(?)handleUserIdentifycompletion;
-(?)resolveIdentityForUserIdentifywithCompletion;
-(id)init;


@end


#endif