// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYTRANSITIONCLIP_H
#define PXSTORYTRANSITIONCLIP_H

@class PFStoryRecipeDisplayAssetNormalization, NSString;
@protocol PXStoryClip, PXStoryResource;

#import <Foundation/Foundation.h>


@interface PXStoryTransitionClip : NSObject <PXStoryClip>



@property (readonly, nonatomic) ? clipInfo; // ivar: _clipInfo
@property (readonly, nonatomic) PFStoryRecipeDisplayAssetNormalization *colorNormalization;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger hash;
@property (readonly, nonatomic) NSInteger identifier;
@property (readonly, nonatomic) ? info;
@property (readonly, nonatomic) NSObject<PXStoryClip> *originalClip; // ivar: _originalClip
@property (readonly, nonatomic) NSObject<PXStoryResource> *resource;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? videoTimeRange;


-(BOOL)isEqualToClip:(id)arg0 ;
-(BOOL)isVisuallyEqualToClip:(id)arg0 ;
-(id)copyWithInfo:(struct ? )arg0 ;
-(id)initWithClipInfo:(struct ? )arg0 originalClip:(id)arg1 ;
-(struct ? )playbackTimeRangeForClipDuration:(CGFloat)arg0 ;


@end


#endif