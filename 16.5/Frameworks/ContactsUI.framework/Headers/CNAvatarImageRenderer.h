// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAVATARIMAGERENDERER_H
#define CNAVATARIMAGERENDERER_H

@protocol CNUILikenessRendering, CNUIPRLikenessResolver, CNSchedulerProvider;

#import <Foundation/Foundation.h>


@interface CNAvatarImageRenderer : NSObject

@property (readonly, nonatomic) NSObject<CNUILikenessRendering> *renderer; // ivar: _renderer
@property (readonly, nonatomic) NSObject<CNUIPRLikenessResolver> *resolver; // ivar: _resolver
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider


+(id)descriptorForRequiredKeys;
-(id)avatarImageForContacts:(id)arg0 scope:(id)arg1 ;
-(id)avatarImageForContacts:(id)arg0 withBadges:(id)arg1 scope:(id)arg2 ;
-(id)imageForAvatarAccessoryView:(id)arg0 scope:(id)arg1 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)loadingPlaceholderImageProvider;
-(id)placeholderImageProvider;
-(id)renderAvatarsForContacts:(id)arg0 handler:(id)arg1 ;
-(id)renderAvatarsForContacts:(id)arg0 scope:(id)arg1 imageHandler:(id)arg2 ;
-(id)renderAvatarsForContacts:(id)arg0 scope:(id)arg1 includePlaceholder:(BOOL)arg2 imageHandler:(id)arg3 ;
-(id)renderAvatarsForContacts:(id)arg0 withBadges:(id)arg1 scope:(id)arg2 imageHandler:(id)arg3 ;
-(id)renderAvatarsForContacts:(id)arg0 withBadges:(id)arg1 scope:(id)arg2 includePlaceholder:(BOOL)arg3 imageHandler:(id)arg4 ;
-(id)renderAvatarsForContacts:(id)arg0 withBadges:(id)arg1 scope:(id)arg2 placeholder:(BOOL)arg3 workScheduler:(id)arg4 imageHandler:(id)arg5 ;
-(id)renderMonogramForContact:(id)arg0 color:(id)arg1 scope:(id)arg2 prohibitedSources:(NSInteger)arg3 ;
-(id)renderMonogramForString:(id)arg0 color:(id)arg1 scope:(id)arg2 prohibitedSources:(NSInteger)arg3 ;
-(id)renderMonogramForString:(id)arg0 handler:(id)arg1 ;
-(id)renderMonogramForString:(id)arg0 scope:(id)arg1 imageHandler:(id)arg2 ;
-(id)renderedLikenessesForContacts:(id)arg0 withBadges:(id)arg1 scope:(id)arg2 placeholder:(BOOL)arg3 workScheduler:(id)arg4 ;
-(id)renderedMonogramObservableForString:(id)arg0 scope:(id)arg1 ;
// -(id)runScopeBasedImageObservable:(id)arg0 scope:(unk)arg1 imageHandler:(id)arg2  ;


@end


#endif