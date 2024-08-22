// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHRECENTSDOCUMENTEXTENSIONPROVIDER_H
#define SBHRECENTSDOCUMENTEXTENSIONPROVIDER_H

@class NSString, NSExtension, SBUIPopoverExtensionHostViewController;
@protocol _SBUIPopoverExtensionHostDelegate, SBHRecentsDocumentExtensionWrappingViewControllerDelegate, SBHRecentsDocumentExtensionProviderDelegate, _SBUIPopoverExtensionRemoteInterface;

#import <Foundation/Foundation.h>

#import "SBHRecentsDocumentExtensionWrappingViewController.h"

@interface SBHRecentsDocumentExtensionProvider : NSObject <_SBUIPopoverExtensionHostDelegate, SBHRecentsDocumentExtensionWrappingViewControllerDelegate>



@property (nonatomic) CGSize compactPreferredContentSize; // ivar: _compactPreferredContentSize
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHRecentsDocumentExtensionProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBUIPopoverExtensionHostViewController *hostViewController; // ivar: _hostViewController
@property (retain, nonatomic) NSObject<_SBUIPopoverExtensionRemoteInterface> *remoteService; // ivar: _remoteService
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesIntrinsicContentSizeBasedOnScreenSize;
@property (retain, nonatomic) SBHRecentsDocumentExtensionWrappingViewController *wrappingViewController; // ivar: _wrappingViewController


-(BOOL)canShowRecentsDocumentExtensionProviderForBundleIdentifier:(id)arg0 ;
-(BOOL)recentsDocumentExtensionWrappingViewControllerHasTransparentContent:(id)arg0 ;
-(id)_preferredExtensionIdentifier;
-(id)_viewControllerConfiguration:(id)arg0 ;
-(id)init;
-(id)recentsDocumentViewControllerForBundleIdentifier:(id)arg0 ;
-(void)_extensionWillExit:(id)arg0 ;
-(void)_loadExtensionWithCompletion:(id)arg0 ;
-(void)_loadRemoteViewControllerWithConfiguration:(id)arg0 ;
-(void)_setupHostViewController:(id)arg0 ;
-(void)_teardownHostViewController;
-(void)dealloc;
-(void)popoverHostExtensionDidExit:(id)arg0 ;
-(void)popoverHostExtensionRequestsDismiss:(id)arg0 ;


@end


#endif