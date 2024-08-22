// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNLSAPPLICATIONWORKSPACE_H
#define CNLSAPPLICATIONWORKSPACE_H

@class NSString;
@protocol CNLSApplicationWorkspace, CNSchedulerProvider;

#import <Foundation/Foundation.h>


@interface CNLSApplicationWorkspace : NSObject <CNLSApplicationWorkspace>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;


+(id)inProcessLaunchServices;
+(id)launchServices;
+(id)remoteAdapter;
-(id)applicationForBundleIdentifier:(id)arg0 ;
-(id)applicationsAvailableForHandlingURLScheme:(id)arg0 ;
-(id)applicationsForUserActivityType:(id)arg0 ;
-(id)init;
-(id)initWithSchedulerProvider:(id)arg0 ;
-(id)observableForApplicationsChangedWithSchedulerProvider:(id)arg0 ;
-(void)openSensitiveURLInBackground:(id)arg0 withOptions:(id)arg1 ;
-(void)openSensitiveURLInBackground:(id)arg0 withOptions:(id)arg1 completionHandler:(id)arg2 ;
-(void)openUserActivity:(id)arg0 inApplication:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif