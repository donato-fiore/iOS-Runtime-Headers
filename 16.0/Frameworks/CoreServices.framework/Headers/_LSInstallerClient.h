// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSINSTALLERCLIENT_H
#define _LSINSTALLERCLIENT_H

@class NSString, NSXPCConnection, NSDictionary;
@protocol LSInstallationServiceCallbackProtocol, OS_dispatch_group, LSMIInstallUninstallCall;

#import <Foundation/Foundation.h>


@interface _LSInstallerClient : NSObject <LSInstallationServiceCallbackProtocol>

 {
    NSString *_operationTypeString;
    NSObject<OS_dispatch_group> *_callbackDeliveryGroup;
    os_unfair_lock_s _lock;
}


@property (readonly) BOOL allCallbacksDeleviered; // ivar: _allCallbacksDeleviered
@property (readonly) NSString *bundleID;
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSObject<LSMIInstallUninstallCall> *miCall; // ivar: _miCall
@property (nonatomic) NSUInteger operationType; // ivar: _operationType
@property (readonly, nonatomic) NSString *operationTypeString;
@property (retain, nonatomic) NSDictionary *options; // ivar: _options
@property (copy, nonatomic) id *progressBlock; // ivar: _progressBlock
@property (readonly) Class superclass;
@property (readonly, getter=isUninstaller) BOOL uninstaller;


+(id)installerWithBundleID:(id)arg0 bundleURL:(id)arg1 options:(id)arg2 callbackBlock:(id)arg3 ;
+(id)revertInstallerWithBundleID:(id)arg0 options:(id)arg1 callbackBlock:(id)arg2 ;
+(id)unInstallerWithBundleID:(id)arg0 options:(id)arg1 callbackBlock:(id)arg2 ;
-(id)initWithMICall:(id)arg0 options:(id)arg1 callbackBlock:(id)arg2 ;
-(void)_beginOperation;
-(void)_invalidate;
-(void)_waitForAllCallbackMessagesToExecute;
-(void)callbackDeliveryComplete;
-(void)updateCallbackWithData:(id)arg0 ;


@end


#endif