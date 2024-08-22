// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXSTORYCONCRETEFIXEDASPECTONEUPCLIPCOMPOSITION_H
#define _PXSTORYCONCRETEFIXEDASPECTONEUPCLIPCOMPOSITION_H

@class NSString;
@protocol PXStoryClipComposition;

#import <Foundation/Foundation.h>


@interface _PXStoryConcreteFixedAspectOneUpClipComposition : NSObject <PXStoryClipComposition>

 {
    NSInteger _clipAssetIndex;
}


@property (readonly, nonatomic) CGFloat aspectRatio; // ivar: _aspectRatio
@property (readonly, nonatomic) *NSInteger clipAssetIndexes;
@property (readonly, nonatomic) BOOL clipFramesExtendToBounds;
@property (readonly, nonatomic) *NSInteger dividerAxes;
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSInteger mainDividerAxis; // ivar: _mainDividerAxis
@property (readonly, nonatomic) CGFloat mainDividerSplitRatio;
@property (readonly, nonatomic) NSInteger numberOfAssets;
@property (readonly, nonatomic) NSInteger numberOfClips;


-(id)description;
-(id)initWithAspectRatioNumerator:(NSInteger)arg0 denominator:(NSInteger)arg1 ;
-(void)getClipFrames:(struct CGRect *)arg0 forContext:(struct ? *)arg1 ;


@end


#endif