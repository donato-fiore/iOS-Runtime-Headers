// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPUIACTION_H
#define FPUIACTION_H

@class UIDocumentBrowserActionDescriptor, FPProviderDomain;



@interface FPUIAction : UIDocumentBrowserActionDescriptor

@property (readonly, nonatomic) FPProviderDomain *fpProviderDomain; // ivar: _fpProviderDomain
@property (readonly, nonatomic) BOOL isNonUIAction; // ivar: _isNonUIAction


-(id)initWithIdentifier:(id)arg0 uiActionProviderIdentifier:(id)arg1 fileProviderIdentifier:(id)arg2 displayName:(id)arg3 predicate:(id)arg4 displayInline:(BOOL)arg5 isNonUIAction:(BOOL)arg6 ;
-(id)initWithIdentifier:(id)arg0 uiActionProviderIdentifier:(id)arg1 fileProviderIdentifier:(id)arg2 displayName:(id)arg3 predicate:(id)arg4 displayInline:(BOOL)arg5 isNonUIAction:(BOOL)arg6 fpProviderDomain:(id)arg7 ;


@end


#endif