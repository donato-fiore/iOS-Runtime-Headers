// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLICATIONREGISTRY_H
#define PKAPPLICATIONREGISTRY_H

@class NSMutableSet, NSURL, NSString;
@protocol LSApplicationWorkspaceObserverProtocol, OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKApplicationRegistry : NSObject <LSApplicationWorkspaceObserverProtocol>

 {
    NSMutableSet *_registeredBundleIdentifiers;
    NSURL *_archiveFileURL;
    NSObject<OS_dispatch_semaphore> *_archiveSemaphore;
    NSObject<OS_dispatch_queue> *_applicationRegistryQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)applicationIsRegisteredWithBundleIdentifier:(id)arg0 ;
-(BOOL)registerApplicationWithBundleIdentifier:(id)arg0 ;
-(id)initWithArchiveFileURL:(id)arg0 ;
-(void)_requestArchiveToDisk;
-(void)_validateRegisteredApplications;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)dealloc;


@end


#endif