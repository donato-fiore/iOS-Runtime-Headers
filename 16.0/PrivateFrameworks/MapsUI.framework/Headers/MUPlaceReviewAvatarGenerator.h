// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACEREVIEWAVATARGENERATOR_H
#define MUPLACEREVIEWAVATARGENERATOR_H

@class NSMutableDictionary, CNAvatarImageRenderer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MUPlaceReviewAvatarGenerator : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_cachedMaskedImages;
}


@property (retain, nonatomic) CNAvatarImageRenderer *monogrammer; // ivar: _monogrammer


-(id)init;
-(void)avatarForReview:(id)arg0 pointSize:(struct CGSize )arg1 completion:(id)arg2 ;
-(void)monogramForReviewerName:(id)arg0 pointSize:(struct CGSize )arg1 completion:(id)arg2 ;


@end


#endif