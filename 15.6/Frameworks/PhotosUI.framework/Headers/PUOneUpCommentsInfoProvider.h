// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUONEUPCOMMENTSINFOPROVIDER_H
#define PUONEUPCOMMENTSINFOPROVIDER_H


#import <Foundation/Foundation.h>


@interface PUOneUpCommentsInfoProvider : NSObject



+(BOOL)_canHandleDisplayAsset:(id)arg0 ;
+(BOOL)hasUserLikedDisplayAsset:(id)arg0 ;
+(NSUInteger)commentCountForDisplayAsset:(id)arg0 ;
+(NSUInteger)likeCountForDisplayAsset:(id)arg0 ;
+(void)toggleLike:(BOOL)arg0 forDisplayAsset:(id)arg1 ;


@end


#endif