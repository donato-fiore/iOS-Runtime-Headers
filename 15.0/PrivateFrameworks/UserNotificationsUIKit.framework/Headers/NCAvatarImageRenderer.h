// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCAVATARIMAGERENDERER_H
#define NCAVATARIMAGERENDERER_H

@class CNAvatarImageRenderer;

#import <Foundation/Foundation.h>


@interface NCAvatarImageRenderer : NSObject {
    CNAvatarImageRenderer *_avatarRenderer;
}




+(id)descriptorForRequiredKeys;
+(id)sharedInstance;
-(id)_init;
-(id)imageForContacts:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;


@end


#endif