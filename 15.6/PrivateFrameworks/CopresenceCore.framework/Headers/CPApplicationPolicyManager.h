// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPAPPLICATIONPOLICYMANAGER_H
#define CPAPPLICATIONPOLICYMANAGER_H

@class NSDictionary;
@protocol CPApplicationPolicyManager;

#import <Foundation/Foundation.h>


@interface CPApplicationPolicyManager : NSObject <CPApplicationPolicyManager>

 {
    ? storage;
    ? config;
    ? lock;
    ? queue;
    ? delegates;
}


@property (nonatomic, readonly) NSDictionary *authorizedBundleIdentifiers;
@property (nonatomic) BOOL autoSharePlayEnabled;
@property (nonatomic, readonly) BOOL backgroundLaunchEnabled;


+(id)sharedInstance;
-(BOOL)shouldLaunchAppInBackgroundForActivity:(id)arg0 onConversation:(id)arg1 ;
-(id)init;
-(void)addDelegate:(id)arg0 withQueue:(id)arg1 ;
-(void)dealloc;
-(void)handleApplicationUninstalledNotification:(id)arg0 ;
-(void)handleCNContactStoreDidChangeNotification:(id)arg0 ;
-(void)setAuthorization:(BOOL)arg0 forBundleID:(id)arg1 ;
-(void)updateAllowedHandlesForConversation:(id)arg0 ;


@end


#endif