// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYMEMORYFEEDVIEWLAYOUTSPECMANAGER_H
#define PXSTORYMEMORYFEEDVIEWLAYOUTSPECMANAGER_H

@class NSString;
@protocol PXChangeObserver;


#import "PXStoryFeedViewLayoutSpecManager.h"
#import "PXMemoriesSpecManager.h"
#import "PXUpdater.h"

@interface PXStoryMemoryFeedViewLayoutSpecManager : PXStoryFeedViewLayoutSpecManager <PXChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger layoutKind; // ivar: _layoutKind
@property (readonly, nonatomic) PXMemoriesSpecManager *memoriesSpecManager; // ivar: _memoriesSpecManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater


-(id)init;
-(id)initWithLayoutKind:(NSInteger)arg0 extendedTraitCollection:(id)arg1 ;
-(void)_invalidateSpec;
-(void)_setNeedsUpdate;
-(void)_updateSpec;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif