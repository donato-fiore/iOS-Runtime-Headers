// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRPOSTEREXTENSION_H
#define PRPOSTEREXTENSION_H

@class NSUUID, LSApplicationExtensionRecord, NSOperationQueue, NSString, _EXExtensionIdentity, NSData, NSBundle, LSPropertyList, RBSProcessIdentity;
@protocol PRPosterExtensionDescribing;

#import <Foundation/Foundation.h>

#import "PRUpdatingService.h"

@interface PRPosterExtension : NSObject <PRPosterExtensionDescribing>

 {
    NSUUID *_uuid;
    LSApplicationExtensionRecord *_record;
    NSOperationQueue *_refreshConfigurationQueue;
    NSOperationQueue *_reloadDescriptorsQueue;
    PRUpdatingService *_lock_assetUpdater;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _EXExtensionIdentity *identity; // ivar: _identity
@property (readonly, nonatomic) NSString *pr_localizedName;
@property (readonly, nonatomic) NSData *pr_persistentIdentifier;
@property (readonly, nonatomic) NSBundle *pr_posterExtensionBundle;
@property (readonly, nonatomic) NSString *pr_posterExtensionBundleIdentifier;
@property (readonly, nonatomic) NSString *pr_posterExtensionContainerBundleIdentifier;
@property (readonly, nonatomic) LSPropertyList *pr_posterExtensionEntitlementsPlist;
@property (readonly, nonatomic) LSPropertyList *pr_posterExtensionInfoPlist;
@property (readonly, nonatomic) RBSProcessIdentity *pr_processIdentity; // ivar: _processIdentity
@property (readonly) Class superclass;


+(id)extensionWithIdentity:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithIdentity:(id)arg0 processIdentity:(id)arg1 ;
-(id)applicationExtensionRecord;
-(id)pr_assetUpdaterWithError:(*id)arg0 ;
-(id)pr_refreshConfigurationOperations;
-(id)pr_reloadDescriptorOperations;
-(void)clearUpdatingServiceForReason:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)pr_addRefreshConfigurationOperation:(id)arg0 waitUntilFinished:(BOOL)arg1 ;
-(void)pr_addReloadDescriptorOperation:(id)arg0 ;


@end


#endif