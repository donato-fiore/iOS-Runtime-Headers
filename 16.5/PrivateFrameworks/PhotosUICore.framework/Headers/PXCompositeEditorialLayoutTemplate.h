// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCOMPOSITEEDITORIALLAYOUTTEMPLATE_H
#define PXCOMPOSITEEDITORIALLAYOUTTEMPLATE_H


#import <Foundation/Foundation.h>


@interface PXCompositeEditorialLayoutTemplate : NSObject {
    *CGRect _rects;
    *CGFloat _rectWeights;
    BOOL _shouldIgnoreWeights;
}


@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger numberOfColumns; // ivar: _numberOfColumns
@property (readonly, nonatomic) NSInteger numberOfRects; // ivar: _numberOfRects
@property (readonly, nonatomic) CGFloat tileAspectRatio; // ivar: _tileAspectRatio


-(CGFloat)costForFittingLayoutItemInputs:(id)arg0 inRange:(struct _NSRange )arg1 ofTotalItemCount:(NSInteger)arg2 normalizedWeights:(*CGFloat)arg3 useSaliency:(BOOL)arg4 ;
-(id)init;
-(id)initWithDescriptorDictionary:(id)arg0 ;
-(void)_enumerateRectsUsingBlock:(id)arg0 ;
-(void)_initRectsStorageWithDescriptors:(id)arg0 ;
-(void)dealloc;
-(void)getComputedRects:(struct CGRect *)arg0 contentSize:(struct CGSize *)arg1 forReferenceSize:(struct CGSize )arg2 interTileSpacing:(CGFloat)arg3 ;


@end


#endif