// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUWALLPAPERPOSTERMIGRATOR_H
#define PUWALLPAPERPOSTERMIGRATOR_H

@class NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PUWallpaperPosterMigrator : NSObject

@property (readonly, nonatomic) NSURL *assetDirectory; // ivar: _assetDirectory
@property (readonly, nonatomic) NSUInteger configurationType; // ivar: _configurationType
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithAssetDirectory:(id)arg0 configurationType:(NSUInteger)arg1 ;
-(void)_handleLoadedConfiguration:(id)arg0 scale:(CGFloat)arg1 completionBlock:(id)arg2 ;
-(void)_handleSegmentationItem:(id)arg0 imageSize:(struct CGSize )arg1 scale:(CGFloat)arg2 options:(id)arg3 error:(id)arg4 completionBlock:(id)arg5 ;
-(void)attemptMigrationWithCompletionBlock:(id)arg0 ;


@end


#endif