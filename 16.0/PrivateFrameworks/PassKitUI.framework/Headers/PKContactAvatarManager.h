// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCONTACTAVATARMANAGER_H
#define PKCONTACTAVATARMANAGER_H

@class PKContactResolver, NSMutableDictionary, CNAvatarImageRenderer;
@protocol PKPaymentDataProvider, CNAvatarImageRenderingScope;

#import <Foundation/Foundation.h>


@interface PKContactAvatarManager : NSObject {
    PKContactResolver *_contactResolver;
    os_unfair_lock_s _lockAvatars;
    NSMutableDictionary *_dictionaryAvatars;
    id<PKPaymentDataProvider> *_paymentDataProvider;
    CNAvatarImageRenderer *_renderer;
    id<CNAvatarImageRenderingScope> *_scope;
}




-(id)cachedAvatarForAltDSID:(id)arg0 ;
-(id)initWithContactResolver:(id)arg0 paymentDataProvider:(id)arg1 ;
-(void)_avatarForAltDSID:(id)arg0 dsid:(id)arg1 handles:(id)arg2 contact:(id)arg3 completion:(id)arg4 ;
-(void)avatarForFamilyMember:(id)arg0 accountUser:(id)arg1 invitation:(id)arg2 completion:(id)arg3 ;
-(void)avatarForFamilyMember:(id)arg0 completion:(id)arg1 ;
-(void)avatarForFamilyMember:(id)arg0 peerPaymentAccount:(id)arg1 invitation:(id)arg2 completion:(id)arg3 ;


@end


#endif