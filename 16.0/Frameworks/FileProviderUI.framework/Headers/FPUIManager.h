// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPUIMANAGER_H
#define FPUIMANAGER_H


#import <Foundation/Foundation.h>


@interface FPUIManager : NSObject



+(BOOL)isAction:(id)arg0 eligibleForItems:(id)arg1 ;
+(id)actionsForProviderDomain:(id)arg0 ;
+(id)authenticationActionForProviderDomain:(id)arg0 ;
+(id)createFPUIActionWithIdentifier:(id)arg0 uiActionProviderIdentifier:(id)arg1 fileProviderIdentifier:(id)arg2 displayName:(id)arg3 predicate:(id)arg4 displayInline:(BOOL)arg5 isNonUIAction:(BOOL)arg6 fpProviderDomain:(id)arg7 ;
+(id)extensionMatchingDictionaryForItems:(id)arg0 fpProviderDomain:(id)arg1 ;
+(id)uiActionsForProviderDomain:(id)arg0 ;
+(id)uiExtensionPluginForProviderDomain:(id)arg0 ;
+(void)getUIExtensionPlugin:(*id)arg0 nonUIExtensionPlugin:(*id)arg1 forProviderDomain:(id)arg2 ;


@end


#endif