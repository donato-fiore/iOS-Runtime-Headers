// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYPERSISTABLERECIPESONGRESOURCEPRODUCER_H
#define PXSTORYPERSISTABLERECIPESONGRESOURCEPRODUCER_H

@protocol PXStorySongResourceProducer, PFStoryRecipe;

#import <Foundation/Foundation.h>


@interface PXStoryPersistableRecipeSongResourceProducer : NSObject <PXStorySongResourceProducer>

 {
    id<PFStoryRecipe> *_persistableRecipe;
}


@property (nonatomic) NSUInteger logContext; // ivar: logContext


-(id)init;
-(id)initWithPersistableRecipe:(id)arg0 ;
-(id)requestSongResourceWithOptions:(NSUInteger)arg0 resultHandler:(id)arg1 ;
-(void)_handleAppleMusicPlaybackStatus:(NSInteger)arg0 error:(id)arg1 parentProgress:(id)arg2 options:(NSUInteger)arg3 resultHandler:(id)arg4 ;
-(void)_handlePersistedAudioAsset:(id)arg0 isFinal:(BOOL)arg1 error:(id)arg2 options:(NSUInteger)arg3 resultHandler:(id)arg4 ;


@end


#endif