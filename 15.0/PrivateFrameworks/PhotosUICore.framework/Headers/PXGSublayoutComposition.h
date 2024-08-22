// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGSUBLAYOUTCOMPOSITION_H
#define PXGSUBLAYOUTCOMPOSITION_H


#import <Foundation/Foundation.h>

#import "PXGCompositeLayout.h"
#import "PXGLayout.h"
#import "PXGSublayoutDataStore.h"

@interface PXGSublayoutComposition : NSObject {
    ? _updateFlags;
}


@property (weak, nonatomic) PXGCompositeLayout *compositeLayout; // ivar: _compositeLayout
@property (readonly, nonatomic) CGRect contentBounds;
@property (nonatomic) NSInteger lastSublayoutDataStoreVersion; // ivar: _lastSublayoutDataStoreVersion
@property (readonly, nonatomic) PXGLayout *layout;
@property (readonly, nonatomic) NSInteger numberOfSublayouts;
@property (readonly, nonatomic) CGSize referenceSize; // ivar: _referenceSize
@property (retain, nonatomic) PXGSublayoutDataStore *sublayoutDataStore; // ivar: _sublayoutDataStore
@property (readonly, nonatomic) *? sublayoutGeometries;


-(NSInteger)anchorSublayoutIndexForAnchoredContentEdges:(NSUInteger)arg0 ;
-(struct UIEdgeInsets )sublayoutInsetsForStylableType:(NSInteger)arg0 ;
-(void)enumerateSublayoutProvidersForRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;
-(void)updateEstimate;
-(void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(NSInteger)arg0 usingSublayoutUpdateBlock:(id)arg1 ;


@end


#endif