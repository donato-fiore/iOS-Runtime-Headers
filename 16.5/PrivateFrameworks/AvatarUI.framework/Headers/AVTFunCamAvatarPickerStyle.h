// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTFUNCAMAVATARPICKERSTYLE_H
#define AVTFUNCAMAVATARPICKERSTYLE_H


#import <Foundation/Foundation.h>


@interface AVTFunCamAvatarPickerStyle : NSObject

@property (nonatomic) CGSize cellSize; // ivar: _cellSize
@property (nonatomic) CGSize engagedCellSize; // ivar: _engagedCellSize
@property (nonatomic) UIEdgeInsets gridEdgeInsets; // ivar: _gridEdgeInsets
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing


+(id)defaultLayoutStyle;
+(id)insetProviderForConstant:(SEL)arg0 ;
-(CGFloat)edgeLengthFittingWidth:(CGFloat)arg0 environment:(id)arg1 ;
-(id)imageItemInsetsForGrid:(SEL)arg0 ;
-(id)imageItemInsetsForList:(SEL)arg0 ;
-(id)initWithCellSize:(struct CGSize )arg0 engagedCellSize:(struct CGSize )arg1 interitemSpacing:(CGFloat)arg2 gridEdgeInsets:(struct UIEdgeInsets )arg3 ;


@end


#endif