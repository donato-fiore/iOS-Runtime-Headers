// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXLAYOUTENGINE_H
#define PXLAYOUTENGINE_H

@class NSString;
@protocol PXMutableLayoutEngine, OS_dispatch_queue, PXLayoutDataSourceChangeDetails, PXLayoutEngineDataSourceSnapshot, PXLayoutEngineDelegate, PXLayoutItem;

#import <Foundation/Foundation.h>

#import "PXLayoutGenerator.h"
#import "PXLayoutSnapshot.h"

@interface PXLayoutEngine : NSObject <PXMutableLayoutEngine>

 {
    NSObject<OS_dispatch_queue> *_internalWorkQueue;
    ? _needsUpdateFlags;
}


@property (retain, nonatomic) NSObject<PXLayoutDataSourceChangeDetails> *changeDetails; // ivar: _changeDetails
@property (readonly, nonatomic) NSObject<PXLayoutEngineDataSourceSnapshot> *dataSourceSnapshot; // ivar: _dataSourceSnapshot
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXLayoutEngineDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXLayoutGenerator *layoutGenerator; // ivar: _layoutGenerator
@property (retain, nonatomic) PXLayoutSnapshot *layoutSnapshot; // ivar: _layoutSnapshot
@property (readonly, nonatomic) NSObject<PXLayoutItem> *seedItem; // ivar: _seedItem
@property (readonly) Class superclass;


-(BOOL)_needsUpdate;
-(BOOL)canComputeLayoutSnapshot;
-(id)computeLayoutSnapshot;
-(id)init;
-(id)initWithLayoutGenerator:(id)arg0 dataSourceSnapshot:(id)arg1 ;
-(id)performChangesAndWait:(id)arg0 ;
-(void)_publishChanges;
-(void)_setNeedsUpdate;
-(void)_updateIfNeeded;
-(void)_updateLayoutDataIfNeeded;
-(void)_updateLayoutSnapshotIfNeeded;
-(void)invalidateLayoutData;
-(void)invalidateLayoutSnapshot;
-(void)performChanges:(id)arg0 ;
-(void)updateLayoutDataWithChangeDetails:(id)arg0 ;


@end


#endif