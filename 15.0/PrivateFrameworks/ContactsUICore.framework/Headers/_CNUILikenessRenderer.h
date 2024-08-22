// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNUILIKENESSRENDERER_H
#define _CNUILIKENESSRENDERER_H

@class NSString;
@protocol CNUILikenessRendering, CNUIPRLikenessResolver, CNSchedulerProvider;

#import <Foundation/Foundation.h>


@interface _CNUILikenessRenderer : NSObject <CNUILikenessRendering>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNUIPRLikenessResolver> *likenessResolver; // ivar: _likenessResolver
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;


+(id)descriptorForRequiredKeys;
+(id)renderedLikenessesForProviders:(id)arg0 likenessBadgeProviders:(id)arg1 scope:(id)arg2 ;
+(struct CGImage *)cgImageForLikenessProvider:(id)arg0 pointSize:(struct CGSize )arg1 scale:(CGFloat)arg2 style:(NSUInteger)arg3 alwaysUsePointSize:(BOOL)arg4 ;
-(id)initWithLikenessResolver:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)likenessProvidersForBadges:(id)arg0 ;
-(id)likenessProvidersForBadges:(id)arg0 workScheduler:(id)arg1 ;
-(id)likenessProvidersForContacts:(id)arg0 likenessResolverOptions:(id)arg1 workScheduler:(id)arg2 ;
-(id)loadingPlaceholderForContactCount:(NSUInteger)arg0 scope:(id)arg1 ;
-(id)renderedBasicMonogramForString:(id)arg0 color:(id)arg1 scope:(id)arg2 prohibitedSources:(NSInteger)arg3 ;
-(id)renderedBasicMonogramFromString:(id)arg0 scope:(id)arg1 ;
-(id)renderedLikenessForBadge:(id)arg0 scope:(id)arg1 workScheduler:(id)arg2 ;
-(id)renderedLikenessForBadgeProvider:(id)arg0 scope:(id)arg1 ;
-(id)renderedLikenessesForContacts:(id)arg0 scope:(id)arg1 workScheduler:(id)arg2 ;
-(id)renderedLikenessesForContacts:(id)arg0 withBadges:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3 ;
-(id)renderedLikenessesForLikenessProviders:(id)arg0 badges:(id)arg1 scope:(id)arg2 likenessFingerprint:(id)arg3 ;
-(id)renderedLoadingPlaceholderForContactCount:(NSUInteger)arg0 provider:(id)arg1 scope:(id)arg2 ;


@end


#endif