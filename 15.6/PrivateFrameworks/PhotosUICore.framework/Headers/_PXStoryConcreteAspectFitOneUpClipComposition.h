// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXSTORYCONCRETEASPECTFITONEUPCLIPCOMPOSITION_H
#define _PXSTORYCONCRETEASPECTFITONEUPCLIPCOMPOSITION_H

@class NSString;
@protocol PXStoryClipComposition;

#import <Foundation/Foundation.h>


@interface _PXStoryConcreteAspectFitOneUpClipComposition : NSObject <PXStoryClipComposition>

 {
    NSInteger _clipAssetIndex;
}


@property (readonly, nonatomic) *NSInteger clipAssetIndexes;
@property (readonly, nonatomic) BOOL clipFramesExtendToBounds;
@property (readonly, nonatomic) *NSInteger dividerAxes;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSInteger mainDividerAxis; // ivar: _mainDividerAxis
@property (readonly, nonatomic) CGFloat mainDividerSplitRatio;
@property (readonly, nonatomic) NSInteger numberOfAssets;
@property (readonly, nonatomic) NSInteger numberOfClips;


-(id)description;
-(id)init;
-(void)getClipFrames:(struct CGRect *)arg0 forContext:(struct ? *)arg1 ;


@end


#endif