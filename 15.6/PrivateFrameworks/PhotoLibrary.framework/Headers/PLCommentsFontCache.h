// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCOMMENTSFONTCACHE_H
#define PLCOMMENTSFONTCACHE_H

@class UIFontDescriptor, UIFont;

#import <Foundation/Foundation.h>


@interface PLCommentsFontCache : NSObject {
    UIFontDescriptor *__shortCaptionFontDescriptor;
    UIFontDescriptor *__emphasizedShortCaptionFontDescriptor;
    UIFontDescriptor *__shortSubheadlineFontDescriptor;
    UIFontDescriptor *__bodyFontDescriptor;
    UIFontDescriptor *__emphasizedBodyFontDescriptor;
    UIFontDescriptor *__shortBodyFontDescriptor;
}


@property (readonly, nonatomic) UIFont *commentAttributionDateFont;
@property (readonly, nonatomic) UIFont *commentAttributionNameFont;
@property (readonly, nonatomic) UIFont *commentEntryFont;
@property (readonly, nonatomic) UIFont *commentSendButtonFont;
@property (readonly, nonatomic) UIFont *commentTextFont;
@property (readonly, nonatomic) UIFont *likeFont;
@property (readonly, nonatomic) UIFont *youLikeFont;


+(id)sharedCache;
-(id)_bodyFontDescriptor;
-(id)_emphasizedBodyFontDescriptor;
-(id)_emphasizedShortCaptionFontDescriptor;
-(id)_shortBodyFontDescriptor;
-(id)_shortCaptionFontDescriptor;
-(id)_shortSubheadlineFontDescriptor;
-(id)init;
-(void)_contentSizesDidChange:(id)arg0 ;
-(void)_invalidateCache;
-(void)dealloc;


@end


#endif