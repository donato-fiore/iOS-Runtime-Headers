// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFHOMEAPPINSTALLCONTROLLER_H
#define HFHOMEAPPINSTALLCONTROLLER_H

@class NAFuture, LSApplicationProxy, NSString, ASDSystemAppRequest, NSMutableSet;
@protocol ASDRequestObserver, LSApplicationWorkspaceObserverProtocol;

#import <Foundation/Foundation.h>


@interface HFHomeAppInstallController : NSObject <ASDRequestObserver, LSApplicationWorkspaceObserverProtocol>



@property (retain, nonatomic) NAFuture *activeHomeAppDownloadFuture; // ivar: _activeHomeAppDownloadFuture
@property (readonly, nonatomic) LSApplicationProxy *appProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger lastReportedStatus; // ivar: _lastReportedStatus
@property (retain, nonatomic) ASDSystemAppRequest *request; // ivar: _request
@property (readonly, nonatomic) NSInteger status;
@property (readonly, nonatomic) NSMutableSet *statusUpdaters; // ivar: _statusUpdaters
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_isHomeAppInstalled;
-(id)downloadHomeAppWithUpdateBlock:(id)arg0 ;
-(id)init;
-(void)_cleanup;
-(void)_dispatchStatusUpdate:(NSInteger)arg0 ;
-(void)applicationsDidFailToInstall:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)applicationsWillInstall:(id)arg0 ;
-(void)request:(id)arg0 didCompleteWithError:(id)arg1 ;


@end


#endif