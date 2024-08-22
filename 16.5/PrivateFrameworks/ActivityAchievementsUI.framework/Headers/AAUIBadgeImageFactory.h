// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIBADGEIMAGEFACTORY_H
#define AAUIBADGEIMAGEFACTORY_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AAUIBadgeView.h"
#import "AAUIAchievementResourceProvider.h"

@interface AAUIBadgeImageFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache; // ivar: _cache
@property (retain, nonatomic) AAUIBadgeView *earnedBadgeView; // ivar: _earnedBadgeView
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageCreationQueue; // ivar: _imageCreationQueue
@property (retain, nonatomic) AAUIAchievementResourceProvider *resourceProvider; // ivar: _resourceProvider
@property (retain, nonatomic) AAUIBadgeView *unearnedBadgeView; // ivar: _unearnedBadgeView


-(BOOL)hasCachedThumbnailImageForAchievement:(id)arg0 size:(struct CGSize )arg1 ;
-(id)generateImageForConfiguration:(id)arg0 size:(struct CGSize )arg1 unearned:(BOOL)arg2 ;
-(id)init;
-(id)thumbnailImageForAchievement:(id)arg0 size:(struct CGSize )arg1 ;
-(void)clearAllCachedImages;


@end


#endif