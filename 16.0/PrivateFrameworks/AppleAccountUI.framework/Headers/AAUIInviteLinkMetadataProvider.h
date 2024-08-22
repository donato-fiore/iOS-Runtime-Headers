// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIINVITELINKMETADATAPROVIDER_H
#define AAUIINVITELINKMETADATAPROVIDER_H

@class AAMessagesInviteContext;

#import <Foundation/Foundation.h>


@interface AAUIInviteLinkMetadataProvider : NSObject {
    AAMessagesInviteContext *_context;
}




-(id)_defaultBackgroundImage;
-(id)_lpImageWithImage:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)loadMetadataWithImage:(id)arg0 completion:(id)arg1 ;


@end


#endif