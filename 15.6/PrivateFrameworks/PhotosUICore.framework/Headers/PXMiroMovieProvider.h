// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMIROMOVIEPROVIDER_H
#define PXMIROMOVIEPROVIDER_H

@class MiroMovie, NSSet;


#import "PXMovieProvider.h"

@interface PXMiroMovieProvider : PXMovieProvider

@property (retain, nonatomic, setter=_setMiroMovie:) MiroMovie *_miroMovie; // ivar: __miroMovie
@property (readonly, nonatomic) NSSet *defaultAssets;


+(*void)_loadMiroFrameworkIfNeeded;
+(void)initialize;
+(void)preloadMiroFrameworkIfNeeded;
-(BOOL)canPlayMovie;
-(BOOL)ppt_runTest:(id)arg0 options:(id)arg1 ;
-(id)diagnosticsItemProvider;
-(id)miroMovie:(id)arg0 createAndNavigateToMemoryFromCollection:(id)arg1 ;
-(id)movieViewController;
-(void)_navigateToMemory:(id)arg0 ;


@end


#endif