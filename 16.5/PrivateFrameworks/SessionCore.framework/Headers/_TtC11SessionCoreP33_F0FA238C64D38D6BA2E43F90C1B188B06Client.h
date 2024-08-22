// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11SESSIONCOREP33_F0FA238C64D38D6BA2E43F90C1B188B06CLIENT_H
#define _TTC11SESSIONCOREP33_F0FA238C64D38D6BA2E43F90C1B188B06CLIENT_H

@class NSString;
@protocol ACActivityInputXPCServer;

#import <Foundation/Foundation.h>


@interface _TtC11SessionCoreP33_F0FA238C64D38D6BA2E43F90C1B188B06Client : NSObject <ACActivityInputXPCServer>

 {
    ? delegate;
    ? connection;
    ? targetQueue;
    ? queue;
    ? activityAuthorizer;
    ? requester;
    ? backoffPolicy;
    ? backoffBudget;
    ? ephemeralActivityIdentifiers;
    ? uuid;
}


@property (nonatomic, readonly) NSString *description;


-(id)init;
-(id)requestActivityWithRequest:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)endActivityWithIdentifier:(id)arg0 payload:(id)arg1 options:(id)arg2 ;
-(void)updateActivityWithIdentifier:(id)arg0 payload:(id)arg1 ;


@end


#endif