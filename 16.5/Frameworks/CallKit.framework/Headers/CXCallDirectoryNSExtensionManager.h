// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXCALLDIRECTORYNSEXTENSIONMANAGER_H
#define CXCALLDIRECTORYNSEXTENSIONMANAGER_H

@class NSString, NSDictionary;
@protocol LSApplicationWorkspaceObserverProtocol, CXCallDirectoryNSExtensionManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CXCallDirectoryNSExtensionManager : NSObject <LSApplicationWorkspaceObserverProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXCallDirectoryNSExtensionManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) id *extensionMatchingContext; // ivar: _extensionMatchingContext
@property (copy, nonatomic) NSDictionary *extensions; // ivar: _extensions
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)baseExtensionMatchingAttributes;
-(id)init;
-(void)_beginMatchingExtensionsIfNecessary;
-(void)_extensionForIdentifier:(id)arg0 containingAppBundleURL:(id)arg1 completion:(id)arg2 ;
-(void)beginMatchingExtensions;
-(void)dealloc;
-(void)extensionWithIdentifier:(id)arg0 inContainingAppWithProcessIdentifier:(int)arg1 completion:(id)arg2 ;
-(void)extensionsWithCompletionHandler:(id)arg0 ;
-(void)pluginsDidInstall:(id)arg0 ;


@end


#endif