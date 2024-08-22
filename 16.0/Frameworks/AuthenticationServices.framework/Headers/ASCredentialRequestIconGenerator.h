// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCREDENTIALREQUESTICONGENERATOR_H
#define ASCREDENTIALREQUESTICONGENERATOR_H


#import <Foundation/Foundation.h>


@interface ASCredentialRequestIconGenerator : NSObject



+(id)_iconApplicationIdentifierForApplicationIdentifier:(id)arg0 ;
+(id)_iconForApplicationIdentifier:(id)arg0 size:(struct CGSize )arg1 ;
+(id)_iconForData:(id)arg0 scale:(CGFloat)arg1 size:(struct CGSize )arg2 ;
+(id)_iconForPasswordProviderBundleIdentifier:(id)arg0 ;
+(id)_iconForPresentationContext:(id)arg0 size:(struct CGSize )arg1 ;
+(id)_imageForIcon:(id)arg0 size:(struct CGSize )arg1 ;
+(id)_keychainIcon;
+(id)_providerIconForPasswordLoginChoice:(id)arg0 ;
+(id)headerIconForPresentationContext:(id)arg0 ;
+(id)iconForPasswordLoginChoice:(id)arg0 presentationContext:(id)arg1 ;
+(id)iconForPublicKeyCredentialLoginChoiceWithPresentationContext:(id)arg0 ;
+(id)passwordManagerIcon;


@end


#endif