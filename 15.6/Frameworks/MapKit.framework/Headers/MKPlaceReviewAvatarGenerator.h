// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACEREVIEWAVATARGENERATOR_H
#define MKPLACEREVIEWAVATARGENERATOR_H

@class NSMutableDictionary, CNAvatarImageRenderer;
@protocol OS_dispatch_queue, MKInfoCardTheme;

#import <Foundation/Foundation.h>


@interface MKPlaceReviewAvatarGenerator : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_cachedMaskedImages;
}


@property (retain, nonatomic) CNAvatarImageRenderer *monogrammer; // ivar: _monogrammer
@property (weak, nonatomic) NSObject<MKInfoCardTheme> *theme; // ivar: _theme


-(id)init;
-(void)avatarForReview:(id)arg0 pointSize:(struct CGSize )arg1 completion:(id)arg2 ;
-(void)monogramForReviewerName:(id)arg0 pointSize:(struct CGSize )arg1 completion:(id)arg2 ;


@end


#endif