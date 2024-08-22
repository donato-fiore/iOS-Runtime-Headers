// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYHORIZONTALGADGETVIEWLAYOUTSPECMANAGER_H
#define PXSTORYHORIZONTALGADGETVIEWLAYOUTSPECMANAGER_H

@class NSString;
@protocol PXChangeObserver;


#import "PXStoryFeedViewLayoutSpecManager.h"
#import "PXGadgetSpec.h"
#import "PXGadgetSpecManager.h"

@interface PXStoryHorizontalGadgetViewLayoutSpecManager : PXStoryFeedViewLayoutSpecManager <PXChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) PXGadgetSpecManager *gadgetSpecManager; // ivar: _gadgetSpecManager
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithGadgetSpec:(id)arg0 ;
-(id)initWithGadgetSpecManager:(id)arg0 ;
-(void)_invalidateGadgetSpec;
-(void)_invalidateSpec;
-(void)_updateGadgetSpec;
-(void)_updateSpec;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif