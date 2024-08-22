// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFFAVICONPROVIDER_H
#define _SFFAVICONPROVIDER_H

@class WBSFaviconProvider, NSCache;



@interface _SFFaviconProvider : WBSFaviconProvider {
    NSCache *_monogramTitleToImageCache;
}




+(id)_faviconWithSystemImageNamed:(id)arg0 ;
+(id)bookmarksFavicon;
+(id)fallbackFavicon;
+(id)favoritesFavicon;
+(id)historyFavicon;
+(id)readingListFavicon;
+(id)sharedWithYouFavicon;
-(id)fallbackIconForRequest:(id)arg0 ;
-(id)initWithPersistenceBaseURL:(id)arg0 persistenceName:(id)arg1 preferredIconSize:(struct CGSize )arg2 atScale:(CGFloat)arg3 allScales:(id)arg4 isReadOnly:(BOOL)arg5 shouldCheckIntegrityWhenOpeningDatabaseBlock:(id)arg6 ;


@end


#endif