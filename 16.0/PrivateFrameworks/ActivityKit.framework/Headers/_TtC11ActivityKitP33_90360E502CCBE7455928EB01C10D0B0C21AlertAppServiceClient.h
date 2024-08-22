// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11ACTIVITYKITP33_90360E502CCBE7455928EB01C10D0B0C21ALERTAPPSERVICECLIENT_H
#define _TTC11ACTIVITYKITP33_90360E502CCBE7455928EB01C10D0B0C21ALERTAPPSERVICECLIENT_H

@protocol _TtP11ActivityKit17AlertAppXPCServer_;

#import <Foundation/Foundation.h>


@interface _TtC11ActivityKitP33_90360E502CCBE7455928EB01C10D0B0C21AlertAppServiceClient : NSObject <_TtP11ActivityKit17AlertAppXPCServer_>

 {
    ? connection;
    ? delegate;
}




-(id)init;
-(void)dismissAlertWith:(id)arg0 ;
-(void)presentAlertWithActivityIdentifier:(id)arg0 payload:(id)arg1 options:(id)arg2 completion:(id)arg3 ;


@end


#endif