// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC11ACTIONKITUI22INSTAPAPERLOGINSESSION_H
#define _TTC11ACTIONKITUI22INSTAPAPERLOGINSESSION_H

@protocol IKEngineDelegate;

#import <Foundation/Foundation.h>


@interface _TtC11ActionKitUI22InstapaperLoginSession : NSObject <IKEngineDelegate>

 {
    ? engine;
    ? username;
    ? password;
    ? continuation;
}




-(id)init;
-(void)engine:(id)arg0 connection:(id)arg1 didReceiveAuthToken:(id)arg2 andTokenSecret:(id)arg3 ;
-(void)engine:(id)arg0 didFailConnection:(id)arg1 error:(id)arg2 ;


@end


#endif