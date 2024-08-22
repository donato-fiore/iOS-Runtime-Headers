// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCAVATARIMAGERENDERER_H
#define NCAVATARIMAGERENDERER_H

@class CNAvatarImageRenderer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NCAvatarImageRenderer : NSObject {
    CNAvatarImageRenderer *_avatarRenderer;
    NSObject<OS_dispatch_queue> *_avatarImageGenerationQueue;
    NSUInteger _avatarImageGenerationQueueUsageCount;
}




+(id)sharedInstance;
-(id)_getAvatarImageGenerationQueueAndIncrementUsageCount;
-(id)_imageNamed:(id)arg0 inBundleIdentifier:(id)arg1 traitCollection:(id)arg2 ;
-(id)_init;
-(id)_mainQueue_imageForContacts:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;
-(id)_systemImageNamed:(id)arg0 traitCollection:(id)arg1 ;
-(void)_decrementAvatarImageGenerationQueueUsageCountAndInvalidateIfNeeded;
-(void)renderAvatarForRequest:(id)arg0 compatibleWithTraitCollection:(id)arg1 completion:(id)arg2 ;


@end


#endif