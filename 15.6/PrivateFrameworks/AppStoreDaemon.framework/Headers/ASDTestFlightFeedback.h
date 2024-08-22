// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDTESTFLIGHTFEEDBACK_H
#define ASDTESTFLIGHTFEEDBACK_H

@class NSString;
@protocol ASDServiceProvider;

#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDTestFlightFeedback : NSObject <ASDServiceProvider>

 {
    ASDServiceBroker *_serviceBroker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)interface;
+(id)sharedInstance;
-(BOOL)isFeedbackEnabledForBundleID:(id)arg0 ;
-(BOOL)isFeedbackEnabledForBundleURL:(id)arg0 ;
-(BOOL)isLaunchScreenEnabledForBundleID:(id)arg0 ;
-(BOOL)isLaunchScreenEnabledForBundleURL:(id)arg0 ;
-(id)_initWithServiceBroker:(id)arg0 ;
-(id)getDisplayNamesForBundleID:(id)arg0 ;
-(id)getDisplayNamesForBundleURL:(id)arg0 ;
-(id)getEmailAddressForBundleID:(id)arg0 ;
-(id)getEmailAddressForBundleURL:(id)arg0 ;
-(id)getLaunchInfoForBundleID:(id)arg0 ;
-(id)getLaunchInfoForBundleURL:(id)arg0 ;
-(id)getLaunchInfoForVersion:(id)arg0 ;
-(id)init;
-(void)getFeedbackMetadataForBundleID:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getFeedbackMetadataForBundleURL:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getLaunchInfoForBundleID:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getLaunchInfoForBundleURL:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setFeedbackEnabled:(BOOL)arg0 forVersion:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)setLaunchInfo:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setLaunchScreenEnabled:(BOOL)arg0 forVersion:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)submitFeedback:(id)arg0 bundleURL:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)submitFeedback:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)updateTestNotes:(id)arg0 forVersion:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif