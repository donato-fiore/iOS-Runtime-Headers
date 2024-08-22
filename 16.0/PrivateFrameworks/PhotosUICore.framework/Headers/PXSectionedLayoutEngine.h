// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSECTIONEDLAYOUTENGINE_H
#define PXSECTIONEDLAYOUTENGINE_H

@class NSString;
@protocol PXMutableSectionedLayoutEngine, PXSectionedLayoutEngineDelegate, PXSectionedLayoutItem;


#import "PXLayoutEngine.h"
#import "PXSectionedLayoutContent.h"

@interface PXSectionedLayoutEngine : PXLayoutEngine <PXMutableSectionedLayoutEngine>

 {
    PXSectionedLayoutContent *_layoutContent;
    ? _delegateRespondsTo;
    BOOL _needsUpdateSeedItem;
    *_PXLayoutGeometry _geometryBuffer;
    NSUInteger _geometryBufferCount;
}


@property (readonly, nonatomic) NSInteger axis; // ivar: _axis
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXSectionedLayoutEngineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXSectionedLayoutItem> *seedItem;
@property (readonly, nonatomic) CGSize seedSize; // ivar: _seedSize
@property (readonly) Class superclass;


-(BOOL)_computeSectionsIfNeeded;
-(BOOL)canComputeLayoutSnapshot;
-(id)_computeSectionsFromSection:(id)arg0 itemIndex:(NSInteger)arg1 kind:(NSInteger)arg2 ;
-(id)_emptyLayoutSnapshot;
-(id)_newLayoutSection;
-(id)_newLayoutSnapshot;
-(id)computeLayoutSnapshot;
-(id)init;
-(id)initWithAxis:(NSInteger)arg0 layoutGenerator:(id)arg1 dataSourceSnapshot:(id)arg2 ;
-(id)initWithAxis:(NSInteger)arg0 layoutGenerator:(id)arg1 dataSourceSnapshot:(id)arg2 insets:(struct UIEdgeInsets )arg3 ;
-(id)initWithLayoutGenerator:(id)arg0 dataSourceSnapshot:(id)arg1 ;
-(id)performChangesAndWait:(id)arg0 ;
-(void)_computeSection:(id)arg0 ;
-(void)_prepareGeometryBufferForCount:(NSUInteger)arg0 ;
-(void)_resetLayoutData;
-(void)_updateLayoutDataWithChangeDetails:(id)arg0 ;
-(void)dealloc;
-(void)performChanges:(id)arg0 ;
-(void)setDataSourceSnapshot:(id)arg0 withChangeDetails:(id)arg1 ;
-(void)updateLayoutDataWithChangeDetails:(id)arg0 ;


@end


#endif