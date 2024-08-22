// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CXCALLDIRECTORYMANAGER_H
#define CXCALLDIRECTORYMANAGER_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CXCallDirectoryManager : NSObject

@property (retain, nonatomic) NSXPCConnection *defaultConnection; // ivar: _defaultConnection
@property (retain, nonatomic) NSXPCConnection *maintenanceConnection; // ivar: _maintenanceConnection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedInstance;
-(id)defaultConnectionRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)maintenanceConnectionRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)compactStoreWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg0 completionHandler:(id)arg1 ;
-(void)firstIdentificationEntryForEnabledExtensionWithPhoneNumber:(id)arg0 completionHandler:(id)arg1 ;
-(void)getEnabledStatusForExtensionWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)getExtensionsWithCompletionHandler:(id)arg0 ;
-(void)openSettingsWithCompletionHandler:(id)arg0 ;
-(void)reloadExtensionWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)setEnabled:(BOOL)arg0 forExtensionWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)setPrioritizedExtensionIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)synchronizeExtensionsWithCompletionHandler:(id)arg0 ;


@end


#endif