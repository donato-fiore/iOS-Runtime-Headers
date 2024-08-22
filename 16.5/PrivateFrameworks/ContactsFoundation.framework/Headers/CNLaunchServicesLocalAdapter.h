// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNLAUNCHSERVICESLOCALADAPTER_H
#define CNLAUNCHSERVICESLOCALADAPTER_H

@class LSApplicationWorkspace;
@protocol CNLaunchServicesAdapter;

#import <Foundation/Foundation.h>


@interface CNLaunchServicesLocalAdapter : NSObject <CNLaunchServicesAdapter>



@property (retain, nonatomic) LSApplicationWorkspace *workspace; // ivar: _workspace


+(id)lsApplicationWorkspaceForBundleId:(id)arg0 ;
-(id)initWithApplicationWorkspace:(id)arg0 ;
-(void)applicationForBundleIdentifier:(id)arg0 withReply:(id)arg1 ;
-(void)applicationsAvailableForHandlingURLScheme:(id)arg0 withReply:(id)arg1 ;
-(void)applicationsForUserActivityType:(id)arg0 withReply:(id)arg1 ;
-(void)openSensitiveURLInBackground:(id)arg0 withOptions:(id)arg1 withReply:(id)arg2 ;
-(void)openUserActivityData:(id)arg0 inApplication:(id)arg1 withReply:(id)arg2 ;


@end


#endif