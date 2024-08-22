// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSFAVICONPROVIDERPRIVATECACHE_H
#define WBSFAVICONPROVIDERPRIVATECACHE_H

@class NSCache, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface WBSFaviconProviderPrivateCache : NSObject {
    NSCache *_uuidToImageDataCache;
    NSMutableDictionary *_pageURLStringToIconInfoDict;
    NSMutableDictionary *_iconURLStringToIconInfoDict;
    NSMutableDictionary *_urlStringToRejectedResourceIconInfoDict;
}




-(BOOL)linkPageURLString:(id)arg0 toIconURLString:(id)arg1 ;
-(id)firstImageDataMatchingPageURLStringIn:(id)arg0 matchedPageURLString:(*id)arg1 ;
-(id)imageDataForIconURLString:(id)arg0 ;
-(id)imageDataForPageURLString:(id)arg0 ;
-(id)imageInfoForIconURLString:(id)arg0 ;
-(id)imageInfoForPageURLString:(id)arg0 ;
-(id)init;
-(id)pageURLStringsWithPrefixesIn:(id)arg0 ;
-(id)rejectedResourceInfosForPageURLString:(id)arg0 iconURLString:(id)arg1 ;
-(void)removeAllImageDataWithCompletionHandler:(id)arg0 ;
-(void)removeImageDataForPageURLString:(id)arg0 ;
-(void)setImageData:(id)arg0 forPageURLString:(id)arg1 iconURLString:(id)arg2 iconSize:(struct CGSize )arg3 hasGeneratedResolutions:(BOOL)arg4 ;
-(void)setIsRejectedResource:(BOOL)arg0 forPageURLString:(id)arg1 iconURLString:(id)arg2 ;


@end


#endif