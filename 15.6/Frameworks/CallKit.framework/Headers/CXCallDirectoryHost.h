// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CXCALLDIRECTORYHOST_H
#define CXCALLDIRECTORYHOST_H

@class NSString;
@protocol CXCallDirectoryManagerDefaultHostProtocol, CXCallDirectoryManagerMaintenanceHostProtocol, CXCallDirectoryHostDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CXCallDirectoryHost : NSObject <CXCallDirectoryManagerDefaultHostProtocol, CXCallDirectoryManagerMaintenanceHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXCallDirectoryHostDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(BOOL)_connectionContainsCallDirectoryHostEntitlementCapability:(id)arg0 ;
-(id)init;
-(void)_nsExtensionWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)compactStoreWithReply:(id)arg0 ;
-(void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg0 reply:(id)arg1 ;
-(void)getEnabledStatusForExtensionWithIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)getExtensionsWithReply:(id)arg0 ;
-(void)launchCallDirectorySettingsWithReply:(id)arg0 ;
-(void)performDelegateCallback:(id)arg0 ;
-(void)prepareStoreIfNecessary;
-(void)reloadExtensionWithIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)setEnabled:(BOOL)arg0 forExtensionWithIdentifier:(id)arg1 reply:(id)arg2 ;
-(void)setPrioritizedExtensionIdentifiers:(id)arg0 reply:(id)arg1 ;
-(void)synchronizeExtensionsWithReply:(id)arg0 ;


@end


#endif