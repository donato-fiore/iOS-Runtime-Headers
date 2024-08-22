// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIPOSTPLAYDATAMANAGER_H
#define VUIPOSTPLAYDATAMANAGER_H


#import <Foundation/Foundation.h>


@interface VUIPostPlayDataManager : NSObject



+(id)_generateMediaInfoFromJSResponse:(id)arg0 canAutoPlay:(BOOL)arg1 ;
+(id)_metricsForPostPlayMediaItemFromLibrary:(id)arg0 ;
+(void)_fetchContentFromLibraryForCurrentMediaItem:(id)arg0 completion:(id)arg1 ;
+(void)_fetchPostPlayItemFromJSForSeriesCanonicalID:(id)arg0 andVideoCanonicalID:(id)arg1 completion:(id)arg2 ;
+(void)_fetchPostPlayItemFromLibraryContentForStoreID:(id)arg0 completion:(id)arg1 ;
+(void)fetchPostPlayItemForCurrentMediaItem:(id)arg0 completion:(id)arg1 ;


@end


#endif