// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMESSAGESSTACKITEMSLAYOUTHELPER_H
#define PXMESSAGESSTACKITEMSLAYOUTHELPER_H

@class PFMessagesStackLayoutFrameSolver, NSString, NSArray;
@protocol PXMutableMessagesStackItemsLayoutHelper;

#import <Foundation/Foundation.h>


@interface PXMessagesStackItemsLayoutHelper : NSObject <PXMutableMessagesStackItemsLayoutHelper>

 {
    NSUInteger _nestedChanges;
    NSUInteger _baseGeometriesSize;
    *? _baseGeometries;
    ? _initialItemCentralGeometry;
    ? _finalItemCentralGeometry;
    PFMessagesStackLayoutFrameSolver *_frameSolver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat normalizedContentInsets; // ivar: _normalizedContentInsets
@property (copy, nonatomic) NSArray *normalizedStackHorizontalOffsets; // ivar: _normalizedStackHorizontalOffsets
@property (nonatomic) CGFloat normalizedStackSizeTransform; // ivar: _normalizedStackSizeTransform
@property (nonatomic) CGFloat normalizedStackVerticalOffset; // ivar: _normalizedStackVerticalOffset
@property (nonatomic) CGFloat rotationAngle; // ivar: _rotationAngle
@property (nonatomic) NSUInteger stackedItemsCount; // ivar: _stackedItemsCount
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger zOrderArchSide; // ivar: _zOrderArchSide


-(CGFloat)horizontalContentMarginForReferenceSize:(struct CGSize )arg0 itemAspect:(CGFloat)arg1 ;
-(id)init;
-(struct ? )baseGeometryForIndex:(NSInteger)arg0 visibleRect:(struct CGRect )arg1 ;
-(struct CGSize )maxItemSizeForReferenceSize:(struct CGSize )arg0 ;
-(void)_swapBaseZPositions;
-(void)_updateInternalState;
-(void)dealloc;
-(void)getGeometries:(struct ? *)arg0 count:(NSUInteger)arg1 forVisibleRect:(struct CGRect )arg2 focus:(CGFloat)arg3 archSide:(NSUInteger)arg4 keyframeOverride:(NSInteger)arg5 ;
-(void)performChanges:(id)arg0 ;


@end


#endif