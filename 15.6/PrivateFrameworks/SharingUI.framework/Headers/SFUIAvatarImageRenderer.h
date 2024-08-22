// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFUIAVATARIMAGERENDERER_H
#define SFUIAVATARIMAGERENDERER_H

@class CNAvatarImageRenderer;

#import <Foundation/Foundation.h>


@interface SFUIAvatarImageRenderer : NSObject

@property (retain, nonatomic) CNAvatarImageRenderer *imageRenderer; // ivar: _imageRenderer


+(id)avatarImageRender;
-(id)avatarImageForContacts:(id)arg0 scope:(id)arg1 ;
-(id)init;


@end


#endif