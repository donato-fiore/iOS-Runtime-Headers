// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXSTORYCONCRETECLIPCOMPOSITION_H
#define _PXSTORYCONCRETECLIPCOMPOSITION_H

@class NSString;
@protocol PXStoryClipComposition;

#import <Foundation/Foundation.h>


@interface _PXStoryConcreteClipComposition : NSObject <PXStoryClipComposition>

 {
    unsigned int _edges;
    CGFloat _splitRatios;
    NSInteger _dividerAxes;
    NSInteger _clipAssetIndexes;
}


@property (readonly, nonatomic) *NSInteger clipAssetIndexes;
@property (readonly, nonatomic) BOOL clipFramesExtendToBounds;
@property (readonly, nonatomic) *NSInteger dividerAxes;
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSInteger mainDividerAxis; // ivar: _mainDividerAxis
@property (readonly, nonatomic) CGFloat mainDividerSplitRatio;
@property (readonly, nonatomic) NSInteger numberOfAssets; // ivar: _numberOfAssets
@property (readonly, nonatomic) NSInteger numberOfClips; // ivar: _numberOfClips
@property (readonly, nonatomic) CGFloat primarySplitRatio; // ivar: _primarySplitRatio


-(id)description;
-(id)init;
-(id)initWithNumberOfClips:(NSInteger)arg0 primaryEdge:(unsigned int)arg1 splitRatio:(CGFloat)arg2 secondaryEdge:(unsigned int)arg3 splitRatio:(CGFloat)arg4 label:(id)arg5 ;
-(id)initWithOneUp;
-(id)initWithSingleAssetSplitAxis:(NSInteger)arg0 splitRatio:(CGFloat)arg1 label:(id)arg2 ;
-(id)initWithTwoUpEdge:(unsigned int)arg0 splitRatio:(CGFloat)arg1 label:(id)arg2 ;
-(void)getClipFrames:(struct CGRect *)arg0 forContext:(struct ? *)arg1 ;


@end


#endif