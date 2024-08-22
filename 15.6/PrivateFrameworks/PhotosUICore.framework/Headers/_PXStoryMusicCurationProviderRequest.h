// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXSTORYMUSICCURATIONPROVIDERREQUEST_H
#define _PXSTORYMUSICCURATIONPROVIDERREQUEST_H

@class NSMutableArray, PHAssetCollection, NSString, NSProgress, NSArray;
@protocol NSProgressReporting;

#import <Foundation/Foundation.h>

#import "PXStoryMusicCurationProviderOptions.h"

@interface _PXStoryMusicCurationProviderRequest : NSObject <NSProgressReporting>

 {
    NSMutableArray *_resultHandlers;
    BOOL _hasStarted;
    id *_completionHandler;
}


@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXStoryMusicCurationProviderOptions *options; // ivar: _options
@property (readonly) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) NSArray *recentlyUsedAppleMusicSongIDs; // ivar: _recentlyUsedAppleMusicSongIDs
@property (readonly, nonatomic) NSArray *recentlyUsedFlexSongIDs; // ivar: _recentlyUsedFlexSongIDs
@property (readonly) Class superclass;


-(id)init;
-(id)initWithAssetCollection:(id)arg0 options:(id)arg1 recentlyUsedFlexSongIDs:(id)arg2 recentlyUsedAppleMusicSongIDs:(id)arg3 completion:(id)arg4 ;
-(void)_handleCurationResult:(id)arg0 ;
-(void)appendResultHandler:(id)arg0 ;
-(void)start;


@end


#endif