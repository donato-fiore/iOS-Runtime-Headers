// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFDOWNLOADICONCACHE_H
#define _SFDOWNLOADICONCACHE_H

@class NSPointerArray, NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>


@interface _SFDownloadIconCache : NSObject {
    NSPointerArray *_observers;
    NSMutableDictionary *_thumbnailCache;
    NSMutableDictionary *_utiCache;
    NSMutableSet *_activeRequestIdentifiers;
}




-(id)_genericIconForUTI:(id)arg0 ;
-(id)_lookupGenericIconForType:(id)arg0 ;
-(id)iconForSource:(id)arg0 ;
-(id)init;
-(void)_didGenerateThumbnail:(id)arg0 forSource:(id)arg1 ;
-(void)_generateThumbnailForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)_startThumbnailRequestForSource:(id)arg0 reportGenericIcons:(BOOL)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)regenerateIconForSource:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif