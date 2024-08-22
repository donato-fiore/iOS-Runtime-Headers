// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNVISUALIDENTITYCONTACTAVATARPROVIDER_H
#define CNVISUALIDENTITYCONTACTAVATARPROVIDER_H

@protocol CNAvatarImageRenderingScope;

#import <Foundation/Foundation.h>

#import "CNAvatarImageRenderer.h"

@interface CNVisualIdentityContactAvatarProvider : NSObject

@property (retain, nonatomic) CNAvatarImageRenderer *avatarImageRenderer; // ivar: _avatarImageRenderer
@property (retain, nonatomic) NSObject<CNAvatarImageRenderingScope> *renderingScope; // ivar: _renderingScope


+(id)descriptorForRequiredKeys;
-(id)avatarImageForContact:(id)arg0 withSize:(struct CGSize )arg1 includePlaceholder:(BOOL)arg2 imageHandler:(id)arg3 ;
-(id)imageForAvatarAccessoryView:(id)arg0 withSize:(struct CGSize )arg1 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;


@end


#endif