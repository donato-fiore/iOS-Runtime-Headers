// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFTOUCHICONCACHE_H
#define _SFTOUCHICONCACHE_H

@class WBSTouchIconCache;



@interface _SFTouchIconCache : WBSTouchIconCache



+(id)_generateDefaultFavoritesIcon;
+(id)_monogramConfiguration;
+(id)defaultBackgroundColor;
-(BOOL)canHandleRequest:(id)arg0 ;
-(id)_operationWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)_didLoadTouchIcon:(id)arg0 withCacheSettingsEntry:(id)arg1 ;


@end


#endif