// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGGENERATEDLAYOUT_H
#define PXGGENERATEDLAYOUT_H

@class NSString;
@protocol PXGDiagnosticsProvider, PXGGeneratedLayoutDelegate;


#import "PXGItemsLayout.h"
#import "PXLayoutGenerator.h"
#import "PXGLayoutGuide.h"

@interface PXGGeneratedLayout : PXGItemsLayout <PXGDiagnosticsProvider>

 {
    PXLayoutGenerator *_generator;
    *_PXLayoutGeometry _generatorGeometryBuffer;
    NSInteger _generatorGeometryBufferCount;
    BOOL _isUpdatingSprites;
    ? _updateFlags;
}


@property (nonatomic) ? cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger defaultSpriteTag; // ivar: _defaultSpriteTag
@property (weak, nonatomic) NSObject<PXGGeneratedLayoutDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) PXLayoutGenerator *generator;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXGLayoutGuide *headerLayoutGuide; // ivar: _headerLayoutGuide
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (nonatomic) NSInteger keyItemIndex; // ivar: _keyItemIndex
@property (nonatomic) NSInteger keyItemSpriteTag; // ivar: _keyItemSpriteTag
@property (nonatomic) int mediaKind; // ivar: _mediaKind
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (readonly) Class superclass;
@property (nonatomic) BOOL useSaliency; // ivar: _useSaliency


-(id)init;
-(id)newGenerator;
-(id)objectReferenceForSpriteIndex:(unsigned int)arg0 ;
-(struct CGSize )sizeForItem:(NSInteger)arg0 ;
-(void)_resizeGeometryBufferForSpriteCount:(NSInteger)arg0 ;
-(void)_updateContentSize;
-(void)_updateGenerator;
-(void)_updateSprites;
-(void)dealloc;
-(void)didApplySpriteChangeDetails:(id)arg0 ;
-(void)enumerateItemsInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)getSpriteZPosition:(*float)arg0 clippingRect:(struct CGRect *)arg1 forSpriteKind:(NSInteger)arg2 ;
-(void)metricsDidChange;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(void)spritesDidUpdate;
-(void)update;


@end


#endif